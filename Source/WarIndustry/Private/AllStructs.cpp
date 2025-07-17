// Fill out your copyright notice in the Description page of Project Settings.


#include "AllStructs.h"

TArray<FName> UAllStructs::AllWeaponCategories = {
	"Long Range Rifles",
	"Rockets",
	"Tanks",
	"Armored Vehicles",
	"Unmanned Air Vehicles",
	"Helicopters",
	"Fighter Jets",
	"Air Defense Systems"
};

TArray<FName> UAllStructs::AllWeaponTypes = {
	"Assult Rifle", "Sniper Rifle", "Submachine Gun", "Air Attack Machine Gun", "Coactional Machine Gun", 
	"Land To Air Missile", "Air To Land Missile", "Air To Air Missile",
	"Light Tank", "Main Battle Tank", "Heavy Tank", "Amphibious Tank",
    "Wheeled Armored Personnel Carrier", "Tracked Armored Personnel Carrier", "Armored Fighting Vehicle", "Amphibious Armored Personnel Carrier",
	"Unmanned Air Vehicle", "Kamikaze UAV", "Armed UAV", "Unmanned Fighter Jet",
	"Landing Helicopter", "Attack Helicopter", "Cargo Helicopter", "Marine Helicopter",
	"Train Aircraft", "Fighter Jet", "Bomber Plane", "Vertical TakeOff Jet",
	"Anti Drone System", "Medium Range Air Defense System", "Long Range Air Defense System" };



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

FName UAllStructs::FindWeaponCategoryByType(const FName& WeaponType) {

	if (WeaponType == FName(TEXT("Assult Rifle")) || WeaponType == FName(TEXT("Sniper Rifle")) || WeaponType == FName(TEXT("Submachine Gun")) || WeaponType == FName(TEXT("Air Attack Machine Gun")) || WeaponType == FName(TEXT("Coactional Machine Gun")))
		return AllWeaponCategories[0];
	if (WeaponType == FName(TEXT("Land To Air Missile")) || WeaponType == FName(TEXT("Air To Land Missile")) || WeaponType == FName(TEXT("Air To Air Missile")))
		return AllWeaponCategories[1];
	if (WeaponType == FName(TEXT("Light Tank")) || WeaponType == FName(TEXT("Main Battle Tank")) || WeaponType == FName(TEXT("Heavy Tank")) || WeaponType == FName(TEXT("Amphibious Tank")))
		return AllWeaponCategories[2];
	if (WeaponType == FName(TEXT("Wheeled Armored Personnel Carrier")) || WeaponType == FName(TEXT("Tracked Armored Personnel Carrier")) || WeaponType == FName(TEXT("Armored Fighting Vehicle")) || WeaponType == FName(TEXT("Amphibious Armored Personnel Carrier")))
		return AllWeaponCategories[3];
	if (WeaponType == FName(TEXT("Unmanned Air Vehicle")) || WeaponType == FName(TEXT("Kamikaze UAV")) || WeaponType == FName(TEXT("Armed UAV")) || WeaponType == FName(TEXT("Unmanned Fighter Jet")))
		return AllWeaponCategories[4];
	if (WeaponType == FName(TEXT("Landing Helicopter")) || WeaponType == FName(TEXT("Attack Helicopter")) || WeaponType == FName(TEXT("Cargo Helicopter")) || WeaponType == FName(TEXT("Marine Helicopter")))
		return AllWeaponCategories[5];
	if (WeaponType == FName(TEXT("Train Aircraft")) || WeaponType == FName(TEXT("Fighter Jet")) || WeaponType == FName(TEXT("Bomber Plane")) || WeaponType == FName(TEXT("Vertical TakeOff Jet")))
		return AllWeaponCategories[6];
	if (WeaponType == FName(TEXT("Anti Drone System")) || WeaponType == FName(TEXT("Medium Range Air Defense System")) || WeaponType == FName(TEXT("Long Range Air Defense System")))
		return AllWeaponCategories[7];
	else
		return "";
}