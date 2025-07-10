// Fill out your copyright notice in the Description page of Project Settings.


#include "AllStructs.h"

EWeaponCategory UAllStructs::ConvertWeaponCategoryToEnum(const FString& WeaponCategory) {

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

EWeaponType UAllStructs::ConvertWeaponTypeToEnum(const FName& WeaponType) {

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