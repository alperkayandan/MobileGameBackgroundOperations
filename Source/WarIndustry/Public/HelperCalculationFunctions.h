// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AllStructs.h"

#include "HelperCalculationFunctions.generated.h"

UENUM(BlueprintType)
enum class EWeaponCategory : uint8
{
    LongRangeRifles,         
    Rockets,                 
    Tanks,                   
    ArmoredVehicles,
    Uavs,
    Helicopters,
    FighterJets,
    AirDefensseSystems,
    Default 
};


UCLASS()
class WARINDUSTRY_API UHelperCalculationFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:

        UFUNCTION(BlueprintCallable, Category = "Calculations")
		static void CompareWeaponPowerAndTechnoligies(FCountrys FirstCountryStruct, FCountrys SecondCountryStruct, FRebellion Rebellions, UObject* WorldContextObject, TArray<int32>& WeaponCompareResults, int64& FirstCountryTotalPower);

        UFUNCTION(BlueprintCallable, Category = "Sortting")
        static void SortCountriesByPower(UObject* WorldContextObject, TArray<int32>& TopTenCountryIndexs, int32& MyCountryPlacement, int32& MyCountryIndex);

        UFUNCTION(BlueprintCallable, Category = "Sortting")
        static void SortCompaniesByCompanyValues(UObject* WorldContextObject, TArray<int32>& AllCompanyPlacements, int32& MyCompanyPlacement);
			
	private:

        static EWeaponCategory ConvertWeaponCategoryToEnum(const FString& WeaponCategory);
};
