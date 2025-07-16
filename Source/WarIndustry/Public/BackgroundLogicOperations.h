// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AllStructs.h"

#include "BackgroundLogicOperations.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSellContractOffer, float, Progress);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDesignContractOffer, float, Progress);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FTenderOffer, FName, RequestedWeaponCategory, TArray<FString>, RequestedWeaponFeatures, FString, RequestedCountryName, int32, RequestedWeaponCount);

UCLASS()
class WARINDUSTRY_API UBackgroundLogicOperations : public UObject
{
	GENERATED_BODY()

	public:

		UFUNCTION(BlueprintCallable, Category = "AsyncBackgroundLogic")
		static UBackgroundLogicOperations* CreateAsyncBackgroundLogicOperations();

		UFUNCTION(BlueprintCallable, Category = "AsyncBackgroundLogic")
		void StartAsyncControlForBackgroundOperations(UObject* WorldContextObject);

		UFUNCTION(BlueprintCallable, Category = "AsyncBackgroundLogic")
		void DistributeProducedWeapons(UObject* WorldContextObject, TArray<FFactorys>& GlobalFactorysData);

		UFUNCTION(BlueprintCallable, Category = "AsyncBackgroundLogic")
		void CheckCountryBordersForOffer(UObject* WorldContextObject, UDataTable* AllFeaturesDataTable, bool& IsTenderOffer, bool& SellContractOffer, bool& DesignContractOffer, FString& RequestedCountryName ,FName& RequestedWeaponCategory, TArray<FString>& RequestedWeaponFeatures, int32& RequestedWeaponCount);

		UPROPERTY(BlueprintAssignable)
		FSellContractOffer CreateSellContractPage;

		UPROPERTY(BlueprintAssignable)
		FDesignContractOffer CreateDesignContractPage;

		UPROPERTY(BlueprintAssignable)
		FTenderOffer CreateTenderPage;

	private:

		void ControlGlobalFactorysProducedWeapons(UObject* WorldContextObject, TArray<FFactorys>& GlobalFactorysData);
		void SelectOfferForCountry(UObject* WorldContextObject, UDataTable* AllFeaturesDataTable, FCountrys FirstCountry, FCountrys OpponentCountry, FRebellion RebellionsInSelectedCountry, bool& IsTenderOffer, bool& IsSellContractOffer, bool& IsDesignContractOffer, FName& RequestedWeaponCategory, TArray<FString>& RequestedWeaponFeatures, int32& RequestedWeaponCount);
		bool OfferTender(UObject* WorldContextObject, TMap<FName, int32> WeaponCountDiffByCategories, TMap<FName, int32>WeaponOverallsByCategories, TMap<FString, FName> SelectedCountryFeatureNeedsAndCategories, FName& RequestedWeaponCategory, TArray<FString>& RequestedWeaponFeatures, int32& RequestedWeaponCount);
		bool OfferWeaponSellContract();
		bool OfferWeaponDesignContract();
};
