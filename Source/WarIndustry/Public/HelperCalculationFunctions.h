// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AllStructs.h"

#include "HelperCalculationFunctions.generated.h"

UCLASS()
class WARINDUSTRY_API UHelperCalculationFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:

        UFUNCTION(BlueprintCallable, Category = "Calculations")
		static void CompareWeaponPowerAndTechnoligies(FCountrys FirstCountryStruct, FCountrys SecondCountryStruct, FRebellion Rebellions, UObject* WorldContextObject, TArray<int32>& WeaponCompareResults, TArray<int32>& WeaponNightCompareResults, int64& FirstCountryTotalPower);

        UFUNCTION(BlueprintCallable, Category = "Calculations|WeaponDesign")
        static FTimespan CalculateWeaponProductionTime(FNewDesignedProductsStruct DesignedProduct);

        UFUNCTION(BlueprintCallable, Category = "Calculations|WeaponDesign")
        static TMap<FString, int32> CalculateDesignWeaponFeatures(UDataTable* AllFeaturesDataTable, FNewDesignedProductsStruct DesignedProduct);

        UFUNCTION(BlueprintCallable, Category = "Sortting")
        static void SortCountriesByPower(UObject* WorldContextObject, TArray<int32>& TopTenCountryIndexs, int32& MyCountryPlacement, int32& MyCountryIndex);

        UFUNCTION(BlueprintCallable, Category = "Sortting")
        static void SortCompaniesByCompanyValues(UObject* WorldContextObject, TArray<int32>& AllCompanyPlacements, int32& MyCompanyPlacement);

        UFUNCTION(BlueprintCallable, Category = "Calculations")
        static TMap<FString, float> CalculateGameDifficultyByCountries();

        UFUNCTION(BlueprintCallable, Category = "Calculations")
        static TMap<FString, float> WeaponsCountryRates(UObject* WorldContextObject, FCountrys CountryStruct, FRebellion RebellionStruct);

        UFUNCTION(BlueprintCallable, Category = "Calculations")
        static void FindSelectedCountryWeaponNeeds(UObject* WorldContextObject, UDataTable* AllFeaturesDataTable, FCountrys FirstCountry, FCountrys OpponentCountry, FRebellion RebellionsInCountry, TMap<FName, int32>& WeaponCategoriesAndCountDiff, TMap<FName, int32>& WeaponTypesAndCountDiff, TMap<FName, int32>& WeaponCategoriesAndOveralls, TMap<FName, int32>& WeaponTypesAndOveralls, TArray<FName>& FirstCountryDoesntHaveTheseWeaponTypes, TMap<FString, FName>& FirstCountryBadThisWeaponFeatureNameAndCategory);

        UFUNCTION(BlueprintCallable, Category = "Calculations|SelectRandomWeapon")
        static void AddRandomForeignWeaponsToTender(UObject* WorldContextObject, int32& SelectedProductIndexForTender);
			
	private:

};
