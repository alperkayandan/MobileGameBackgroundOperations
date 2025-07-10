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
		static void CompareWeaponPowerAndTechnoligies(FCountrys FirstCountryStruct, FCountrys SecondCountryStruct, FRebellion Rebellions, UObject* WorldContextObject, TArray<int32>& WeaponCompareResults, int64& FirstCountryTotalPower);

        UFUNCTION(BlueprintCallable, Category = "Calculations|WeaponDesign")
        static FTimespan CalculateWeaponProductionTime(FNewDesignedProductsStruct DesignedProduct);

        UFUNCTION(BlueprintCallable, Category = "Calculations|WeaponDesign")
        static TMap<FString, int32> CalculateDesignWeaponFeatures(FNewDesignedProductsStruct DesignedProduct);

        UFUNCTION(BlueprintCallable, Category = "Sortting")
        static void SortCountriesByPower(UObject* WorldContextObject, TArray<int32>& TopTenCountryIndexs, int32& MyCountryPlacement, int32& MyCountryIndex);

        UFUNCTION(BlueprintCallable, Category = "Sortting")
        static void SortCompaniesByCompanyValues(UObject* WorldContextObject, TArray<int32>& AllCompanyPlacements, int32& MyCompanyPlacement);
			
	private:

};
