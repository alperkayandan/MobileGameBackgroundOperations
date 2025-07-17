// Fill out your copyright notice in the Description page of Project Settings.


#include "BackgroundLogicOperations.h"
#include "C_GameInstance.h"
#include "HelperCalculationFunctions.h"
#include "AsyncBackgroundOperations.h"

#include "Kismet/GameplayStatics.h"



UBackgroundLogicOperations* UBackgroundLogicOperations::CreateAsyncBackgroundLogicOperations() {
	return NewObject<UBackgroundLogicOperations>();
}

void UBackgroundLogicOperations::StartAsyncControlForBackgroundOperations(UObject* WorldContextObject) {
	
	UDataTable* AllFeaturesDataTable = Cast<UDataTable>(StaticLoadObject(UDataTable::StaticClass(), nullptr, TEXT("/Game/Datas/AllWeaponFeatures.AllWeaponFeatures")));
	
	Async(EAsyncExecution::Thread, [this, WorldContextObject, AllFeaturesDataTable]() {

		FTenderOfferData OfferData;

		CheckCountryBordersForOffer(WorldContextObject, AllFeaturesDataTable, OfferData); // silah satýþ kontratý, silah tasarým kontratý ve ihale teklifini kontrol eden fonksiyon.
		
		if (OfferData.IsTenderOffer || OfferData.IsSellContractOffer || OfferData.IsDesignContractOffer) {

			AsyncTask(ENamedThreads::GameThread, [this, OfferData]() {

				CreateOfferPage.Broadcast(OfferData);

			});

		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("Hicbir teklif gönderilmedi"))
		}




	});

}

void UBackgroundLogicOperations::DistributeProducedWeapons(UObject* WorldContextObject, TArray<FFactorys>& GlobalFactorysData) {
	UWorld* World = GetWorld();
	UC_GameInstance* GI = Cast<UC_GameInstance>(UGameplayStatics::GetGameInstance(World));
	GI->Implements<USaveInterface>();
	UC_SaveGame* LoadedSave;
	ISaveInterface::Execute_GetGameData(GI, LoadedSave);

	FGeneralDatas& GeneralDatas = LoadedSave->GeneralDatas;
	GlobalFactorysData = LoadedSave->Factorys;

	if (FDateTime::UtcNow() >= GeneralDatas.NextTimeControlGlobalFactories) {

		ControlGlobalFactorysProducedWeapons(WorldContextObject, GlobalFactorysData);
		GeneralDatas.NextTimeControlGlobalFactories = FDateTime::UtcNow() + FTimespan::FromHours(FMath::RandRange(3, 12));
	}

}

void UBackgroundLogicOperations::ControlGlobalFactorysProducedWeapons(UObject* WorldContextObject, TArray<FFactorys>& GlobalFactorysData) {
	
	UC_GameInstance* GI = Cast<UC_GameInstance>(UGameplayStatics::GetGameInstance(WorldContextObject));
	GI->Implements<USaveInterface>();
	UC_SaveGame* LoadedSave;
	ISaveInterface::Execute_GetGameData(GI, LoadedSave);

	TArray<FNewDesignedProductsStruct>& DesignedProductsData = LoadedSave->DesignedProducts;
	FDateTime CurrentTime = FDateTime::UtcNow();

	for (FFactorys& FactoryData : GlobalFactorysData) {

		TMap<int32, FDateTime>& ProductIndexsAndLastTimeCollected = FactoryData.LastTimeCollectedProducts;
		TArray<int32> AllProductIndexs;
		ProductIndexsAndLastTimeCollected.GetKeys(AllProductIndexs);
		float FactoryProductionSpeedMultiplier = FactoryData.ProductionSpeedMultiplier;

		for (int32 DesignedProductIndex : AllProductIndexs) {
			
			FDateTime* LastTimeProductCollected = ProductIndexsAndLastTimeCollected.Find(DesignedProductIndex);

			if (CurrentTime >= *LastTimeProductCollected + (DesignedProductsData[DesignedProductIndex].ProductionTime / FactoryProductionSpeedMultiplier)) {
				
				double SecondPassed = (CurrentTime - *LastTimeProductCollected).GetTotalSeconds();
				DesignedProductsData[DesignedProductIndex].ProducedUnits += FMath::FloorToInt((SecondPassed * ((DesignedProductsData[DesignedProductIndex].ProductionTime.GetTotalSeconds()) / FactoryProductionSpeedMultiplier)));
				ProductIndexsAndLastTimeCollected.Add(DesignedProductIndex, CurrentTime);

			}

		}

	}

}

