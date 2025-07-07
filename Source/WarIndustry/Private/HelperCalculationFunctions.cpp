// Fill out your copyright notice in the Description page of Project Settings.


#include "HelperCalculationFunctions.h"
#include "C_GameInstance.h"
#include "Kismet/GameplayStatics.h"

void UHelperCalculationFunctions::CompareWeaponPowerAndTechnoligies(FCountrys FirstCountryStruct, FCountrys SecondCountryStruct, FRebellion Rebellions, UObject* WorldContextObject, TArray<int32>& WeaponCompareResults) {
	
	UC_GameInstance* GI = Cast<UC_GameInstance>(UGameplayStatics::GetGameInstance(WorldContextObject));
	GI->Implements<USaveInterface>();
	UC_SaveGame* LoadedSave;
	ISaveInterface::Execute_GetGameData(GI, LoadedSave);

	TArray<FNewDesignedProductsStruct> DesignedProducts = LoadedSave->DesignedProducts;
	
	TMap<int32, int32> FirstCountryAllWeaponIndexsAndCounts = FirstCountryStruct.WeaponsIndexsAndCountsInStorage;
	TMap<int32, int32> SecondCountryAllWeaponIndexsAndCounts = SecondCountryStruct.WeaponsIndexsAndCountsInStorage;
	TMap<int32, int32> RebellionsAllWeaponIndexsAndCounts = Rebellions.AllWeaponsIndexsAndCount;
	TArray<int32> WeaponIndexs;

	TArray<int64> FirstCountryDayFightingAgainstTotalPower;
	FirstCountryDayFightingAgainstTotalPower.SetNum(8);
	TArray<int64> FirstCountryNightFightingAgainstTotalPower;
	FirstCountryNightFightingAgainstTotalPower.SetNum(8);
	TArray<int64> SecondCountryDayFightingAgainstTotalPower;
	SecondCountryDayFightingAgainstTotalPower.SetNum(8);
	TArray<int64> SecondCountryNightFightingAgainstTotalPower;
	SecondCountryNightFightingAgainstTotalPower.SetNum(8);
	int32 CalculationCount = 0;

	for (int i = 0; i <= 1; i++) {

		TMap<int32, int32> SearchIn;

		if (i == 1) {

			if (!SecondCountryAllWeaponIndexsAndCounts.IsEmpty()) {
				SearchIn = SecondCountryAllWeaponIndexsAndCounts;
				SecondCountryAllWeaponIndexsAndCounts.GetKeys(WeaponIndexs);
			}
			else if (!RebellionsAllWeaponIndexsAndCounts.IsEmpty()) {
				SearchIn = RebellionsAllWeaponIndexsAndCounts;
				RebellionsAllWeaponIndexsAndCounts.GetKeys(WeaponIndexs);
			}
			else {
				break;
			}

		}
		else {
			SearchIn = FirstCountryAllWeaponIndexsAndCounts;
			FirstCountryAllWeaponIndexsAndCounts.GetKeys(WeaponIndexs);
		}

		UE_LOG(LogTemp, Error, TEXT("Döngü Sayýsý: %d"), i);

		for (int32 WeaponIndex : WeaponIndexs) {

		FName WeaponClass = DesignedProducts[WeaponIndex].Class;
		TMap<FString, int32> WeaponFightingAgainstAndStrength = DesignedProducts[WeaponIndex].FightingAgainstAndStrength;
		TArray<FString> FightingAgainstKeys;
		WeaponFightingAgainstAndStrength.GetKeys(FightingAgainstKeys);

		int32* SelectedWeaponCount = SearchIn.Find(WeaponIndex);
		int32 SelectedWeaponOverall = DesignedProducts[WeaponIndex].Overall;
	

		for (FString FightingAgainstCategory : FightingAgainstKeys) {
			int32* FeatureMultiplier = 0;
			int32 NightTimeAdvantage = 0;
			FeatureMultiplier = WeaponFightingAgainstAndStrength.Find(FightingAgainstCategory);
			int alper = 0;

			if (DesignedProducts[WeaponIndex].FeaturesAndValues.Num() > 0) {
				
			}
			
			switch (ConvertWeaponCategoryToEnum(FightingAgainstCategory)) {

			case EWeaponCategory::LongRangeRifles:

				if (i == 1) {
					SecondCountryDayFightingAgainstTotalPower[0] += (*FeatureMultiplier + SelectedWeaponOverall) * *SelectedWeaponCount;
					SecondCountryNightFightingAgainstTotalPower[0] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * *SelectedWeaponCount;
				}
				else {
					FirstCountryDayFightingAgainstTotalPower[0] += (*FeatureMultiplier + SelectedWeaponOverall) * *SelectedWeaponCount;
					FirstCountryNightFightingAgainstTotalPower[0] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * *SelectedWeaponCount;
				}	
				break;
			case EWeaponCategory::Rockets:
				if (i == 1) {
					SecondCountryDayFightingAgainstTotalPower[1] += (*FeatureMultiplier + SelectedWeaponOverall) * *SelectedWeaponCount;
					SecondCountryNightFightingAgainstTotalPower[1] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * *SelectedWeaponCount;
				}
				else {
					FirstCountryDayFightingAgainstTotalPower[1] += (*FeatureMultiplier + SelectedWeaponOverall) * *SelectedWeaponCount;
					FirstCountryNightFightingAgainstTotalPower[1] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * *SelectedWeaponCount;
				}
				break;
			case EWeaponCategory::Tanks:
				if (i == 1) {
					SecondCountryDayFightingAgainstTotalPower[2] += (*FeatureMultiplier + SelectedWeaponOverall) * *SelectedWeaponCount;
					SecondCountryNightFightingAgainstTotalPower[2] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * *SelectedWeaponCount;
				}
				else {
					FirstCountryDayFightingAgainstTotalPower[2] += (*FeatureMultiplier + SelectedWeaponOverall) * *SelectedWeaponCount;
					FirstCountryNightFightingAgainstTotalPower[2] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * *SelectedWeaponCount;
				}
				break;
			case EWeaponCategory::ArmoredVehicles:
				if (i == 1) {
					SecondCountryDayFightingAgainstTotalPower[3] += (*FeatureMultiplier + SelectedWeaponOverall) * *SelectedWeaponCount;
					SecondCountryNightFightingAgainstTotalPower[3] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * *SelectedWeaponCount;
				}
				else {
					FirstCountryDayFightingAgainstTotalPower[3] += (*FeatureMultiplier + SelectedWeaponOverall) * *SelectedWeaponCount;
					FirstCountryNightFightingAgainstTotalPower[3] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * *SelectedWeaponCount;
				}
				break;
			case EWeaponCategory::Uavs:
				if (i == 1) {
					SecondCountryDayFightingAgainstTotalPower[4] += (*FeatureMultiplier + SelectedWeaponOverall) * *SelectedWeaponCount;
					SecondCountryNightFightingAgainstTotalPower[4] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * *SelectedWeaponCount;
				}
				else {
					FirstCountryDayFightingAgainstTotalPower[4] += (*FeatureMultiplier + SelectedWeaponOverall) * *SelectedWeaponCount;
					FirstCountryNightFightingAgainstTotalPower[4] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * *SelectedWeaponCount;
				}
				break;
			case EWeaponCategory::Helicopters:
				if (i == 1) {
					SecondCountryDayFightingAgainstTotalPower[5] += (*FeatureMultiplier + SelectedWeaponOverall) * *SelectedWeaponCount;
					SecondCountryNightFightingAgainstTotalPower[5] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * *SelectedWeaponCount;
				}
				else {
					FirstCountryDayFightingAgainstTotalPower[5] += (*FeatureMultiplier + SelectedWeaponOverall) * *SelectedWeaponCount;
					FirstCountryNightFightingAgainstTotalPower[5] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * *SelectedWeaponCount;
				}
				break;
			case EWeaponCategory::FighterJets:
				if (i == 1) {
					SecondCountryDayFightingAgainstTotalPower[6] += (*FeatureMultiplier + SelectedWeaponOverall) * *SelectedWeaponCount;
					SecondCountryNightFightingAgainstTotalPower[6] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * *SelectedWeaponCount;
				}
				else {
					FirstCountryDayFightingAgainstTotalPower[6] += (*FeatureMultiplier + SelectedWeaponOverall) * *SelectedWeaponCount;
					FirstCountryNightFightingAgainstTotalPower[6] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * *SelectedWeaponCount;
				}
				break;
			case EWeaponCategory::AirDefensseSystems:
				if (i == 1) {
					SecondCountryDayFightingAgainstTotalPower[7] += (*FeatureMultiplier + SelectedWeaponOverall) * *SelectedWeaponCount;
					SecondCountryNightFightingAgainstTotalPower[7] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * *SelectedWeaponCount;
				}
				else {
					FirstCountryDayFightingAgainstTotalPower[7] += (*FeatureMultiplier + SelectedWeaponOverall) * *SelectedWeaponCount;
					FirstCountryNightFightingAgainstTotalPower[7] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * *SelectedWeaponCount;
				}
				break;


			default:
				UE_LOG(LogTemp, Error, TEXT("Böyle Bir Silah Sýnýfý Yok '%s'"), *FightingAgainstCategory);
				break;
			}

		}

	}

	}

	for (int i = 0; i <= 7; i++) {
		WeaponCompareResults.Add(FirstCountryDayFightingAgainstTotalPower[i] - SecondCountryDayFightingAgainstTotalPower[i]);
	}
}

EWeaponCategory UHelperCalculationFunctions::ConvertWeaponCategoryToEnum(const FString& WeaponCategory) {
	
	if (WeaponCategory == "Long Range Rifles")
		return EWeaponCategory::LongRangeRifles;
	else if (WeaponCategory == "Rockets")
		return EWeaponCategory::Rockets;
	else if (WeaponCategory == "Tanks")
		return EWeaponCategory::Tanks;
	else if (WeaponCategory == "Armored Vehicles")
		return EWeaponCategory::ArmoredVehicles;
	else if (WeaponCategory == "Unmanned Air Vehicles")
		return EWeaponCategory::Uavs;
	else if (WeaponCategory == "Helicopters")
		return EWeaponCategory::Helicopters;
	else if (WeaponCategory == "Fighter Jets")
		return EWeaponCategory::FighterJets;
	else if (WeaponCategory == "Air Defense Systems")
		return EWeaponCategory::AirDefensseSystems;
	else
		return EWeaponCategory::Default;
}