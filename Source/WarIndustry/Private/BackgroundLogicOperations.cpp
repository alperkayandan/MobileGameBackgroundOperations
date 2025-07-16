// Fill out your copyright notice in the Description page of Project Settings.


#include "BackgroundLogicOperations.h"
#include "C_GameInstance.h"
#include "HelperCalculationFunctions.h"

#include "Kismet/GameplayStatics.h"



UBackgroundLogicOperations* UBackgroundLogicOperations::CreateAsyncBackgroundLogicOperations() {
	return NewObject<UBackgroundLogicOperations>();
}

void UBackgroundLogicOperations::StartAsyncControlForBackgroundOperations(UObject* WorldContextObject) {
	
	UDataTable* AllFeaturesDataTable = Cast<UDataTable>(StaticLoadObject(UDataTable::StaticClass(), nullptr, TEXT("/Game/Datas/AllWeaponFeatures.AllWeaponFeatures")));
	
	Async(EAsyncExecution::Thread, [this, WorldContextObject, AllFeaturesDataTable]() {

		bool IsTenderOffer = false;
		bool IsSellContractOffer = false;
		bool IsDesignContractOffer = false;
		FString RequestedCountryName; 
		FName RequestedWeaponCategory; 
		TArray<FString> RequestedWeaponFeatures; 
		int32 RequestedWeaponCount;

		// strcut tanýmlasam veri kontrolü daha kolay olacak. ya da enum

		CheckCountryBordersForOffer(WorldContextObject, AllFeaturesDataTable, IsTenderOffer, IsSellContractOffer, IsDesignContractOffer, RequestedCountryName, RequestedWeaponCategory, RequestedWeaponFeatures, RequestedWeaponCount); // silah satýþ kontratý, silah tasarým kontratý ve ihale teklifini kontrol eden fonksiyon.
		
		if (IsTenderOffer) {

			AsyncTask(ENamedThreads::GameThread, [this, RequestedWeaponCategory, RequestedWeaponFeatures, RequestedCountryName, RequestedWeaponCount]() {

				CreateTenderPage.Broadcast(RequestedWeaponCategory, RequestedWeaponFeatures, RequestedCountryName, RequestedWeaponCount);

			});

		}else if (IsSellContractOffer) {

			//CreateSellContractPage.Broadcast();

		}
		else if (IsDesignContractOffer) {

			//CreateDesignContractPage.Broadcast();

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

void UBackgroundLogicOperations::CheckCountryBordersForOffer(UObject* WorldContextObject, UDataTable* AllFeaturesDataTable, bool& IsTenderOffer, bool& IsSellContractOffer, bool& IsDesignContractOffer, FString& RequestedCountryName, FName& RequestedWeaponCategory, TArray<FString>& RequestedWeaponFeatures, int32& RequestedWeaponCount) {

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
		RequestedCountryName = FoundFirstCountryStruct.CountryName;
	
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

				SelectOfferForCountry(WorldContextObject, AllFeaturesDataTable, FoundFirstCountryStruct, FoundOppeonentCountryStruct, RebellionsInSelectedCountry, IsTenderOffer, IsSellContractOffer, IsDesignContractOffer, RequestedWeaponCategory, RequestedWeaponFeatures, RequestedWeaponCount);
				
				if (IsTenderOffer || IsSellContractOffer || IsDesignContractOffer) {
					return;
				}
			
			}
			else {

				UE_LOG(LogTemp, Error, TEXT("Ulkenin sinir komsusu yok."));

			}

		}     

	}

}

void UBackgroundLogicOperations::SelectOfferForCountry(UObject* WorldContextObject, UDataTable* AllFeaturesDataTable, FCountrys FirstCountry, FCountrys OpponentCountry, FRebellion RebellionsInSelectedCountry, bool& IsTenderOffer, bool& IsSellContractOffer, bool& IsDesignContractOffer, FName& RequestedWeaponCategory, TArray<FString>& RequestedWeaponFeatures, int32& RequestedWeaponCount) {

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
			IsSellContractOffer = OfferWeaponSellContract();
		
		}
		else {

			FDateTime CurrentTime = FDateTime::UtcNow();

			if (CurrentTime >= GeneralDatas.TenderLastTime) {

				//ihale için -> istenilen tip ya da özelliklerden en az biri bizde var mý?
				IsTenderOffer = OfferTender(WorldContextObject, WeaponCategoriesAndCountDiff, WeaponOverallsByCategories, FirstCountryBadThisWeaponFeatureNameAndCategory, RequestedWeaponCategory, RequestedWeaponFeatures, RequestedWeaponCount);

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
			IsDesignContractOffer = OfferWeaponDesignContract();

		}
		else {

			FDateTime CurrentTime = FDateTime::UtcNow();

			if (CurrentTime >= GeneralDatas.TenderLastTime) {

				//ihale için -> istenilen tip ya da özelliklerden en az biri bizde var mý?
				IsTenderOffer = OfferTender(WorldContextObject, WeaponCategoriesAndCountDiff, WeaponOverallsByCategories, FirstCountryBadThisWeaponFeatureNameAndCategory, RequestedWeaponCategory, RequestedWeaponFeatures, RequestedWeaponCount);

			}
			else {
				UE_LOG(LogTemp, Warning, TEXT("Zaten devam eden bir ihale var."));
			}

		}

	}

}

bool UBackgroundLogicOperations::OfferWeaponSellContract() {
	
	
	bool MyCompanyAvailableToSellOffer = false;


	return MyCompanyAvailableToSellOffer;
}

bool UBackgroundLogicOperations::OfferTender(UObject* WorldContextObject, TMap<FName, int32> WeaponCountDiffByCategories, TMap<FName, int32>WeaponOverallsByCategories, TMap<FString, FName> SelectedCountryFeatureNeedsAndCategories, FName& RequestedWeaponCategory, TArray<FString>& RequestedWeaponFeatures, int32& RequestedWeaponCount) {

	UC_GameInstance* GI = Cast<UC_GameInstance>(UGameplayStatics::GetGameInstance(WorldContextObject));
	GI->Implements<USaveInterface>();
	UC_SaveGame* LoadedSave;
	ISaveInterface::Execute_GetGameData(GI, LoadedSave);

	TArray<FMyFactorys> MyFactorys = LoadedSave->MyFactorys;
	TArray<FNewDesignedProductsStruct> DesignedProducts;

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


		RequestedWeaponCategory = RandomSelectedWeaponCategory;
		RequestedWeaponFeatures = RequestingFeatures;
		// istenilen silah kategorisi
		// istenilen özellikler
		// ihaleyi isteyen ülke
		// satýn alýnacak adet
		// ihaleye uygun mu deðerleri deðer olarak geri döndürülecek

		// ihale sayfasý oluþturulacak ve 24 saatlik periyotta ihale devam edecek arada diðer ülkelerin ihaleye katýlmasý fiyat deðiþtirme gibi durumlarý da ekle.

		return MyCompanyAvailableToTenderOffer;
	}

}

bool UBackgroundLogicOperations::OfferWeaponDesignContract() {
	bool MyCompanyAvailableToDesignOffer = false;


	return MyCompanyAvailableToDesignOffer;
}