void UBackgroundLogicOperations::CheckCountryBordersForOffer(UObject* WorldContextObject, UDataTable* AllFeaturesDataTable, FTenderOfferData& OfferData) {

	UC_GameInstance* GI = Cast<UC_GameInstance>(UGameplayStatics::GetGameInstance(WorldContextObject));
	GI->Implements<USaveInterface>();
	UC_SaveGame* LoadedSave;
	ISaveInterface::Execute_GetGameData(GI, LoadedSave);

	TArray<FCountrys> AllCountrys = LoadedSave->Countrys;
	TArray<FRebellion> AllRebellions = LoadedSave->Rebellion;
	int32 RandomSelectedCountryIndex;
	
	for (int i = 0; i < 5; i++) {

		FCountrys FoundFirstCountryStruct;
		FCountrys FoundOppeonentCountryStruct;
		FRebellion RebellionsInSelectedCountry;

		TArray<FName> CountryBorders;
		RandomSelectedCountryIndex = FMath::RandRange(0, AllCountrys.Num() - 1);

		FoundFirstCountryStruct = AllCountrys[RandomSelectedCountryIndex];
		OfferData.RequestedCountryName = FoundFirstCountryStruct.CountryName;
	
		CountryBorders = AllCountrys[RandomSelectedCountryIndex].LandBorders;
		CountryBorders.Append(AllCountrys[RandomSelectedCountryIndex].WaterBorders);

		// Ýçindeki isyancýlarý buluyor.
		if (AllRebellions.Num() < 0) {

			for (FRebellion Rebels : AllRebellions) {

				if (Rebels.SupportedCountryName.Equals(FoundFirstCountryStruct.CountryName, ESearchCase::IgnoreCase)) {

					RebellionsInSelectedCountry = Rebels;
					break;
				}

			}

		}

		// Komþusu olan ülkelerden rastgele seçimler yapýyor.
		for (int j = 0; j < 5; j++) {
			
			int32 RandomSelectedBorderIndex = -1;

			RandomSelectedBorderIndex = FMath::RandRange(0, CountryBorders.Num() - 1);

			if (RandomSelectedBorderIndex != -1) {

				FName BorderCountryName = CountryBorders[RandomSelectedBorderIndex];
				
				for (FCountrys OpponentCountry : AllCountrys) {

					if (OpponentCountry.CountryName.Equals(BorderCountryName.ToString(), ESearchCase::IgnoreCase)) {

						FoundOppeonentCountryStruct = OpponentCountry;
						break;
					}

				}

				SelectOfferForCountry(WorldContextObject, AllFeaturesDataTable, FoundFirstCountryStruct, FoundOppeonentCountryStruct, RebellionsInSelectedCountry, OfferData);
				
				if (OfferData.IsTenderOffer || OfferData.IsSellContractOffer || OfferData.IsDesignContractOffer) {
					return;
				}
			
			}
			else {

				UE_LOG(LogTemp, Error, TEXT("Ulkenin sinir komsusu yok."));

			}

		}     

	}

}

