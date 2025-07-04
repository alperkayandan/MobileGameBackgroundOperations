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
		static void CompareWeaponPowerAndTechnoligies(FCountrys FirstCountryStruct, FCountrys SecondCountryStruct,  FRebellion Rebellions, UObject* WorldContextObject, TArray<int32>& WeaponCompareResults);
			
	private:

        static EWeaponCategory ConvertWeaponCategoryToEnum(const FString& WeaponCategory);
};
