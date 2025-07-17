// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AllStructs.h"

#include "BackgroundLogicOperations.generated.h"

USTRUCT(BlueprintType)
struct FTenderOfferData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	bool IsTenderOffer;

	UPROPERTY(BlueprintReadWrite)
	bool IsSellContractOffer;

	UPROPERTY(BlueprintReadWrite)
	bool IsDesignContractOffer;

	UPROPERTY(BlueprintReadWrite)
	FName RequestedWeaponCategory;

	UPROPERTY(BlueprintReadWrite)
	TArray<FString> RequestedWeaponFeatures;

	UPROPERTY(BlueprintReadWrite)
	FString RequestedCountryName;

	UPROPERTY(BlueprintReadWrite)
	int32 RequestedWeaponCount;

	UPROPERTY(BlueprintReadWrite)
	FNewDesignedProductsStruct SelectedProductForSellOffer;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOffer, FTenderOfferData, TenderOfferData);

UCLASS(Blueprintable)
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
		void CheckCountryBordersForOffer(UObject* WorldContextObject, UDataTable* AllFeaturesDataTable, FTenderOfferData& OfferData);

		UPROPERTY(BlueprintAssignable)
		FOffer CreateOfferPage;

	private:

		void ControlGlobalFactorysProducedWeapons(UObject* WorldContextObject, TArray<FFactorys>& GlobalFactorysData);
		void SelectOfferForCountry(UObject* WorldContextObject, UDataTable* AllFeaturesDataTable, FCountrys FirstCountry, FCountrys OpponentCountry, FRebellion RebellionsInSelectedCountry, FTenderOfferData& OfferData);
		bool OfferTender(UObject* WorldContextObject, TMap<FName, int32> WeaponCountDiffByCategories, TMap<FName, int32>WeaponOverallsByCategories, TMap<FString, FName> SelectedCountryFeatureNeedsAndCategories, FTenderOfferData& OfferData);
		bool OfferWeaponSellContract(UObject* WorldContextObject, FCountrys SelectedCountry, TMap<FName, int32> WeaponTypesAndCountDiff, TMap<FName, int32> WeaponOverallsByCategories, TMap<FName, int32> WeaponOverallsByTypes, TArray<FName> FirstCountryDoesntHaveTheseWeaponTypes, FTenderOfferData& OfferData);
		bool OfferWeaponDesignContract();
};