void UBackgroundLogicOperations::SelectOfferForCountry(UObject* WorldContextObject, UDataTable* AllFeaturesDataTable, FCountrys FirstCountry, FCountrys OpponentCountry, FRebellion RebellionsInSelectedCountry, FTenderOfferData& OfferData) {

	UC_GameInstance* GI = Cast<UC_GameInstance>(UGameplayStatics::GetGameInstance(WorldContextObject));
	GI->Implements<USaveInterface>();
	UC_SaveGame* LoadedSave;
	ISaveInterface::Execute_GetGameData(GI, LoadedSave);

	FGeneralDatas GeneralDatas = LoadedSave->GeneralDatas;

	TMap<FName, int32> WeaponCategoriesAndCountDiff; 
	TMap<FName, int32> WeaponTypesAndCountDiff; 
	TArray<FName> FirstCountryDoesntHaveTheseWeaponTypes; 
	TMap<FString, FName> FirstCountryBadThisWeaponFeatureNameAndCategory;
	TMap<FName, int32> WeaponOverallsByCategories;
	TMap<FName, int32> WeaponOverallsByTypes;

	//iliþkiler gelecek sonra eksikliklere bakýlacak ona göre teklif oluþturulacak.
	TMap<FName, int32> FirstCountryRelations = FirstCountry.Relationships;
	int32* FirstCountryToOpponentCountryRelation = FirstCountryRelations.Find(FName(OpponentCountry.CountryName));

	// ayný zamanda isyancýlar içinde isyan ihtimali %50 üzerine çýktý mý gibi bir kontrol lazým. ve ona göre silah satýn alabilir.

	UHelperCalculationFunctions::FindSelectedCountryWeaponNeeds(WorldContextObject, AllFeaturesDataTable, FirstCountry, OpponentCountry, RebellionsInSelectedCountry, WeaponCategoriesAndCountDiff, WeaponTypesAndCountDiff, WeaponOverallsByCategories, WeaponOverallsByTypes, FirstCountryDoesntHaveTheseWeaponTypes, FirstCountryBadThisWeaponFeatureNameAndCategory);

	// ya silah satýn alacak ya da ihale oluþturmasý lazým.
	if (*FirstCountryToOpponentCountryRelation < 0) {

		int32 SellPossibility = FMath::RandRange(0, 100);

		if (SellPossibility <= GeneralDatas.CompanyPopularity) { //Popülerlik þartý saðlanmýþtýr.

			//silah satýn almasý için -> popülerlik ve düþmanlarýnýn silahlarýnýn çoðu bizim mi? ve overall -10 +10 var mý?
			OfferData.IsSellContractOffer = OfferWeaponSellContract(WorldContextObject, FirstCountry, WeaponTypesAndCountDiff, WeaponOverallsByCategories, WeaponOverallsByTypes, FirstCountryDoesntHaveTheseWeaponTypes, OfferData);
		
		}
		else {

			FDateTime CurrentTime = FDateTime::UtcNow();

			if (CurrentTime >= GeneralDatas.TenderLastTime) {

				//ihale için -> istenilen tip ya da özelliklerden en az biri bizde var mý?
				OfferData.IsTenderOffer = OfferTender(WorldContextObject, WeaponCategoriesAndCountDiff, WeaponOverallsByCategories, FirstCountryBadThisWeaponFeatureNameAndCategory, OfferData);

			}
			else {
				UE_LOG(LogTemp, Warning, TEXT("Zaten devam eden bir ihale var."));
			}
		
		}
																										
	}
	// kendinde eksik olan türlere ya da özelliklere göre ya ihale ya da tasarým yaptýracak.
	else {

		int32 SellPossibility = FMath::RandRange(0, 100);

		if (SellPossibility <= GeneralDatas.CompanyPopularity) {
			//tasarým için -> popülerlik ve daha önce silah sattýk mý o tasarým yapýlabilir mi?
			OfferData.IsDesignContractOffer = OfferWeaponDesignContract(WorldContextObject, FirstCountryDoesntHaveTheseWeaponTypes, FirstCountryBadThisWeaponFeatureNameAndCategory, WeaponOverallsByCategories, WeaponOverallsByTypes, OfferData);

		}
		else {

			FDateTime CurrentTime = FDateTime::UtcNow();

			if (CurrentTime >= GeneralDatas.TenderLastTime) {

				//ihale için -> istenilen tip ya da özelliklerden en az biri bizde var mý?
				OfferData.IsTenderOffer = OfferTender(WorldContextObject, WeaponCategoriesAndCountDiff, WeaponOverallsByCategories, FirstCountryBadThisWeaponFeatureNameAndCategory, OfferData);

			}
			else {
				UE_LOG(LogTemp, Warning, TEXT("Zaten devam eden bir ihale var."));
			}

		}

	}

}

