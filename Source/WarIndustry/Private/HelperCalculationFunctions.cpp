// Fill out your copyright notice in the Description page of Project Settings.


#include "HelperCalculationFunctions.h"
#include "C_GameInstance.h"
#include "Kismet/GameplayStatics.h"


void UHelperCalculationFunctions::CompareWeaponPowerAndTechnoligies(FCountrys FirstCountryStruct, FCountrys SecondCountryStruct, FRebellion Rebellions, UObject* WorldContextObject, TArray<int32>& WeaponCompareResults, int64& FirstCountryTotalPower) {
	
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

			int32* FeatureMultiplier = WeaponFightingAgainstAndStrength.Find(FightingAgainstCategory);
			int32 NightTimeAdvantage = 0;

			if (DesignedProducts[WeaponIndex].FeaturesAndValues.Num() > 0) {
				
			}
			
			switch (ConvertWeaponCategoryToEnum(FightingAgainstCategory)) {

			case EWeaponCategory::LongRangeRifles:

				if (i == 1) {
					SecondCountryDayFightingAgainstTotalPower[0] += (*FeatureMultiplier + SelectedWeaponOverall) * (*SelectedWeaponCount);
					SecondCountryNightFightingAgainstTotalPower[0] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * (*SelectedWeaponCount);
				}
				else {
					FirstCountryDayFightingAgainstTotalPower[0] += (*FeatureMultiplier + SelectedWeaponOverall) * (*SelectedWeaponCount);
					FirstCountryNightFightingAgainstTotalPower[0] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * (*SelectedWeaponCount);
					UE_LOG(LogTemp, Error, TEXT("(Feature Multiplier %d + Selected Weapon Overall %d) * (SelectedWeaponCount %d) = (Result %d)"), *FeatureMultiplier, SelectedWeaponOverall, *SelectedWeaponCount, FirstCountryDayFightingAgainstTotalPower[0]);
				}	
				break;
			case EWeaponCategory::Rockets:
				if (i == 1) {
					SecondCountryDayFightingAgainstTotalPower[1] += (*FeatureMultiplier + SelectedWeaponOverall) * (*SelectedWeaponCount);
					SecondCountryNightFightingAgainstTotalPower[1] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * (*SelectedWeaponCount);
				}
				else {
					FirstCountryDayFightingAgainstTotalPower[1] += (*FeatureMultiplier + SelectedWeaponOverall) * (*SelectedWeaponCount);
					FirstCountryNightFightingAgainstTotalPower[1] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * (*SelectedWeaponCount);
					
				}
				break;
			case EWeaponCategory::Tanks:
				if (i == 1) {
					SecondCountryDayFightingAgainstTotalPower[2] += (*FeatureMultiplier + SelectedWeaponOverall) * (*SelectedWeaponCount);
					SecondCountryNightFightingAgainstTotalPower[2] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * (*SelectedWeaponCount);
				}
				else {
					FirstCountryDayFightingAgainstTotalPower[2] += (*FeatureMultiplier + SelectedWeaponOverall) * (*SelectedWeaponCount);
					FirstCountryNightFightingAgainstTotalPower[2] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * (*SelectedWeaponCount);
				}
				break;
			case EWeaponCategory::ArmoredVehicles:
				if (i == 1) {
					SecondCountryDayFightingAgainstTotalPower[3] += (*FeatureMultiplier + SelectedWeaponOverall) * (*SelectedWeaponCount);
					SecondCountryNightFightingAgainstTotalPower[3] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * (*SelectedWeaponCount);
				}
				else {
					FirstCountryDayFightingAgainstTotalPower[3] += (*FeatureMultiplier + SelectedWeaponOverall) * (*SelectedWeaponCount);
					FirstCountryNightFightingAgainstTotalPower[3] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * (*SelectedWeaponCount);
				}
				break;
			case EWeaponCategory::Uavs:
				if (i == 1) {
					SecondCountryDayFightingAgainstTotalPower[4] += (*FeatureMultiplier + SelectedWeaponOverall) * (*SelectedWeaponCount);
					SecondCountryNightFightingAgainstTotalPower[4] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * (*SelectedWeaponCount);
				}
				else {
					FirstCountryDayFightingAgainstTotalPower[4] += (*FeatureMultiplier + SelectedWeaponOverall) * (*SelectedWeaponCount);
					FirstCountryNightFightingAgainstTotalPower[4] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * (*SelectedWeaponCount);
				}
				break;
			case EWeaponCategory::Helicopters:
				if (i == 1) {
					SecondCountryDayFightingAgainstTotalPower[5] += (*FeatureMultiplier + SelectedWeaponOverall) * (*SelectedWeaponCount);
					SecondCountryNightFightingAgainstTotalPower[5] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * (*SelectedWeaponCount);
				}
				else {
					FirstCountryDayFightingAgainstTotalPower[5] += (*FeatureMultiplier + SelectedWeaponOverall) * (*SelectedWeaponCount);
					FirstCountryNightFightingAgainstTotalPower[5] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * (*SelectedWeaponCount);
				}
				break;
			case EWeaponCategory::FighterJets:
				if (i == 1) {
					SecondCountryDayFightingAgainstTotalPower[6] += (*FeatureMultiplier + SelectedWeaponOverall) * (*SelectedWeaponCount);
					SecondCountryNightFightingAgainstTotalPower[6] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * (*SelectedWeaponCount);
				}
				else {
					FirstCountryDayFightingAgainstTotalPower[6] += (*FeatureMultiplier + SelectedWeaponOverall) * (*SelectedWeaponCount);
					FirstCountryNightFightingAgainstTotalPower[6] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * (*SelectedWeaponCount);
				}
				break;
			case EWeaponCategory::AirDefensseSystems:
				if (i == 1) {
					SecondCountryDayFightingAgainstTotalPower[7] += (*FeatureMultiplier + SelectedWeaponOverall) * (*SelectedWeaponCount);
					SecondCountryNightFightingAgainstTotalPower[7] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * (*SelectedWeaponCount);
				}
				else {
					FirstCountryDayFightingAgainstTotalPower[7] += (*FeatureMultiplier + SelectedWeaponOverall) * (*SelectedWeaponCount);
					FirstCountryNightFightingAgainstTotalPower[7] += (*FeatureMultiplier + SelectedWeaponOverall + NightTimeAdvantage) * (*SelectedWeaponCount);
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
		FirstCountryTotalPower += FirstCountryDayFightingAgainstTotalPower[i] + FirstCountryNightFightingAgainstTotalPower[i];
		UE_LOG(LogTemp, Warning, TEXT("Indeks [%d] Day Power %lld + Night Power %lld Toplam Guc = %lld"), i,FirstCountryDayFightingAgainstTotalPower[i], FirstCountryNightFightingAgainstTotalPower[i],FirstCountryTotalPower);
	}
}

FTimespan UHelperCalculationFunctions::CalculateWeaponProductionTime(FNewDesignedProductsStruct DesignedProduct) {

	FTimespan TypeBaseProductionTime;
	float LocalityRate = DesignedProduct.LocalityRate;
	TArray<FString> Features;
	DesignedProduct.FeaturesAndValues.GetKeys(Features);
	int32 FeaturesWorkload = 0;
	int32 Overall = DesignedProduct.Overall;
	
	if (DesignedProduct.FeaturesAndValues.Num() > 0) {
		for (FString Feature : Features) {
			int32* FeatureValue = DesignedProduct.FeaturesAndValues.Find(Feature);

			if (*FeatureValue <= 0) {
			FeaturesWorkload = *FeatureValue * -4;
			}
			else {
			FeaturesWorkload = *FeatureValue * 2;
			}

		}
	} //Feature work load
	
	switch (ConvertWeaponTypeToEnum(DesignedProduct.Type)) {

		case EWeaponType::AssultRifle:
			TypeBaseProductionTime = FTimespan(0,1,0,0); // 1 Saat 
			break;
		case EWeaponType::SniperRifle:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::SubmachineGun:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::AirAttackMachineGun:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::CoactionalMachineGun:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::LandToAirMissile:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::AirToLandMissile:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::AirToAirMissile:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::LightTank:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::MainBattleTank:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::HeavyTank:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::AmphibiousTank:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::WheeledArmoredPersonnelCarrier:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::TrackedArmoredPersonnelCarrier:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::ArmoredFightingVehicle:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::AmphibiousArmoredPersonnelCarrier:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::UAV:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::KamikazeUAV:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::ArmedUAV:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::UnmannedFighterJet:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::LandingHelicopter:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::AttackHelicopter:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::CargoHelicopter:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::MarineHelicopter:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::TrainAircraft:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::FighterJet:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::BomberPlane:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::VerticalTakeOffJets:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::AntiDroneSystems:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::MediumRangeAirDefenseSystems:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		case EWeaponType::LongRangeAirDefenseSystems:
			TypeBaseProductionTime = FTimespan(0, 1, 0, 0);
			break;
		default:
			UE_LOG(LogTemp, Error, TEXT("Hesaplanmaya calisilan uretim zamanina dair boyle bir silah kategorisi yok. Bulunamayan silah turu: %s"), *DesignedProduct.Type.ToString());
			break;
	}

	float NormalizedOverall = FMath::Clamp((Overall - 10.0f) / (150.0f - 10.0f), 0.0f, 1.0f);
	float NormalizedLocalityRate = FMath::Clamp((LocalityRate / 100.0f), 0.0f, 1.0f);
	float NormalizedFeaturesWorkload = FMath::Clamp((FeaturesWorkload / 40.0f), 0.0f, 1.0f);

	float TimeMultiplier = 1.0f + (NormalizedOverall * 1.0f) - (NormalizedLocalityRate * 0.75f) + (NormalizedFeaturesWorkload * 0.5f);


	TypeBaseProductionTime = TypeBaseProductionTime * TimeMultiplier;

	int32 TotalFinalSeconds = TypeBaseProductionTime.GetTotalSeconds();

	int32 RoundedSeconds = FMath::RoundToInt(TotalFinalSeconds / 30.0f) * 30; // 30 saniye aralýklarla yuvarlanmýþ zaman

	TypeBaseProductionTime = FTimespan::FromSeconds(RoundedSeconds);

	return TypeBaseProductionTime;
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

EWeaponType UHelperCalculationFunctions::ConvertWeaponTypeToEnum(const FName& WeaponType) {

	if (WeaponType == FName(TEXT("Assult Rifle")))
		return EWeaponType::AssultRifle;
	if (WeaponType == FName(TEXT("Sniper Rifle")))
		return EWeaponType::SniperRifle;
	if (WeaponType == FName(TEXT("Submachine Gun")))
		return EWeaponType::SubmachineGun;
	if (WeaponType == FName(TEXT("Air Attack Machine Gun")))
		return EWeaponType::AirAttackMachineGun;
	if (WeaponType == FName(TEXT("Coactional Machine Gun")))
		return EWeaponType::CoactionalMachineGun;
	if (WeaponType == FName(TEXT("Land To Air Missile")))
		return EWeaponType::LandToAirMissile;
	if (WeaponType == FName(TEXT("Air To Land Missile")))
		return EWeaponType::AirToLandMissile;
	if (WeaponType == FName(TEXT("Air To Air Missile")))
		return EWeaponType::AirToAirMissile;
	if (WeaponType == FName(TEXT("Light Tank")))
		return EWeaponType::LightTank;
	if (WeaponType == FName(TEXT("Main Battle Tank")))
		return EWeaponType::MainBattleTank;
	if (WeaponType == FName(TEXT("Heavy Tank")))
		return EWeaponType::HeavyTank;
	if (WeaponType == FName(TEXT("Amphibious Tank")))
		return EWeaponType::AmphibiousTank;
	if (WeaponType == FName(TEXT("Wheeled Armored Personnel Carrier")))
		return EWeaponType::WheeledArmoredPersonnelCarrier;
	if (WeaponType == FName(TEXT("Tracked Armored Personnel Carrier")))
		return EWeaponType::TrackedArmoredPersonnelCarrier;
	if (WeaponType == FName(TEXT("Armored Fighting Vehicle")))
		return EWeaponType::ArmoredFightingVehicle;
	if (WeaponType == FName(TEXT("Amphibious Armored Personnel Carrier")))
		return EWeaponType::AmphibiousArmoredPersonnelCarrier;
	if (WeaponType == FName(TEXT("Unmanned Air Vehicle")))
		return EWeaponType::UAV;
	if (WeaponType == FName(TEXT("Kamikaze UAV")))
		return EWeaponType::KamikazeUAV;
	if (WeaponType == FName(TEXT("Armed UAV")))
		return EWeaponType::ArmedUAV;
	if (WeaponType == FName(TEXT("Unmanned Fighter Jet")))
		return EWeaponType::UnmannedFighterJet;
	if (WeaponType == FName(TEXT("Landing Helicopter")))
		return EWeaponType::LandingHelicopter;
	if (WeaponType == FName(TEXT("Attack Helicopter")))
		return EWeaponType::AttackHelicopter;
	if (WeaponType == FName(TEXT("Cargo Helicopter")))
		return EWeaponType::CargoHelicopter;
	if (WeaponType == FName(TEXT("Marine Helicopter")))
		return EWeaponType::MarineHelicopter;
	if (WeaponType == FName(TEXT("Train Aircraft")))
		return EWeaponType::TrainAircraft;
	if (WeaponType == FName(TEXT("Fighter Jet")))
		return EWeaponType::FighterJet;
	if (WeaponType == FName(TEXT("Bomber Plane")))
		return EWeaponType::BomberPlane;
	if (WeaponType == FName(TEXT("Vertical TakeOff Jet")))
		return EWeaponType::VerticalTakeOffJets;
	if (WeaponType == FName(TEXT("Anti Drone System")))
		return EWeaponType::AntiDroneSystems;
	if (WeaponType == FName(TEXT("Medium Range Air Defense System")))
		return EWeaponType::MediumRangeAirDefenseSystems;
	if (WeaponType == FName(TEXT("Long Range Air Defense System")))
		return EWeaponType::LongRangeAirDefenseSystems;

	else
		return EWeaponType::Empty;

}

TMap<FString, int32> UHelperCalculationFunctions::CalculateDesignWeaponFeatures(FNewDesignedProductsStruct DesignedProduct) {

	UDataTable* AllFeaturesDataTable = Cast<UDataTable>(StaticLoadObject(UDataTable::StaticClass(), nullptr, TEXT("/Game/Datas/AllWeaponFeatures.AllWeaponFeatures")));
	TArray<FName> AllRowNames;

	if (!AllFeaturesDataTable) {

		UE_LOG(LogTemp, Error, TEXT("WeaponDataTable not assigned."));
	}
	else {
		AllRowNames = AllFeaturesDataTable->GetRowNames();
	}

	for (FName RowName : AllRowNames) {

		 FWeaponFeatures* FoundRow = AllFeaturesDataTable->FindRow<FWeaponFeatures>(RowName, TEXT("Bu ozellik tablodan alinamadi"));

		 if (FoundRow->IsSpecialAbility == false && FoundRow->CompatibleWeaponTypes.Find(DesignedProduct.Type)) {

		 }
		 
	}

	TMap<FString, int32> WeaponFeaturesAndValues;

	return WeaponFeaturesAndValues;
}

void UHelperCalculationFunctions::SortCountriesByPower(UObject* WorldContextObject, TArray<int32>& TopTenCountryIndexs, int32& MyCountryPlacement, int32& MyCountryIndex) {

	UC_GameInstance* GI = Cast<UC_GameInstance>(UGameplayStatics::GetGameInstance(WorldContextObject));
	GI->Implements<USaveInterface>();
	UC_SaveGame* LoadedSave;
	ISaveInterface::Execute_GetGameData(GI, LoadedSave);

	TArray<FCountrys> AllCountries = LoadedSave->Countrys;
	FString MyCountryName = LoadedSave->GeneralDatas.Country;
	TArray<int32> EmptyArray;
	TMap<int32, int64> CountryIndexAndTotalPower;
	int32 index = 0;
	TArray<TPair<int32, int64>> SortedArray;
	bool IsMyCountryPlacementFound = false;

	for (FCountrys SelectedCountry : AllCountries) {

		int64 TotalPowerOfWeapons = 0;
		CompareWeaponPowerAndTechnoligies(SelectedCountry, FCountrys(), FRebellion(), WorldContextObject, EmptyArray, TotalPowerOfWeapons);
		UE_LOG(LogTemp, Warning, TEXT("%d"), TotalPowerOfWeapons);
		
		CountryIndexAndTotalPower.Add(index, TotalPowerOfWeapons);
		if (MyCountryName.Equals(SelectedCountry.CountryName)) {
			MyCountryIndex = index;
		}

		index += 1;

	}

	for (const TPair<int32, int64>& Pair : CountryIndexAndTotalPower)
	{
		SortedArray.Add(Pair);
	}

	SortedArray.Sort([](const TPair<int32, int64>& A, const TPair<int32, int64>& B)

	{
			return A.Value > B.Value; 
	});

	for (int i = 0; i < SortedArray.Num(); i++) {

		if (IsMyCountryPlacementFound && i >= 10) {
			break;
		}
		else {

			if (SortedArray[i].Key == MyCountryIndex) {

				IsMyCountryPlacementFound = true;
				MyCountryPlacement = i + 1;
			}
		
			if (i < 10) {

				TopTenCountryIndexs.Add(SortedArray[i].Key);

			}
		}
		
	}

}

void UHelperCalculationFunctions::SortCompaniesByCompanyValues(UObject* WorldContextObject, TArray<int32>& AllCompanyPlacements, int32& MyCompanyPlacement){

	UC_GameInstance* GI = Cast<UC_GameInstance>(UGameplayStatics::GetGameInstance(WorldContextObject));
	GI->Implements<USaveInterface>();
	UC_SaveGame* LoadedSave;
	ISaveInterface::Execute_GetGameData(GI, LoadedSave);

	TArray<FFactorys> AllCompanies = LoadedSave->Factorys;
	FGeneralDatas GeneralDatas = LoadedSave->GeneralDatas;
	FDateTime CurrentControlTime = FDateTime::UtcNow();
	TMap<int32, double> CompanyIndexAndCompanyValue; //Benim þirketim -1 indeksli olacak 
	TArray<TPair<int32, double>> SortedArray;
	int32 index = 0;

	// 1 saat geçmiþ mi kontrol et 
	if (CurrentControlTime >= GeneralDatas.LastEntrance + FTimespan(1, 0, 0)) {

		GeneralDatas.OldGrowthRate = ((GeneralDatas.OldMyCompanyValue - GeneralDatas.MyCompanyValue) / GeneralDatas.OldMyCompanyValue) * 100;
		GeneralDatas.OldMyCompanyValue = GeneralDatas.MyCompanyValue;
		GeneralDatas.LastEntrance = CurrentControlTime;
		ISaveInterface::Execute_SaveGeneralData(GI, GeneralDatas, false);
		

		for (FFactorys GlobalCompany : AllCompanies) {
				
			GlobalCompany.OldGrowthRate = ((GlobalCompany.OldCompanyValue - GlobalCompany.CompanyValue) / GlobalCompany.OldCompanyValue) * 100;
			GlobalCompany.OldCompanyValue = GlobalCompany.CompanyValue;
			AllCompanies[index] = GlobalCompany;

			index += 1;
		}

		ISaveInterface::Execute_SaveGlobalFactory(GI, AllCompanies, false);

	}
	
	index = 0;
	for (FFactorys GlobalCompany : AllCompanies) {
			
			CompanyIndexAndCompanyValue.Add(index, GlobalCompany.OldCompanyValue);
			index += 1;
	}

	CompanyIndexAndCompanyValue.Add(-1, GeneralDatas.OldMyCompanyValue);
	
	for (const TPair<int32, double>& Pair : CompanyIndexAndCompanyValue){
		SortedArray.Add(Pair);
	}

	SortedArray.Sort([](const TPair<int32, double>& A, const TPair<int32, double>& B){
			return A.Value > B.Value;
	});

	for (int i = 0; i < SortedArray.Num(); i++) {
	
		if (SortedArray[i].Key == -1) {
			MyCompanyPlacement = i + 1;
		}
		
		AllCompanyPlacements.Add(SortedArray[i].Key);
	
	}

}