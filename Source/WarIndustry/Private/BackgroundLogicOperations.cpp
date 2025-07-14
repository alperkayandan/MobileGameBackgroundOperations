// Fill out your copyright notice in the Description page of Project Settings.


#include "BackgroundLogicOperations.h"
#include "C_GameInstance.h"
#include "HelperCalculationFunctions.h"

#include "Kismet/GameplayStatics.h"

UBackgroundLogicOperations* UBackgroundLogicOperations::CreateAsyncBackgroundLogicOperations() {
	return NewObject<UBackgroundLogicOperations>();
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

void UBackgroundLogicOperations::CheckCountryBordersForOffer(UObject* WorldContextObject) {

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

				SelectOfferForCountry(WorldContextObject, FoundFirstCountryStruct, FoundOppeonentCountryStruct, RebellionsInSelectedCountry);
			}
			else {

				UE_LOG(LogTemp, Error, TEXT("Ulkenin sinir komsusu yok."));

			}

		}     

		
	}

}

void UBackgroundLogicOperations::SelectOfferForCountry(UObject* WorldContextObject, FCountrys FirstCountry, FCountrys OpponentCountry, FRebellion RebellionsInSelectedCountry) {

	UC_GameInstance* GI = Cast<UC_GameInstance>(UGameplayStatics::GetGameInstance(WorldContextObject));
	GI->Implements<USaveInterface>();
	UC_SaveGame* LoadedSave;
	ISaveInterface::Execute_GetGameData(GI, LoadedSave);

	FGeneralDatas GeneralDatas = LoadedSave->GeneralDatas;

	TMap<FName, int32> WeaponCategoriesAndCountDiff; 
	TMap<FName, int32> WeaponTypesAndCountDiff; 
	TArray<FName> FirstCountryDoesntHaveTheseWeaponTypes; 
	TMap<FString, FName> FirstCountryBadThisWeaponFeatureNameAndCategory;

	//iliþkiler gelecek sonra eksikliklere bakýlacak ona göre teklif oluþturulacak.
	TMap<FName, int32> FirstCountryRelations = FirstCountry.Relationships;
	//TMap<FName, int32> OpponentCountryRelations = OpponentCountry.Relationships;

	int32* FirstCountryToOpponentCountryRelation = FirstCountryRelations.Find(FName(OpponentCountry.CountryName));
	//int32* OpponentCountryToFirstCountryRelation = OpponentCountryRelations.Find(FName(FirstCountry.CountryName));

	// ayný zamanda isyancýlar içinde isyan ihtimali %50 üzerine çýktý mý gibi bir kontrol lazým. ve ona göre silah satýn alabilir.

	UHelperCalculationFunctions::FindSelectedCountryWeaponNeeds(WorldContextObject, FirstCountry, OpponentCountry, RebellionsInSelectedCountry, WeaponCategoriesAndCountDiff, WeaponTypesAndCountDiff, FirstCountryDoesntHaveTheseWeaponTypes, FirstCountryBadThisWeaponFeatureNameAndCategory);

	if (*FirstCountryToOpponentCountryRelation < 0) {

		int32 SellPossibility = FMath::RandRange(0, 100);

		if (SellPossibility <= GeneralDatas.CompanyPopularity) { //Popülerlik þartý saðlanmýþtýr

			OfferWeaponSellContract();
		
		}
		else {

			OfferTender();

		}

		// ya silah satýn alacak ya da ihale oluþturmasý lazým. silah satýn almasý için -> popülerlik ve daha önce silah sattýk mý ve overall -10 +10 var mý?
															 // ihale için -> istenilen tip ya da özelliklerden en az biri bizde var mý?														
	}
	else {

		int32 SellPossibility = FMath::RandRange(0, 100);

		if (SellPossibility <= GeneralDatas.CompanyPopularity) {

			OfferWeaponDesignContract();

		}
		else {

			OfferTender();

		}

		// kendinde eksik olan türlere ya da özelliklere göre ya ihale ya da tasarým yaptýracak. tasarým için -> popülerlik ve daha önce silah sattýk mý o tasarým yapýlabilir mi?
																							  // ihale için -> bizde istenilen özelliklerden en az biri varsa ihale teklifi gelir.

	}

}

void UBackgroundLogicOperations::OfferWeaponSellContract() {

}

void UBackgroundLogicOperations::OfferTender() {

}

void UBackgroundLogicOperations::OfferWeaponDesignContract() {

}