bool UBackgroundLogicOperations::OfferWeaponSellContract(UObject* WorldContextObject, FCountrys SelectedCountry, TMap<FName, int32> WeaponTypesAndCountDiff, TMap<FName, int32> WeaponOverallsByCategories, TMap<FName, int32> WeaponOverallsByTypes, TArray<FName> FirstCountryDoesntHaveTheseWeaponTypes, FTenderOfferData& OfferData) {
	
	UC_GameInstance* GI = Cast<UC_GameInstance>(UGameplayStatics::GetGameInstance(WorldContextObject));
	GI->Implements<USaveInterface>();
	UC_SaveGame* LoadedSave;
	ISaveInterface::Execute_GetGameData(GI, LoadedSave);

	TArray<FNewDesignedProductsStruct> DesignedProducts = LoadedSave->DesignedProducts;
	TArray<FNewDesignedProductsStruct> AvailableDesigns;
	TArray<FName> MissingTypes;
	TMap<int32, int32> SelectedCountryAllWeapons = SelectedCountry.WeaponsIndexsAndCountsInStorage;
	bool MyCompanyAvailableToSellOffer = false;

	for (TPair<FName, int32> TypesAndCountDiffs : WeaponTypesAndCountDiff) {

		if (TypesAndCountDiffs.Value <= 10000) {
			MissingTypes.Add(TypesAndCountDiffs.Key);
		}

	}

	FName RandomSelectedWeaponType;

	if (MissingTypes.Num() >= 1) {

		RandomSelectedWeaponType = MissingTypes[FMath::RandRange(0, MissingTypes.Num() - 1)];

	}
	else if (FirstCountryDoesntHaveTheseWeaponTypes.Num() >= 1) {

		RandomSelectedWeaponType = FirstCountryDoesntHaveTheseWeaponTypes[FMath::RandRange(0, FirstCountryDoesntHaveTheseWeaponTypes.Num() - 1)];

	}
	else {
		RandomSelectedWeaponType = UAllStructs::AllWeaponTypes[FMath::RandRange(0, UAllStructs::AllWeaponTypes.Num() - 1)];
	}

	for (int i = 0; i < DesignedProducts.Num(); i++) {

		if (DesignedProducts[i].IsDesignedByMyCompany && DesignedProducts[i].Type == RandomSelectedWeaponType) {

			int32* AvarageOverall = 0;

			if (WeaponOverallsByTypes.Find(DesignedProducts[i].Type)) {

				 AvarageOverall = WeaponOverallsByTypes.Find(DesignedProducts[i].Type);

				if (DesignedProducts[i].Overall >= (*AvarageOverall - 10) && DesignedProducts[i].Overall <= (*AvarageOverall + 15)) {
					AvailableDesigns.Add(DesignedProducts[i]);
				}

			}
			else if (WeaponOverallsByCategories.Find(DesignedProducts[i].Class)) {

				AvarageOverall = WeaponOverallsByCategories.Find(DesignedProducts[i].Class);

				if (DesignedProducts[i].Overall >= (*AvarageOverall - 5) && DesignedProducts[i].Overall <= (*AvarageOverall + 10)) {
					AvailableDesigns.Add(DesignedProducts[i]);
				}

			}
			else {

				for (TPair<FName, int32> OverallsByCategories : WeaponOverallsByCategories) {
					*AvarageOverall += OverallsByCategories.Value;
				}

				*AvarageOverall = *AvarageOverall / WeaponOverallsByCategories.Num();
				
				if (DesignedProducts[i].Overall >= (*AvarageOverall - 5) && DesignedProducts[i].Overall <= (*AvarageOverall + 5)) {
					AvailableDesigns.Add(DesignedProducts[i]);
				}
				
			}
			
		}

	}

	FNewDesignedProductsStruct SelectedProductForSell;

	if (AvailableDesigns.Num() >= 1) {

		SelectedProductForSell = AvailableDesigns[FMath::RandRange(0, AvailableDesigns.Num() - 1)];
		MyCompanyAvailableToSellOffer = true;

	}
	else {
		
		for (TPair<int32, int32> CountryWeaponIndexsAndCounts : SelectedCountryAllWeapons) {

			if (DesignedProducts[CountryWeaponIndexsAndCounts.Key].IsDesignedByMyCompany && DesignedProducts[CountryWeaponIndexsAndCounts.Key].Type == RandomSelectedWeaponType) {
				AvailableDesigns.Add(DesignedProducts[CountryWeaponIndexsAndCounts.Key]);
			}

		}

		SelectedProductForSell = AvailableDesigns[FMath::RandRange(0, AvailableDesigns.Num() - 1)];

		MyCompanyAvailableToSellOffer = true;
	}

	OfferData.SelectedProductForSellOffer = SelectedProductForSell;

	// satýþ adedi
	// satýþýn son geçerlilik süresi
	// kazanýlacak para

	return MyCompanyAvailableToSellOffer;
}

bool UBackgroundLogicOperations::OfferTender(UObject* WorldContextObject, TMap<FName, int32> WeaponCountDiffByCategories, TMap<FName, int32>WeaponOverallsByCategories, TMap<FString, FName> SelectedCountryFeatureNeedsAndCategories, FTenderOfferData& OfferData) {

	UC_GameInstance* GI = Cast<UC_GameInstance>(UGameplayStatics::GetGameInstance(WorldContextObject));
	GI->Implements<USaveInterface>();
	UC_SaveGame* LoadedSave;
	ISaveInterface::Execute_GetGameData(GI, LoadedSave);

	TArray<FMyFactorys> MyFactorys = LoadedSave->MyFactorys;
	TArray<FNewDesignedProductsStruct> DesignedProducts = LoadedSave->DesignedProducts;

	if (MyFactorys.Num() < 1 && DesignedProducts.Num() < 1) {
		return false;
	}
	else {
		FName RandomSelectedWeaponCategory = MyFactorys[FMath::RandRange(0, MyFactorys.Num() - 1)].ProductionClass;
		int32* CountDiff = WeaponCountDiffByCategories.Find(RandomSelectedWeaponCategory);
		int32* CountryWeaponOverallByCategory = WeaponOverallsByCategories.Find(RandomSelectedWeaponCategory);
		bool MyCompanyAvailableToTenderOffer = false;
		TArray<FString> RequestingFeatures;

		if (*CountDiff < 10000) {

			for (FNewDesignedProductsStruct DesignedProduct : DesignedProducts) {

				if (DesignedProduct.IsDesignedByMyCompany) {

					if (DesignedProduct.Class == RandomSelectedWeaponCategory && DesignedProduct.Overall <= (*CountryWeaponOverallByCategory + 15) && DesignedProduct.Overall >= (*CountryWeaponOverallByCategory - 15)) {
						MyCompanyAvailableToTenderOffer = true;
						break;
					}

				}

			}

			if (MyCompanyAvailableToTenderOffer) {

				for (TPair<FString, FName> Pair : SelectedCountryFeatureNeedsAndCategories) {

					if (Pair.Value == RandomSelectedWeaponCategory) {

						RequestingFeatures.Add(Pair.Key);

					}

				}
			}

		}


		OfferData.RequestedWeaponCategory = RandomSelectedWeaponCategory;
		OfferData.RequestedWeaponFeatures = RequestingFeatures;
		// satýn alýnacak adet

		// ihale sayfasý oluþturulacak ve 24 saatlik periyotta ihale devam edecek arada diðer ülkelerin ihaleye katýlmasý fiyat deðiþtirme gibi durumlarý da ekle.

		return MyCompanyAvailableToTenderOffer;
	}

}

bool UBackgroundLogicOperations::OfferWeaponDesignContract(UObject* WorldContextObject, TArray<FName> FirstCountryDoesntHaveTheseWeaponTypes, TMap<FString, FName> FirstCountryBadThisWeaponFeatureNameAndCategory, TMap<FName, int32> WeaponOverallsByCategories, TMap<FName, int32> WeaponOverallsByTypes, FTenderOfferData& OfferData) {
	
	UC_GameInstance* GI = Cast<UC_GameInstance>(UGameplayStatics::GetGameInstance(WorldContextObject));
	GI->Implements<USaveInterface>();
	UC_SaveGame* LoadedSave;
	ISaveInterface::Execute_GetGameData(GI, LoadedSave);

	TArray<FMyFactorys> MyFactorys = LoadedSave->MyFactorys;
	TArray<FString> MissingFeatures;
	bool MyCompanyAvailableToDesignOffer = false;

	if (MyFactorys.Num() >= 1){

		FName RandomSelectedWeaponType;
		FName SelectedWeaponCategory;
		int32* AvarageOverall = 0;

		if (FirstCountryDoesntHaveTheseWeaponTypes.Num() >= 1) {

			RandomSelectedWeaponType = FirstCountryDoesntHaveTheseWeaponTypes[FMath::RandRange(0, FirstCountryDoesntHaveTheseWeaponTypes.Num() - 1)];
			SelectedWeaponCategory = UAllStructs::FindWeaponCategoryByType(RandomSelectedWeaponType);

			if (WeaponOverallsByCategories.Find(SelectedWeaponCategory)) {
				
				AvarageOverall = WeaponOverallsByCategories.Find(SelectedWeaponCategory);
			
			}
			else {

				for (TPair<FName, int32> WeaponCategoryAndOverall : WeaponOverallsByCategories) {

					*AvarageOverall += WeaponCategoryAndOverall.Value;

				}

				*AvarageOverall = *AvarageOverall / WeaponOverallsByCategories.Num();

			}



		}
		else {
			*AvarageOverall = 200;
			// en düþük overall a göre bak.
			for (TPair<FName, int32> WeaponTypesAndOveralls : WeaponOverallsByTypes) {
				if (*AvarageOverall > WeaponTypesAndOveralls.Value) {
					*AvarageOverall = WeaponTypesAndOveralls.Value;
					RandomSelectedWeaponType = WeaponTypesAndOveralls.Key;
				}
			}

			SelectedWeaponCategory = UAllStructs::FindWeaponCategoryByType(RandomSelectedWeaponType);

		}

		if (FirstCountryBadThisWeaponFeatureNameAndCategory.Num() >= 1) {

			for (TPair<FString, FName> FeatureNameAndWeaponCategory : FirstCountryBadThisWeaponFeatureNameAndCategory) {

				if (FeatureNameAndWeaponCategory.Value == SelectedWeaponCategory) {

					MissingFeatures.Add(FeatureNameAndWeaponCategory.Key);

				}

			}

		}

		for (FMyFactorys MyFactory : MyFactorys) {

			// biz üretebiliyor muyuz kontrol et üretemiyorsak teklif olmaz üretebiliyorsak: 
			// 1. seçilen silahýn tipine ve kategorisine göre overall a bak 1-6 arasýndaki özelliklere göre overallý denk getirerek teklif sunulabilir.
			// 2. seçilen silahýn kötü olduðu özelliklere göre teklif sunulabilir.
			// 3. seçilen silahýn hem özelliðine hem de kötü olduðu özellikler beraber teklif sunulabilir.																				

			if (MyFactory.ProductionClass == SelectedWeaponCategory) {

				TArray<int32> WeaponTypeMaxValues;
				TArray<int32> WeaponTypeMinValues;
				TArray<float> WeaponTypeWeightMultipliers;
				int32 MaxRequestingPropertyCount = 0;

				UAsyncBackgroundOperations* BackgroundOperationsObj = NewObject<UAsyncBackgroundOperations>();
				BackgroundOperationsObj->WeaponsMaxAndMinValues(RandomSelectedWeaponType, WeaponTypeMaxValues, WeaponTypeMinValues, WeaponTypeWeightMultipliers);


				if (MissingFeatures.Num() >= 1) {

					int32 MaxRequestingFeatureCount = FMath::RandRange(1, 5);
					MaxRequestingPropertyCount = FMath::RandRange(0, 4);

					for (int32 i = 1; i <= MaxRequestingFeatureCount; i++) {

						OfferData.RequestingFeatureNames.AddUnique(MissingFeatures[FMath::RandRange(0, MissingFeatures.Num() - 1)]);

					}

					if (MaxRequestingPropertyCount != 0) {

						OfferData.RequstingMinOrMaxPropertyValues.SetNum(6);

						for (int32 i = 1; i <= MaxRequestingPropertyCount; i++) {

							int32 PropertyIndex = FMath::RandRange(0, 5);
							OfferData.RequstingMinOrMaxPropertyValues[PropertyIndex] = FMath::RandRange(WeaponTypeMinValues[PropertyIndex], WeaponTypeMaxValues[PropertyIndex]);

						}

					}
					
					OfferData.RequestingAvarageWeaponOverall = *AvarageOverall;
					break;

				}
				else {

					MaxRequestingPropertyCount = FMath::RandRange(2, 5);

					OfferData.RequstingMinOrMaxPropertyValues.SetNum(6);

					for (int32 i = 1; i <= MaxRequestingPropertyCount; i++) {

						int32 PropertyIndex = FMath::RandRange(0, 5);
						OfferData.RequstingMinOrMaxPropertyValues[PropertyIndex] = FMath::RandRange(WeaponTypeMinValues[PropertyIndex], WeaponTypeMaxValues[PropertyIndex]);

					}

					OfferData.RequestingAvarageWeaponOverall = *AvarageOverall;
					break;

				}

			}

		}

	}

	return MyCompanyAvailableToDesignOffer;
}

