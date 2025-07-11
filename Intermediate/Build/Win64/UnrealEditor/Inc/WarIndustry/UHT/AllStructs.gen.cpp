// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WarIndustry/Public/AllStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAllStructs() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_WarIndustry();
WARINDUSTRY_API UClass* Z_Construct_UClass_UAllStructs();
WARINDUSTRY_API UClass* Z_Construct_UClass_UAllStructs_NoRegister();
WARINDUSTRY_API UEnum* Z_Construct_UEnum_WarIndustry_EWeaponCategory();
WARINDUSTRY_API UEnum* Z_Construct_UEnum_WarIndustry_EWeaponType();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FContracts();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FCountrys();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FCountryWeaponsStartData();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FCurrentWars();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FDesignedProductsProduction();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FFactorys();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FGeneralDatas();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FLastSlot();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FMyFactorys();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FNewDesignedProductsStruct();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FNews();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FRebellion();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FResearchItems();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponFeatures();
// End Cross Module References

// Begin Enum EWeaponCategory
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponCategory;
static UEnum* EWeaponCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WarIndustry_EWeaponCategory, (UObject*)Z_Construct_UPackage__Script_WarIndustry(), TEXT("EWeaponCategory"));
	}
	return Z_Registration_Info_UEnum_EWeaponCategory.OuterSingleton;
}
template<> WARINDUSTRY_API UEnum* StaticEnum<EWeaponCategory>()
{
	return EWeaponCategory_StaticEnum();
}
struct Z_Construct_UEnum_WarIndustry_EWeaponCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AirDefensseSystems.Name", "EWeaponCategory::AirDefensseSystems" },
		{ "ArmoredVehicles.Name", "EWeaponCategory::ArmoredVehicles" },
		{ "BlueprintType", "true" },
		{ "Default.Name", "EWeaponCategory::Default" },
		{ "FighterJets.Name", "EWeaponCategory::FighterJets" },
		{ "Helicopters.Name", "EWeaponCategory::Helicopters" },
		{ "LongRangeRifles.Name", "EWeaponCategory::LongRangeRifles" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
		{ "Rockets.Name", "EWeaponCategory::Rockets" },
		{ "Tanks.Name", "EWeaponCategory::Tanks" },
		{ "Uavs.Name", "EWeaponCategory::Uavs" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeaponCategory::LongRangeRifles", (int64)EWeaponCategory::LongRangeRifles },
		{ "EWeaponCategory::Rockets", (int64)EWeaponCategory::Rockets },
		{ "EWeaponCategory::Tanks", (int64)EWeaponCategory::Tanks },
		{ "EWeaponCategory::ArmoredVehicles", (int64)EWeaponCategory::ArmoredVehicles },
		{ "EWeaponCategory::Uavs", (int64)EWeaponCategory::Uavs },
		{ "EWeaponCategory::Helicopters", (int64)EWeaponCategory::Helicopters },
		{ "EWeaponCategory::FighterJets", (int64)EWeaponCategory::FighterJets },
		{ "EWeaponCategory::AirDefensseSystems", (int64)EWeaponCategory::AirDefensseSystems },
		{ "EWeaponCategory::Default", (int64)EWeaponCategory::Default },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WarIndustry_EWeaponCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WarIndustry,
	nullptr,
	"EWeaponCategory",
	"EWeaponCategory",
	Z_Construct_UEnum_WarIndustry_EWeaponCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WarIndustry_EWeaponCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WarIndustry_EWeaponCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WarIndustry_EWeaponCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WarIndustry_EWeaponCategory()
{
	if (!Z_Registration_Info_UEnum_EWeaponCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponCategory.InnerSingleton, Z_Construct_UEnum_WarIndustry_EWeaponCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponCategory.InnerSingleton;
}
// End Enum EWeaponCategory

// Begin Enum EWeaponType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponType;
static UEnum* EWeaponType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WarIndustry_EWeaponType, (UObject*)Z_Construct_UPackage__Script_WarIndustry(), TEXT("EWeaponType"));
	}
	return Z_Registration_Info_UEnum_EWeaponType.OuterSingleton;
}
template<> WARINDUSTRY_API UEnum* StaticEnum<EWeaponType>()
{
	return EWeaponType_StaticEnum();
}
struct Z_Construct_UEnum_WarIndustry_EWeaponType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AirAttackMachineGun.Name", "EWeaponType::AirAttackMachineGun" },
		{ "AirToAirMissile.Name", "EWeaponType::AirToAirMissile" },
		{ "AirToLandMissile.Name", "EWeaponType::AirToLandMissile" },
		{ "AmphibiousArmoredPersonnelCarrier.Name", "EWeaponType::AmphibiousArmoredPersonnelCarrier" },
		{ "AmphibiousTank.Name", "EWeaponType::AmphibiousTank" },
		{ "AntiDroneSystems.Name", "EWeaponType::AntiDroneSystems" },
		{ "ArmedUAV.Name", "EWeaponType::ArmedUAV" },
		{ "ArmoredFightingVehicle.Name", "EWeaponType::ArmoredFightingVehicle" },
		{ "AssultRifle.Name", "EWeaponType::AssultRifle" },
		{ "AttackHelicopter.Name", "EWeaponType::AttackHelicopter" },
		{ "BlueprintType", "true" },
		{ "BomberPlane.Name", "EWeaponType::BomberPlane" },
		{ "CargoHelicopter.Name", "EWeaponType::CargoHelicopter" },
		{ "CoactionalMachineGun.Name", "EWeaponType::CoactionalMachineGun" },
		{ "Empty.Name", "EWeaponType::Empty" },
		{ "FighterJet.Name", "EWeaponType::FighterJet" },
		{ "HeavyTank.Name", "EWeaponType::HeavyTank" },
		{ "KamikazeUAV.Name", "EWeaponType::KamikazeUAV" },
		{ "LandingHelicopter.Name", "EWeaponType::LandingHelicopter" },
		{ "LandToAirMissile.Name", "EWeaponType::LandToAirMissile" },
		{ "LightTank.Name", "EWeaponType::LightTank" },
		{ "LongRangeAirDefenseSystems.Name", "EWeaponType::LongRangeAirDefenseSystems" },
		{ "MainBattleTank.Name", "EWeaponType::MainBattleTank" },
		{ "MarineHelicopter.Name", "EWeaponType::MarineHelicopter" },
		{ "MediumRangeAirDefenseSystems.Name", "EWeaponType::MediumRangeAirDefenseSystems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
		{ "SniperRifle.Name", "EWeaponType::SniperRifle" },
		{ "SubmachineGun.Name", "EWeaponType::SubmachineGun" },
		{ "TrackedArmoredPersonnelCarrier.Name", "EWeaponType::TrackedArmoredPersonnelCarrier" },
		{ "TrainAircraft.Name", "EWeaponType::TrainAircraft" },
		{ "UAV.Name", "EWeaponType::UAV" },
		{ "UnmannedFighterJet.Name", "EWeaponType::UnmannedFighterJet" },
		{ "VerticalTakeOffJets.Name", "EWeaponType::VerticalTakeOffJets" },
		{ "WheeledArmoredPersonnelCarrier.Name", "EWeaponType::WheeledArmoredPersonnelCarrier" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeaponType::Empty", (int64)EWeaponType::Empty },
		{ "EWeaponType::AssultRifle", (int64)EWeaponType::AssultRifle },
		{ "EWeaponType::SniperRifle", (int64)EWeaponType::SniperRifle },
		{ "EWeaponType::SubmachineGun", (int64)EWeaponType::SubmachineGun },
		{ "EWeaponType::AirAttackMachineGun", (int64)EWeaponType::AirAttackMachineGun },
		{ "EWeaponType::CoactionalMachineGun", (int64)EWeaponType::CoactionalMachineGun },
		{ "EWeaponType::LandToAirMissile", (int64)EWeaponType::LandToAirMissile },
		{ "EWeaponType::AirToLandMissile", (int64)EWeaponType::AirToLandMissile },
		{ "EWeaponType::AirToAirMissile", (int64)EWeaponType::AirToAirMissile },
		{ "EWeaponType::LightTank", (int64)EWeaponType::LightTank },
		{ "EWeaponType::MainBattleTank", (int64)EWeaponType::MainBattleTank },
		{ "EWeaponType::HeavyTank", (int64)EWeaponType::HeavyTank },
		{ "EWeaponType::AmphibiousTank", (int64)EWeaponType::AmphibiousTank },
		{ "EWeaponType::WheeledArmoredPersonnelCarrier", (int64)EWeaponType::WheeledArmoredPersonnelCarrier },
		{ "EWeaponType::TrackedArmoredPersonnelCarrier", (int64)EWeaponType::TrackedArmoredPersonnelCarrier },
		{ "EWeaponType::ArmoredFightingVehicle", (int64)EWeaponType::ArmoredFightingVehicle },
		{ "EWeaponType::AmphibiousArmoredPersonnelCarrier", (int64)EWeaponType::AmphibiousArmoredPersonnelCarrier },
		{ "EWeaponType::UAV", (int64)EWeaponType::UAV },
		{ "EWeaponType::KamikazeUAV", (int64)EWeaponType::KamikazeUAV },
		{ "EWeaponType::ArmedUAV", (int64)EWeaponType::ArmedUAV },
		{ "EWeaponType::UnmannedFighterJet", (int64)EWeaponType::UnmannedFighterJet },
		{ "EWeaponType::LandingHelicopter", (int64)EWeaponType::LandingHelicopter },
		{ "EWeaponType::AttackHelicopter", (int64)EWeaponType::AttackHelicopter },
		{ "EWeaponType::CargoHelicopter", (int64)EWeaponType::CargoHelicopter },
		{ "EWeaponType::MarineHelicopter", (int64)EWeaponType::MarineHelicopter },
		{ "EWeaponType::TrainAircraft", (int64)EWeaponType::TrainAircraft },
		{ "EWeaponType::FighterJet", (int64)EWeaponType::FighterJet },
		{ "EWeaponType::BomberPlane", (int64)EWeaponType::BomberPlane },
		{ "EWeaponType::VerticalTakeOffJets", (int64)EWeaponType::VerticalTakeOffJets },
		{ "EWeaponType::AntiDroneSystems", (int64)EWeaponType::AntiDroneSystems },
		{ "EWeaponType::MediumRangeAirDefenseSystems", (int64)EWeaponType::MediumRangeAirDefenseSystems },
		{ "EWeaponType::LongRangeAirDefenseSystems", (int64)EWeaponType::LongRangeAirDefenseSystems },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WarIndustry_EWeaponType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WarIndustry,
	nullptr,
	"EWeaponType",
	"EWeaponType",
	Z_Construct_UEnum_WarIndustry_EWeaponType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WarIndustry_EWeaponType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WarIndustry_EWeaponType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WarIndustry_EWeaponType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WarIndustry_EWeaponType()
{
	if (!Z_Registration_Info_UEnum_EWeaponType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponType.InnerSingleton, Z_Construct_UEnum_WarIndustry_EWeaponType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponType.InnerSingleton;
}
// End Enum EWeaponType

// Begin ScriptStruct FGeneralDatas
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeneralDatas;
class UScriptStruct* FGeneralDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeneralDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeneralDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeneralDatas, (UObject*)Z_Construct_UPackage__Script_WarIndustry(), TEXT("GeneralDatas"));
	}
	return Z_Registration_Info_UScriptStruct_GeneralDatas.OuterSingleton;
}
template<> WARINDUSTRY_API UScriptStruct* StaticStruct<FGeneralDatas>()
{
	return FGeneralDatas::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeneralDatas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalMoney_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompanyName_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Country_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CeoName_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyCountryFlag_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyCompanyValue_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompanyPopularity_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMyCompanyValue_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldGrowthRate_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebtCountryName_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Debt_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastDebtDate_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalDepositedMoney_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepositEarningTime_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StorageCapacity_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StorageOccupaidCapacity_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StorageLevel_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StorageUpgradePrice_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResearchSlotCount_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResearchAddSlotPrice_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResearchingProduct_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptedCountryContracts_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptedCompanyContracts_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastEntrance_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstalledVersion_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfilePicture_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TenderTime_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreWeAtWar_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableDesigns_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDesignCount_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewDesignSlotPrice_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponDesignAverages_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResearchCenterLevel_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResearchCenterUpgradePrice_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResearchCenterUpgradeTime_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResearchCenterUpgradeStartedTime_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResearchCenterIsUpgrading_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyPlacementInAllCompanies_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextRebellionSupportTime_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpiesSentTime_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SendedSpiesCountryIndexs_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextTimeControlGlobalFactories_MetaData[] = {
		{ "Category", "GeneralDatas" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TotalMoney;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CompanyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Country;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CeoName;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MyCountryFlag;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MyCompanyValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CompanyPopularity;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OldMyCompanyValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldGrowthRate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DebtCountryName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Debt;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastDebtDate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDepositedMoney;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DepositEarningTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StorageCapacity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StorageOccupaidCapacity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StorageLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StorageUpgradePrice;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResearchSlotCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResearchAddSlotPrice;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResearchingProduct_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResearchingProduct;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AcceptedCountryContracts;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AcceptedCompanyContracts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastEntrance;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstalledVersion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProfilePicture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TenderTime;
	static void NewProp_AreWeAtWar_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AreWeAtWar;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AvailableDesigns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableDesigns;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDesignCount_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaxDesignCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDesignSlotPrice_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewDesignSlotPrice;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponDesignAverages_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponDesignAverages_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WeaponDesignAverages;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResearchCenterLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResearchCenterUpgradePrice;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResearchCenterUpgradeTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResearchCenterUpgradeStartedTime;
	static void NewProp_ResearchCenterIsUpgrading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ResearchCenterIsUpgrading;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MyPlacementInAllCompanies;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextRebellionSupportTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpiesSentTime_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpiesSentTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SendedSpiesCountryIndexs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SendedSpiesCountryIndexs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextTimeControlGlobalFactories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeneralDatas>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_TotalMoney = { "TotalMoney", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, TotalMoney), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalMoney_MetaData), NewProp_TotalMoney_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_CompanyName = { "CompanyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, CompanyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompanyName_MetaData), NewProp_CompanyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_Country = { "Country", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, Country), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Country_MetaData), NewProp_Country_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_CeoName = { "CeoName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, CeoName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CeoName_MetaData), NewProp_CeoName_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_MyCountryFlag = { "MyCountryFlag", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, MyCountryFlag), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyCountryFlag_MetaData), NewProp_MyCountryFlag_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_MyCompanyValue = { "MyCompanyValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, MyCompanyValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyCompanyValue_MetaData), NewProp_MyCompanyValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_CompanyPopularity = { "CompanyPopularity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, CompanyPopularity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompanyPopularity_MetaData), NewProp_CompanyPopularity_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_OldMyCompanyValue = { "OldMyCompanyValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, OldMyCompanyValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMyCompanyValue_MetaData), NewProp_OldMyCompanyValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_OldGrowthRate = { "OldGrowthRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, OldGrowthRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldGrowthRate_MetaData), NewProp_OldGrowthRate_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_DebtCountryName = { "DebtCountryName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, DebtCountryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebtCountryName_MetaData), NewProp_DebtCountryName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_Debt = { "Debt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, Debt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Debt_MetaData), NewProp_Debt_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_LastDebtDate = { "LastDebtDate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, LastDebtDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastDebtDate_MetaData), NewProp_LastDebtDate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_TotalDepositedMoney = { "TotalDepositedMoney", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, TotalDepositedMoney), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalDepositedMoney_MetaData), NewProp_TotalDepositedMoney_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_DepositEarningTime = { "DepositEarningTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, DepositEarningTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepositEarningTime_MetaData), NewProp_DepositEarningTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_StorageCapacity = { "StorageCapacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, StorageCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StorageCapacity_MetaData), NewProp_StorageCapacity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_StorageOccupaidCapacity = { "StorageOccupaidCapacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, StorageOccupaidCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StorageOccupaidCapacity_MetaData), NewProp_StorageOccupaidCapacity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_StorageLevel = { "StorageLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, StorageLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StorageLevel_MetaData), NewProp_StorageLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_StorageUpgradePrice = { "StorageUpgradePrice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, StorageUpgradePrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StorageUpgradePrice_MetaData), NewProp_StorageUpgradePrice_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_ResearchSlotCount = { "ResearchSlotCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, ResearchSlotCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResearchSlotCount_MetaData), NewProp_ResearchSlotCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_ResearchAddSlotPrice = { "ResearchAddSlotPrice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, ResearchAddSlotPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResearchAddSlotPrice_MetaData), NewProp_ResearchAddSlotPrice_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_ResearchingProduct_Inner = { "ResearchingProduct", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_ResearchingProduct = { "ResearchingProduct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, ResearchingProduct), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResearchingProduct_MetaData), NewProp_ResearchingProduct_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_AcceptedCountryContracts = { "AcceptedCountryContracts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, AcceptedCountryContracts), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptedCountryContracts_MetaData), NewProp_AcceptedCountryContracts_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_AcceptedCompanyContracts = { "AcceptedCompanyContracts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, AcceptedCompanyContracts), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptedCompanyContracts_MetaData), NewProp_AcceptedCompanyContracts_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_LastEntrance = { "LastEntrance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, LastEntrance), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastEntrance_MetaData), NewProp_LastEntrance_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_InstalledVersion = { "InstalledVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, InstalledVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstalledVersion_MetaData), NewProp_InstalledVersion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_ProfilePicture = { "ProfilePicture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, ProfilePicture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfilePicture_MetaData), NewProp_ProfilePicture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_TenderTime = { "TenderTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, TenderTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TenderTime_MetaData), NewProp_TenderTime_MetaData) };
void Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_AreWeAtWar_SetBit(void* Obj)
{
	((FGeneralDatas*)Obj)->AreWeAtWar = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_AreWeAtWar = { "AreWeAtWar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeneralDatas), &Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_AreWeAtWar_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreWeAtWar_MetaData), NewProp_AreWeAtWar_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_AvailableDesigns_Inner = { "AvailableDesigns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_AvailableDesigns = { "AvailableDesigns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, AvailableDesigns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableDesigns_MetaData), NewProp_AvailableDesigns_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_MaxDesignCount_Inner = { "MaxDesignCount", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_MaxDesignCount = { "MaxDesignCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, MaxDesignCount), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDesignCount_MetaData), NewProp_MaxDesignCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_NewDesignSlotPrice_Inner = { "NewDesignSlotPrice", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_NewDesignSlotPrice = { "NewDesignSlotPrice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, NewDesignSlotPrice), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewDesignSlotPrice_MetaData), NewProp_NewDesignSlotPrice_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_WeaponDesignAverages_ValueProp = { "WeaponDesignAverages", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_WeaponDesignAverages_Key_KeyProp = { "WeaponDesignAverages_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_WeaponDesignAverages = { "WeaponDesignAverages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, WeaponDesignAverages), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponDesignAverages_MetaData), NewProp_WeaponDesignAverages_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_ResearchCenterLevel = { "ResearchCenterLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, ResearchCenterLevel), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResearchCenterLevel_MetaData), NewProp_ResearchCenterLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_ResearchCenterUpgradePrice = { "ResearchCenterUpgradePrice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, ResearchCenterUpgradePrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResearchCenterUpgradePrice_MetaData), NewProp_ResearchCenterUpgradePrice_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_ResearchCenterUpgradeTime = { "ResearchCenterUpgradeTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, ResearchCenterUpgradeTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResearchCenterUpgradeTime_MetaData), NewProp_ResearchCenterUpgradeTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_ResearchCenterUpgradeStartedTime = { "ResearchCenterUpgradeStartedTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, ResearchCenterUpgradeStartedTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResearchCenterUpgradeStartedTime_MetaData), NewProp_ResearchCenterUpgradeStartedTime_MetaData) };
void Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_ResearchCenterIsUpgrading_SetBit(void* Obj)
{
	((FGeneralDatas*)Obj)->ResearchCenterIsUpgrading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_ResearchCenterIsUpgrading = { "ResearchCenterIsUpgrading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeneralDatas), &Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_ResearchCenterIsUpgrading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResearchCenterIsUpgrading_MetaData), NewProp_ResearchCenterIsUpgrading_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_MyPlacementInAllCompanies = { "MyPlacementInAllCompanies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, MyPlacementInAllCompanies), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyPlacementInAllCompanies_MetaData), NewProp_MyPlacementInAllCompanies_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_NextRebellionSupportTime = { "NextRebellionSupportTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, NextRebellionSupportTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextRebellionSupportTime_MetaData), NewProp_NextRebellionSupportTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_SpiesSentTime_Inner = { "SpiesSentTime", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_SpiesSentTime = { "SpiesSentTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, SpiesSentTime), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpiesSentTime_MetaData), NewProp_SpiesSentTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_SendedSpiesCountryIndexs_Inner = { "SendedSpiesCountryIndexs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_SendedSpiesCountryIndexs = { "SendedSpiesCountryIndexs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, SendedSpiesCountryIndexs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SendedSpiesCountryIndexs_MetaData), NewProp_SendedSpiesCountryIndexs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_NextTimeControlGlobalFactories = { "NextTimeControlGlobalFactories", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneralDatas, NextTimeControlGlobalFactories), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextTimeControlGlobalFactories_MetaData), NewProp_NextTimeControlGlobalFactories_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeneralDatas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_TotalMoney,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_CompanyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_Country,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_CeoName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_MyCountryFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_MyCompanyValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_CompanyPopularity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_OldMyCompanyValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_OldGrowthRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_DebtCountryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_Debt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_LastDebtDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_TotalDepositedMoney,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_DepositEarningTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_StorageCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_StorageOccupaidCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_StorageLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_StorageUpgradePrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_ResearchSlotCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_ResearchAddSlotPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_ResearchingProduct_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_ResearchingProduct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_AcceptedCountryContracts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_AcceptedCompanyContracts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_LastEntrance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_InstalledVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_ProfilePicture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_TenderTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_AreWeAtWar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_AvailableDesigns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_AvailableDesigns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_MaxDesignCount_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_MaxDesignCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_NewDesignSlotPrice_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_NewDesignSlotPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_WeaponDesignAverages_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_WeaponDesignAverages_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_WeaponDesignAverages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_ResearchCenterLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_ResearchCenterUpgradePrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_ResearchCenterUpgradeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_ResearchCenterUpgradeStartedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_ResearchCenterIsUpgrading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_MyPlacementInAllCompanies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_NextRebellionSupportTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_SpiesSentTime_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_SpiesSentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_SendedSpiesCountryIndexs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_SendedSpiesCountryIndexs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewProp_NextTimeControlGlobalFactories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneralDatas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeneralDatas_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WarIndustry,
	nullptr,
	&NewStructOps,
	"GeneralDatas",
	Z_Construct_UScriptStruct_FGeneralDatas_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneralDatas_Statics::PropPointers),
	sizeof(FGeneralDatas),
	alignof(FGeneralDatas),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneralDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeneralDatas_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeneralDatas()
{
	if (!Z_Registration_Info_UScriptStruct_GeneralDatas.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeneralDatas.InnerSingleton, Z_Construct_UScriptStruct_FGeneralDatas_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeneralDatas.InnerSingleton;
}
// End ScriptStruct FGeneralDatas

// Begin ScriptStruct FLastSlot
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LastSlot;
class UScriptStruct* FLastSlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LastSlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LastSlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLastSlot, (UObject*)Z_Construct_UPackage__Script_WarIndustry(), TEXT("LastSlot"));
	}
	return Z_Registration_Info_UScriptStruct_LastSlot.OuterSingleton;
}
template<> WARINDUSTRY_API UScriptStruct* StaticStruct<FLastSlot>()
{
	return FLastSlot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLastSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSavedSlot_MetaData[] = {
		{ "Category", "LastSlot" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastSavedSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLastSlot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLastSlot_Statics::NewProp_LastSavedSlot = { "LastSavedSlot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLastSlot, LastSavedSlot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSavedSlot_MetaData), NewProp_LastSavedSlot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLastSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLastSlot_Statics::NewProp_LastSavedSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLastSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLastSlot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WarIndustry,
	nullptr,
	&NewStructOps,
	"LastSlot",
	Z_Construct_UScriptStruct_FLastSlot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLastSlot_Statics::PropPointers),
	sizeof(FLastSlot),
	alignof(FLastSlot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLastSlot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLastSlot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLastSlot()
{
	if (!Z_Registration_Info_UScriptStruct_LastSlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LastSlot.InnerSingleton, Z_Construct_UScriptStruct_FLastSlot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LastSlot.InnerSingleton;
}
// End ScriptStruct FLastSlot

// Begin ScriptStruct FCountrys
static_assert(std::is_polymorphic<FCountrys>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCountrys cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Countrys;
class UScriptStruct* FCountrys::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Countrys.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Countrys.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCountrys, (UObject*)Z_Construct_UPackage__Script_WarIndustry(), TEXT("Countrys"));
	}
	return Z_Registration_Info_UScriptStruct_Countrys.OuterSingleton;
}
template<> WARINDUSTRY_API UScriptStruct* StaticStruct<FCountrys>()
{
	return FCountrys::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCountrys_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountryName_MetaData[] = {
		{ "Category", "Countrys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountryFlag_MetaData[] = {
		{ "Category", "Countrys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalArea_MetaData[] = {
		{ "Category", "Countrys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MostPowerfulTechnologies_MetaData[] = {
		{ "Category", "Countrys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandBorders_MetaData[] = {
		{ "Category", "Countrys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterBorders_MetaData[] = {
		{ "Category", "Countrys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PowersUnknown_MetaData[] = {
		{ "Category", "Countrys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpiesSent_MetaData[] = {
		{ "Category", "Countrys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Relationships_MetaData[] = {
		{ "Category", "Countrys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicColor_MetaData[] = {
		{ "Category", "Countrys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomStencilValue_MetaData[] = {
		{ "Category", "Countrys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponsIndexsAndCountsInStorage_MetaData[] = {
		{ "Category", "Countrys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportingRebellionCount_MetaData[] = {
		{ "Category", "Countrys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldPlacement_MetaData[] = {
		{ "Category", "Countrys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CountryName;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CountryFlag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalArea;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MostPowerfulTechnologies;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LandBorders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LandBorders;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WaterBorders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WaterBorders;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PowersUnknown_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PowersUnknown;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpiesSent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Relationships_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Relationships_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Relationships;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CustomStencilValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponsIndexsAndCountsInStorage_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponsIndexsAndCountsInStorage_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WeaponsIndexsAndCountsInStorage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SupportingRebellionCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldPlacement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCountrys>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_CountryName = { "CountryName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCountrys, CountryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountryName_MetaData), NewProp_CountryName_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_CountryFlag = { "CountryFlag", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCountrys, CountryFlag), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountryFlag_MetaData), NewProp_CountryFlag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_TotalArea = { "TotalArea", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCountrys, TotalArea), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalArea_MetaData), NewProp_TotalArea_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_MostPowerfulTechnologies = { "MostPowerfulTechnologies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCountrys, MostPowerfulTechnologies), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MostPowerfulTechnologies_MetaData), NewProp_MostPowerfulTechnologies_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_LandBorders_Inner = { "LandBorders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_LandBorders = { "LandBorders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCountrys, LandBorders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandBorders_MetaData), NewProp_LandBorders_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_WaterBorders_Inner = { "WaterBorders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_WaterBorders = { "WaterBorders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCountrys, WaterBorders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterBorders_MetaData), NewProp_WaterBorders_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_PowersUnknown_Inner = { "PowersUnknown", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_PowersUnknown = { "PowersUnknown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCountrys, PowersUnknown), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PowersUnknown_MetaData), NewProp_PowersUnknown_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_SpiesSent = { "SpiesSent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCountrys, SpiesSent), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpiesSent_MetaData), NewProp_SpiesSent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_Relationships_ValueProp = { "Relationships", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_Relationships_Key_KeyProp = { "Relationships_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_Relationships = { "Relationships", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCountrys, Relationships), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Relationships_MetaData), NewProp_Relationships_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_DynamicColor = { "DynamicColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCountrys, DynamicColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicColor_MetaData), NewProp_DynamicColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_CustomStencilValue = { "CustomStencilValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCountrys, CustomStencilValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomStencilValue_MetaData), NewProp_CustomStencilValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_WeaponsIndexsAndCountsInStorage_ValueProp = { "WeaponsIndexsAndCountsInStorage", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_WeaponsIndexsAndCountsInStorage_Key_KeyProp = { "WeaponsIndexsAndCountsInStorage_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_WeaponsIndexsAndCountsInStorage = { "WeaponsIndexsAndCountsInStorage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCountrys, WeaponsIndexsAndCountsInStorage), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponsIndexsAndCountsInStorage_MetaData), NewProp_WeaponsIndexsAndCountsInStorage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_SupportingRebellionCount = { "SupportingRebellionCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCountrys, SupportingRebellionCount), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportingRebellionCount_MetaData), NewProp_SupportingRebellionCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_OldPlacement = { "OldPlacement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCountrys, OldPlacement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldPlacement_MetaData), NewProp_OldPlacement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCountrys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_CountryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_CountryFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_TotalArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_MostPowerfulTechnologies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_LandBorders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_LandBorders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_WaterBorders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_WaterBorders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_PowersUnknown_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_PowersUnknown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_SpiesSent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_Relationships_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_Relationships_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_Relationships,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_DynamicColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_CustomStencilValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_WeaponsIndexsAndCountsInStorage_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_WeaponsIndexsAndCountsInStorage_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_WeaponsIndexsAndCountsInStorage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_SupportingRebellionCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountrys_Statics::NewProp_OldPlacement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCountrys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCountrys_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WarIndustry,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"Countrys",
	Z_Construct_UScriptStruct_FCountrys_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCountrys_Statics::PropPointers),
	sizeof(FCountrys),
	alignof(FCountrys),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCountrys_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCountrys_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCountrys()
{
	if (!Z_Registration_Info_UScriptStruct_Countrys.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Countrys.InnerSingleton, Z_Construct_UScriptStruct_FCountrys_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Countrys.InnerSingleton;
}
// End ScriptStruct FCountrys

// Begin ScriptStruct FFactorys
static_assert(std::is_polymorphic<FFactorys>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFactorys cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Factorys;
class UScriptStruct* FFactorys::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Factorys.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Factorys.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFactorys, (UObject*)Z_Construct_UPackage__Script_WarIndustry(), TEXT("Factorys"));
	}
	return Z_Registration_Info_UScriptStruct_Factorys.OuterSingleton;
}
template<> WARINDUSTRY_API UScriptStruct* StaticStruct<FFactorys>()
{
	return FFactorys::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFactorys_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompanyName_MetaData[] = {
		{ "Category", "Factorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Country_MetaData[] = {
		{ "Category", "Factorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompanyValue_MetaData[] = {
		{ "Category", "Factorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCompanyValue_MetaData[] = {
		{ "Category", "Factorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldGrowthRate_MetaData[] = {
		{ "Category", "Factorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Products_MetaData[] = {
		{ "Category", "Factorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductionCategories_MetaData[] = {
		{ "Category", "Factorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DailyProductionLimitByCategories_MetaData[] = {
		{ "Category", "Factorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastTimeCollectedProducts_MetaData[] = {
		{ "Category", "Factorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductionSpeedMultiplier_MetaData[] = {
		{ "Category", "Factorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompanyMinOverall_MetaData[] = {
		{ "Category", "Factorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompanyMaxOverall_MetaData[] = {
		{ "Category", "Factorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CompanyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Country;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CompanyValue;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OldCompanyValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldGrowthRate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Products_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Products;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProductionCategories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProductionCategories;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DailyProductionLimitByCategories_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DailyProductionLimitByCategories_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DailyProductionLimitByCategories;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastTimeCollectedProducts_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastTimeCollectedProducts_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LastTimeCollectedProducts;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProductionSpeedMultiplier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CompanyMinOverall;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CompanyMaxOverall;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFactorys>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_CompanyName = { "CompanyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactorys, CompanyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompanyName_MetaData), NewProp_CompanyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_Country = { "Country", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactorys, Country), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Country_MetaData), NewProp_Country_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_CompanyValue = { "CompanyValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactorys, CompanyValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompanyValue_MetaData), NewProp_CompanyValue_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_OldCompanyValue = { "OldCompanyValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactorys, OldCompanyValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCompanyValue_MetaData), NewProp_OldCompanyValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_OldGrowthRate = { "OldGrowthRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactorys, OldGrowthRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldGrowthRate_MetaData), NewProp_OldGrowthRate_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_Products_Inner = { "Products", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_Products = { "Products", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactorys, Products), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Products_MetaData), NewProp_Products_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_ProductionCategories_Inner = { "ProductionCategories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_ProductionCategories = { "ProductionCategories", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactorys, ProductionCategories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductionCategories_MetaData), NewProp_ProductionCategories_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_DailyProductionLimitByCategories_ValueProp = { "DailyProductionLimitByCategories", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_DailyProductionLimitByCategories_Key_KeyProp = { "DailyProductionLimitByCategories_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_DailyProductionLimitByCategories = { "DailyProductionLimitByCategories", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactorys, DailyProductionLimitByCategories), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DailyProductionLimitByCategories_MetaData), NewProp_DailyProductionLimitByCategories_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_LastTimeCollectedProducts_ValueProp = { "LastTimeCollectedProducts", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_LastTimeCollectedProducts_Key_KeyProp = { "LastTimeCollectedProducts_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_LastTimeCollectedProducts = { "LastTimeCollectedProducts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactorys, LastTimeCollectedProducts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastTimeCollectedProducts_MetaData), NewProp_LastTimeCollectedProducts_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_ProductionSpeedMultiplier = { "ProductionSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactorys, ProductionSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductionSpeedMultiplier_MetaData), NewProp_ProductionSpeedMultiplier_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_CompanyMinOverall = { "CompanyMinOverall", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactorys, CompanyMinOverall), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompanyMinOverall_MetaData), NewProp_CompanyMinOverall_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_CompanyMaxOverall = { "CompanyMaxOverall", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactorys, CompanyMaxOverall), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompanyMaxOverall_MetaData), NewProp_CompanyMaxOverall_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFactorys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_CompanyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_Country,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_CompanyValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_OldCompanyValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_OldGrowthRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_Products_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_Products,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_ProductionCategories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_ProductionCategories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_DailyProductionLimitByCategories_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_DailyProductionLimitByCategories_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_DailyProductionLimitByCategories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_LastTimeCollectedProducts_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_LastTimeCollectedProducts_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_LastTimeCollectedProducts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_ProductionSpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_CompanyMinOverall,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactorys_Statics::NewProp_CompanyMaxOverall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactorys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFactorys_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WarIndustry,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"Factorys",
	Z_Construct_UScriptStruct_FFactorys_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactorys_Statics::PropPointers),
	sizeof(FFactorys),
	alignof(FFactorys),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactorys_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFactorys_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFactorys()
{
	if (!Z_Registration_Info_UScriptStruct_Factorys.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Factorys.InnerSingleton, Z_Construct_UScriptStruct_FFactorys_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Factorys.InnerSingleton;
}
// End ScriptStruct FFactorys

// Begin ScriptStruct FMyFactorys
static_assert(std::is_polymorphic<FMyFactorys>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMyFactorys cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MyFactorys;
class UScriptStruct* FMyFactorys::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MyFactorys.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MyFactorys.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyFactorys, (UObject*)Z_Construct_UPackage__Script_WarIndustry(), TEXT("MyFactorys"));
	}
	return Z_Registration_Info_UScriptStruct_MyFactorys.OuterSingleton;
}
template<> WARINDUSTRY_API UScriptStruct* StaticStruct<FMyFactorys>()
{
	return FMyFactorys::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMyFactorys_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactoryName_MetaData[] = {
		{ "Category", "MyFactorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductionClass_MetaData[] = {
		{ "Category", "MyFactorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenedSlots_MetaData[] = {
		{ "Category", "MyFactorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildPrice_MetaData[] = {
		{ "Category", "MyFactorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsBuilded_MetaData[] = {
		{ "Category", "MyFactorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Building_MetaData[] = {
		{ "Category", "MyFactorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildStartedTime_MetaData[] = {
		{ "Category", "MyFactorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildTime_MetaData[] = {
		{ "Category", "MyFactorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactoryLevel_MetaData[] = {
		{ "Category", "MyFactorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductionSlotAndItemIndex_MetaData[] = {
		{ "Category", "MyFactorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSlotPrice_MetaData[] = {
		{ "Category", "MyFactorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductSelected_MetaData[] = {
		{ "Category", "MyFactorys" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_FactoryName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProductionClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OpenedSlots;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BuildPrice;
	static void NewProp_IsBuilded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsBuilded;
	static void NewProp_Building_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Building;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuildStartedTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuildTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FactoryLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProductionSlotAndItemIndex_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProductionSlotAndItemIndex_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ProductionSlotAndItemIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSlotPrice;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ProductSelected_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProductSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyFactorys>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_FactoryName = { "FactoryName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyFactorys, FactoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactoryName_MetaData), NewProp_FactoryName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_ProductionClass = { "ProductionClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyFactorys, ProductionClass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductionClass_MetaData), NewProp_ProductionClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_OpenedSlots = { "OpenedSlots", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyFactorys, OpenedSlots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenedSlots_MetaData), NewProp_OpenedSlots_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_BuildPrice = { "BuildPrice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyFactorys, BuildPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildPrice_MetaData), NewProp_BuildPrice_MetaData) };
void Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_IsBuilded_SetBit(void* Obj)
{
	((FMyFactorys*)Obj)->IsBuilded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_IsBuilded = { "IsBuilded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMyFactorys), &Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_IsBuilded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsBuilded_MetaData), NewProp_IsBuilded_MetaData) };
void Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_Building_SetBit(void* Obj)
{
	((FMyFactorys*)Obj)->Building = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_Building = { "Building", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMyFactorys), &Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_Building_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Building_MetaData), NewProp_Building_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_BuildStartedTime = { "BuildStartedTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyFactorys, BuildStartedTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildStartedTime_MetaData), NewProp_BuildStartedTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_BuildTime = { "BuildTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyFactorys, BuildTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildTime_MetaData), NewProp_BuildTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_FactoryLevel = { "FactoryLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyFactorys, FactoryLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactoryLevel_MetaData), NewProp_FactoryLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_ProductionSlotAndItemIndex_ValueProp = { "ProductionSlotAndItemIndex", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_ProductionSlotAndItemIndex_Key_KeyProp = { "ProductionSlotAndItemIndex_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_ProductionSlotAndItemIndex = { "ProductionSlotAndItemIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyFactorys, ProductionSlotAndItemIndex), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductionSlotAndItemIndex_MetaData), NewProp_ProductionSlotAndItemIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_NewSlotPrice = { "NewSlotPrice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyFactorys, NewSlotPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSlotPrice_MetaData), NewProp_NewSlotPrice_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_ProductSelected_Inner = { "ProductSelected", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_ProductSelected = { "ProductSelected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyFactorys, ProductSelected), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductSelected_MetaData), NewProp_ProductSelected_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMyFactorys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_FactoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_ProductionClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_OpenedSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_BuildPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_IsBuilded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_Building,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_BuildStartedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_BuildTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_FactoryLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_ProductionSlotAndItemIndex_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_ProductionSlotAndItemIndex_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_ProductionSlotAndItemIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_NewSlotPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_ProductSelected_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyFactorys_Statics::NewProp_ProductSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyFactorys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyFactorys_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WarIndustry,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"MyFactorys",
	Z_Construct_UScriptStruct_FMyFactorys_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyFactorys_Statics::PropPointers),
	sizeof(FMyFactorys),
	alignof(FMyFactorys),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyFactorys_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMyFactorys_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMyFactorys()
{
	if (!Z_Registration_Info_UScriptStruct_MyFactorys.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MyFactorys.InnerSingleton, Z_Construct_UScriptStruct_FMyFactorys_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MyFactorys.InnerSingleton;
}
// End ScriptStruct FMyFactorys

// Begin ScriptStruct FResearchItems
static_assert(std::is_polymorphic<FResearchItems>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FResearchItems cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ResearchItems;
class UScriptStruct* FResearchItems::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ResearchItems.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ResearchItems.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FResearchItems, (UObject*)Z_Construct_UPackage__Script_WarIndustry(), TEXT("ResearchItems"));
	}
	return Z_Registration_Info_UScriptStruct_ResearchItems.OuterSingleton;
}
template<> WARINDUSTRY_API UScriptStruct* StaticStruct<FResearchItems>()
{
	return FResearchItems::StaticStruct();
}
struct Z_Construct_UScriptStruct_FResearchItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialName_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Country_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightChange_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecialAbility_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityOpenLevel_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletType_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FuelType_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosiveType_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuidanceType_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnationType_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTracking_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetIdectification_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResearchCost_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResearchTime_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductTime_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialUseVehicles_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsLocal_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelCategory_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Locked_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialResearchStartTime_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResearchSlot_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsResearching_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsResearchCompleted_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntValuesMap_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatValuesMap_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntValuesChanges_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatValuesChanges_MetaData[] = {
		{ "Category", "ResearchItems" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Country;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Material;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightChange;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpecialAbility;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityOpenLevel;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BulletType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FuelType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExplosiveType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GuidanceType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IgnationType;
	static void NewProp_TargetTracking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TargetTracking;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetIdectification_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetIdectification;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResearchCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cost;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResearchTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProductTime;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Image;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialUseVehicles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialUseVehicles;
	static void NewProp_IsLocal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLocal;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Level;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LevelCategory;
	static void NewProp_Locked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Locked;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialResearchStartTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResearchSlot;
	static void NewProp_IsResearching_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsResearching;
	static void NewProp_IsResearchCompleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsResearchCompleted;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntValuesMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IntValuesMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_IntValuesMap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValuesMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FloatValuesMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FloatValuesMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntValuesChanges_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IntValuesChanges_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_IntValuesChanges;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValuesChanges_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FloatValuesChanges_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FloatValuesChanges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResearchItems>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_MaterialName = { "MaterialName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, MaterialName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialName_MetaData), NewProp_MaterialName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_Country = { "Country", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, Country), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Country_MetaData), NewProp_Country_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, Material), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_WeightChange = { "WeightChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, WeightChange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightChange_MetaData), NewProp_WeightChange_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_SpecialAbility = { "SpecialAbility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, SpecialAbility), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecialAbility_MetaData), NewProp_SpecialAbility_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_AbilityOpenLevel = { "AbilityOpenLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, AbilityOpenLevel), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityOpenLevel_MetaData), NewProp_AbilityOpenLevel_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_BulletType = { "BulletType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, BulletType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletType_MetaData), NewProp_BulletType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_FuelType = { "FuelType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, FuelType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FuelType_MetaData), NewProp_FuelType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_ExplosiveType = { "ExplosiveType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, ExplosiveType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosiveType_MetaData), NewProp_ExplosiveType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_GuidanceType = { "GuidanceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, GuidanceType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuidanceType_MetaData), NewProp_GuidanceType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IgnationType = { "IgnationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, IgnationType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnationType_MetaData), NewProp_IgnationType_MetaData) };
void Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_TargetTracking_SetBit(void* Obj)
{
	((FResearchItems*)Obj)->TargetTracking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_TargetTracking = { "TargetTracking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FResearchItems), &Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_TargetTracking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTracking_MetaData), NewProp_TargetTracking_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_TargetIdectification_Inner = { "TargetIdectification", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_TargetIdectification = { "TargetIdectification", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, TargetIdectification), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetIdectification_MetaData), NewProp_TargetIdectification_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_ResearchCost = { "ResearchCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, ResearchCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResearchCost_MetaData), NewProp_ResearchCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, Cost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cost_MetaData), NewProp_Cost_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_ResearchTime = { "ResearchTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, ResearchTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResearchTime_MetaData), NewProp_ResearchTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_ProductTime = { "ProductTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, ProductTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductTime_MetaData), NewProp_ProductTime_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_MaterialUseVehicles_Inner = { "MaterialUseVehicles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_MaterialUseVehicles = { "MaterialUseVehicles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, MaterialUseVehicles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialUseVehicles_MetaData), NewProp_MaterialUseVehicles_MetaData) };
void Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IsLocal_SetBit(void* Obj)
{
	((FResearchItems*)Obj)->IsLocal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IsLocal = { "IsLocal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FResearchItems), &Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IsLocal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsLocal_MetaData), NewProp_IsLocal_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, Level), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_LevelCategory = { "LevelCategory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, LevelCategory), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelCategory_MetaData), NewProp_LevelCategory_MetaData) };
void Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_Locked_SetBit(void* Obj)
{
	((FResearchItems*)Obj)->Locked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_Locked = { "Locked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FResearchItems), &Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_Locked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Locked_MetaData), NewProp_Locked_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_MaterialResearchStartTime = { "MaterialResearchStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, MaterialResearchStartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialResearchStartTime_MetaData), NewProp_MaterialResearchStartTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_ResearchSlot = { "ResearchSlot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, ResearchSlot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResearchSlot_MetaData), NewProp_ResearchSlot_MetaData) };
void Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IsResearching_SetBit(void* Obj)
{
	((FResearchItems*)Obj)->IsResearching = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IsResearching = { "IsResearching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FResearchItems), &Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IsResearching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsResearching_MetaData), NewProp_IsResearching_MetaData) };
void Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IsResearchCompleted_SetBit(void* Obj)
{
	((FResearchItems*)Obj)->IsResearchCompleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IsResearchCompleted = { "IsResearchCompleted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FResearchItems), &Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IsResearchCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsResearchCompleted_MetaData), NewProp_IsResearchCompleted_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IntValuesMap_ValueProp = { "IntValuesMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IntValuesMap_Key_KeyProp = { "IntValuesMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IntValuesMap = { "IntValuesMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, IntValuesMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntValuesMap_MetaData), NewProp_IntValuesMap_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_FloatValuesMap_ValueProp = { "FloatValuesMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_FloatValuesMap_Key_KeyProp = { "FloatValuesMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_FloatValuesMap = { "FloatValuesMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, FloatValuesMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatValuesMap_MetaData), NewProp_FloatValuesMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IntValuesChanges_ValueProp = { "IntValuesChanges", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IntValuesChanges_Key_KeyProp = { "IntValuesChanges_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IntValuesChanges = { "IntValuesChanges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, IntValuesChanges), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntValuesChanges_MetaData), NewProp_IntValuesChanges_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_FloatValuesChanges_ValueProp = { "FloatValuesChanges", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_FloatValuesChanges_Key_KeyProp = { "FloatValuesChanges_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_FloatValuesChanges = { "FloatValuesChanges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResearchItems, FloatValuesChanges), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatValuesChanges_MetaData), NewProp_FloatValuesChanges_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResearchItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_MaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_CategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_Country,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_WeightChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_SpecialAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_AbilityOpenLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_BulletType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_FuelType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_ExplosiveType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_GuidanceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IgnationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_TargetTracking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_TargetIdectification_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_TargetIdectification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_ResearchCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_Cost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_ResearchTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_ProductTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_MaterialUseVehicles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_MaterialUseVehicles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IsLocal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_LevelCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_Locked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_MaterialResearchStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_ResearchSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IsResearching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IsResearchCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IntValuesMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IntValuesMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IntValuesMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_FloatValuesMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_FloatValuesMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_FloatValuesMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IntValuesChanges_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IntValuesChanges_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_IntValuesChanges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_FloatValuesChanges_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_FloatValuesChanges_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchItems_Statics::NewProp_FloatValuesChanges,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResearchItems_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WarIndustry,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ResearchItems",
	Z_Construct_UScriptStruct_FResearchItems_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchItems_Statics::PropPointers),
	sizeof(FResearchItems),
	alignof(FResearchItems),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchItems_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FResearchItems_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FResearchItems()
{
	if (!Z_Registration_Info_UScriptStruct_ResearchItems.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ResearchItems.InnerSingleton, Z_Construct_UScriptStruct_FResearchItems_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ResearchItems.InnerSingleton;
}
// End ScriptStruct FResearchItems

// Begin ScriptStruct FContracts
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Contracts;
class UScriptStruct* FContracts::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Contracts.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Contracts.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContracts, (UObject*)Z_Construct_UPackage__Script_WarIndustry(), TEXT("Contracts"));
	}
	return Z_Registration_Info_UScriptStruct_Contracts.OuterSingleton;
}
template<> WARINDUSTRY_API UScriptStruct* StaticStruct<FContracts>()
{
	return FContracts::StaticStruct();
}
struct Z_Construct_UScriptStruct_FContracts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductName_MetaData[] = {
		{ "Category", "Contracts" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[] = {
		{ "Category", "Contracts" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GivenCountry_MetaData[] = {
		{ "Category", "Contracts" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GivenCount_MetaData[] = {
		{ "Category", "Contracts" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Relationship_MetaData[] = {
		{ "Category", "Contracts" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TakenMoney_MetaData[] = {
		{ "Category", "Contracts" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContractLastDate_MetaData[] = {
		{ "Category", "Contracts" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "Category", "Contracts" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsCountryContract_MetaData[] = {
		{ "Category", "Contracts" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSellContract_MetaData[] = {
		{ "Category", "Contracts" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedGains_MetaData[] = {
		{ "Category", "Contracts" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedFeatureValues_MetaData[] = {
		{ "Category", "Contracts" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GivenCountry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GivenCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Relationship;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TakenMoney;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContractLastDate;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Image;
	static void NewProp_IsCountryContract_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCountryContract;
	static void NewProp_IsSellContract_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSellContract;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedGains_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedGains;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedFeatureValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedFeatureValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContracts>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FContracts_Statics::NewProp_ProductName = { "ProductName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContracts, ProductName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductName_MetaData), NewProp_ProductName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContracts_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContracts, WeaponType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponType_MetaData), NewProp_WeaponType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FContracts_Statics::NewProp_GivenCountry = { "GivenCountry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContracts, GivenCountry), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GivenCountry_MetaData), NewProp_GivenCountry_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FContracts_Statics::NewProp_GivenCount = { "GivenCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContracts, GivenCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GivenCount_MetaData), NewProp_GivenCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FContracts_Statics::NewProp_Relationship = { "Relationship", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContracts, Relationship), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Relationship_MetaData), NewProp_Relationship_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FContracts_Statics::NewProp_TakenMoney = { "TakenMoney", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContracts, TakenMoney), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TakenMoney_MetaData), NewProp_TakenMoney_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContracts_Statics::NewProp_ContractLastDate = { "ContractLastDate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContracts, ContractLastDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContractLastDate_MetaData), NewProp_ContractLastDate_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FContracts_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContracts, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) };
void Z_Construct_UScriptStruct_FContracts_Statics::NewProp_IsCountryContract_SetBit(void* Obj)
{
	((FContracts*)Obj)->IsCountryContract = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContracts_Statics::NewProp_IsCountryContract = { "IsCountryContract", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FContracts), &Z_Construct_UScriptStruct_FContracts_Statics::NewProp_IsCountryContract_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsCountryContract_MetaData), NewProp_IsCountryContract_MetaData) };
void Z_Construct_UScriptStruct_FContracts_Statics::NewProp_IsSellContract_SetBit(void* Obj)
{
	((FContracts*)Obj)->IsSellContract = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContracts_Statics::NewProp_IsSellContract = { "IsSellContract", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FContracts), &Z_Construct_UScriptStruct_FContracts_Statics::NewProp_IsSellContract_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSellContract_MetaData), NewProp_IsSellContract_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FContracts_Statics::NewProp_SelectedGains_Inner = { "SelectedGains", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FContracts_Statics::NewProp_SelectedGains = { "SelectedGains", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContracts, SelectedGains), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedGains_MetaData), NewProp_SelectedGains_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FContracts_Statics::NewProp_SelectedFeatureValues_Inner = { "SelectedFeatureValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FContracts_Statics::NewProp_SelectedFeatureValues = { "SelectedFeatureValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContracts, SelectedFeatureValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedFeatureValues_MetaData), NewProp_SelectedFeatureValues_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContracts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContracts_Statics::NewProp_ProductName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContracts_Statics::NewProp_WeaponType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContracts_Statics::NewProp_GivenCountry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContracts_Statics::NewProp_GivenCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContracts_Statics::NewProp_Relationship,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContracts_Statics::NewProp_TakenMoney,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContracts_Statics::NewProp_ContractLastDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContracts_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContracts_Statics::NewProp_IsCountryContract,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContracts_Statics::NewProp_IsSellContract,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContracts_Statics::NewProp_SelectedGains_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContracts_Statics::NewProp_SelectedGains,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContracts_Statics::NewProp_SelectedFeatureValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContracts_Statics::NewProp_SelectedFeatureValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContracts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContracts_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WarIndustry,
	nullptr,
	&NewStructOps,
	"Contracts",
	Z_Construct_UScriptStruct_FContracts_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContracts_Statics::PropPointers),
	sizeof(FContracts),
	alignof(FContracts),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContracts_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FContracts_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FContracts()
{
	if (!Z_Registration_Info_UScriptStruct_Contracts.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Contracts.InnerSingleton, Z_Construct_UScriptStruct_FContracts_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Contracts.InnerSingleton;
}
// End ScriptStruct FContracts

// Begin ScriptStruct FRebellion
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Rebellion;
class UScriptStruct* FRebellion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Rebellion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Rebellion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRebellion, (UObject*)Z_Construct_UPackage__Script_WarIndustry(), TEXT("Rebellion"));
	}
	return Z_Registration_Info_UScriptStruct_Rebellion.OuterSingleton;
}
template<> WARINDUSTRY_API UScriptStruct* StaticStruct<FRebellion>()
{
	return FRebellion::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRebellion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedRebellionCountryIndex_MetaData[] = {
		{ "Category", "Rebellion" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PossibilityOfRebellion_MetaData[] = {
		{ "Category", "Rebellion" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalMoneyOfRebellions_MetaData[] = {
		{ "Category", "Rebellion" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RebellionStartTime_MetaData[] = {
		{ "Category", "Rebellion" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsRebellionStarted_MetaData[] = {
		{ "Category", "Rebellion" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSupportingByMe_MetaData[] = {
		{ "Category", "Rebellion" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportingByCountryIndexAndLastTimeTheySoldWeaponsToRebellions_MetaData[] = {
		{ "Category", "Rebellion" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllWeaponsIndexsAndCount_MetaData[] = {
		{ "Category", "Rebellion" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SupportedRebellionCountryIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PossibilityOfRebellion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalMoneyOfRebellions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RebellionStartTime;
	static void NewProp_IsRebellionStarted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRebellionStarted;
	static void NewProp_IsSupportingByMe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSupportingByMe;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SupportingByCountryIndexAndLastTimeTheySoldWeaponsToRebellions_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SupportingByCountryIndexAndLastTimeTheySoldWeaponsToRebellions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SupportingByCountryIndexAndLastTimeTheySoldWeaponsToRebellions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllWeaponsIndexsAndCount_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllWeaponsIndexsAndCount_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AllWeaponsIndexsAndCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRebellion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_SupportedRebellionCountryIndex = { "SupportedRebellionCountryIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRebellion, SupportedRebellionCountryIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedRebellionCountryIndex_MetaData), NewProp_SupportedRebellionCountryIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_PossibilityOfRebellion = { "PossibilityOfRebellion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRebellion, PossibilityOfRebellion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PossibilityOfRebellion_MetaData), NewProp_PossibilityOfRebellion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_TotalMoneyOfRebellions = { "TotalMoneyOfRebellions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRebellion, TotalMoneyOfRebellions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalMoneyOfRebellions_MetaData), NewProp_TotalMoneyOfRebellions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_RebellionStartTime = { "RebellionStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRebellion, RebellionStartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RebellionStartTime_MetaData), NewProp_RebellionStartTime_MetaData) };
void Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_IsRebellionStarted_SetBit(void* Obj)
{
	((FRebellion*)Obj)->IsRebellionStarted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_IsRebellionStarted = { "IsRebellionStarted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRebellion), &Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_IsRebellionStarted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsRebellionStarted_MetaData), NewProp_IsRebellionStarted_MetaData) };
void Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_IsSupportingByMe_SetBit(void* Obj)
{
	((FRebellion*)Obj)->IsSupportingByMe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_IsSupportingByMe = { "IsSupportingByMe", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRebellion), &Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_IsSupportingByMe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSupportingByMe_MetaData), NewProp_IsSupportingByMe_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_SupportingByCountryIndexAndLastTimeTheySoldWeaponsToRebellions_ValueProp = { "SupportingByCountryIndexAndLastTimeTheySoldWeaponsToRebellions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_SupportingByCountryIndexAndLastTimeTheySoldWeaponsToRebellions_Key_KeyProp = { "SupportingByCountryIndexAndLastTimeTheySoldWeaponsToRebellions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_SupportingByCountryIndexAndLastTimeTheySoldWeaponsToRebellions = { "SupportingByCountryIndexAndLastTimeTheySoldWeaponsToRebellions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRebellion, SupportingByCountryIndexAndLastTimeTheySoldWeaponsToRebellions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportingByCountryIndexAndLastTimeTheySoldWeaponsToRebellions_MetaData), NewProp_SupportingByCountryIndexAndLastTimeTheySoldWeaponsToRebellions_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_AllWeaponsIndexsAndCount_ValueProp = { "AllWeaponsIndexsAndCount", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_AllWeaponsIndexsAndCount_Key_KeyProp = { "AllWeaponsIndexsAndCount_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_AllWeaponsIndexsAndCount = { "AllWeaponsIndexsAndCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRebellion, AllWeaponsIndexsAndCount), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllWeaponsIndexsAndCount_MetaData), NewProp_AllWeaponsIndexsAndCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRebellion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_SupportedRebellionCountryIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_PossibilityOfRebellion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_TotalMoneyOfRebellions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_RebellionStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_IsRebellionStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_IsSupportingByMe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_SupportingByCountryIndexAndLastTimeTheySoldWeaponsToRebellions_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_SupportingByCountryIndexAndLastTimeTheySoldWeaponsToRebellions_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_SupportingByCountryIndexAndLastTimeTheySoldWeaponsToRebellions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_AllWeaponsIndexsAndCount_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_AllWeaponsIndexsAndCount_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRebellion_Statics::NewProp_AllWeaponsIndexsAndCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRebellion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRebellion_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WarIndustry,
	nullptr,
	&NewStructOps,
	"Rebellion",
	Z_Construct_UScriptStruct_FRebellion_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRebellion_Statics::PropPointers),
	sizeof(FRebellion),
	alignof(FRebellion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRebellion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRebellion_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRebellion()
{
	if (!Z_Registration_Info_UScriptStruct_Rebellion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Rebellion.InnerSingleton, Z_Construct_UScriptStruct_FRebellion_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Rebellion.InnerSingleton;
}
// End ScriptStruct FRebellion

// Begin ScriptStruct FCurrentWars
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurrentWars;
class UScriptStruct* FCurrentWars::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurrentWars.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurrentWars.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurrentWars, (UObject*)Z_Construct_UPackage__Script_WarIndustry(), TEXT("CurrentWars"));
	}
	return Z_Registration_Info_UScriptStruct_CurrentWars.OuterSingleton;
}
template<> WARINDUSTRY_API UScriptStruct* StaticStruct<FCurrentWars>()
{
	return FCurrentWars::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCurrentWars_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackingCountryIndex_MetaData[] = {
		{ "Category", "CurrentWars" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackingCountryDestroyedWeaponsIndexsAndCounts_MetaData[] = {
		{ "Category", "CurrentWars" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportingCountriesForAttackSide_MetaData[] = {
		{ "Category", "CurrentWars" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastCheckTimeAttackingCountryWeaponsCount_MetaData[] = {
		{ "Category", "CurrentWars" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefendingCountryIndex_MetaData[] = {
		{ "Category", "CurrentWars" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefendingCountryDestroyedWeaponsIndexsAndCounts_MetaData[] = {
		{ "Category", "CurrentWars" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportingCountriesForDefensseSide_MetaData[] = {
		{ "Category", "CurrentWars" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastCheckTimeDefendingCountryWeaponsCount_MetaData[] = {
		{ "Category", "CurrentWars" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastWeaponsCalculatedTime_MetaData[] = {
		{ "Category", "CurrentWars" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VotesWarYesToWar_MetaData[] = {
		{ "Category", "CurrentWars" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VotesWarNoToWar_MetaData[] = {
		{ "Category", "CurrentWars" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsMyCountrysWar_MetaData[] = {
		{ "Category", "CurrentWars" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttackingCountryIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttackingCountryDestroyedWeaponsIndexsAndCounts_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttackingCountryDestroyedWeaponsIndexsAndCounts_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AttackingCountryDestroyedWeaponsIndexsAndCounts;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SupportingCountriesForAttackSide_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportingCountriesForAttackSide;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastCheckTimeAttackingCountryWeaponsCount_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LastCheckTimeAttackingCountryWeaponsCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefendingCountryIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefendingCountryDestroyedWeaponsIndexsAndCounts_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefendingCountryDestroyedWeaponsIndexsAndCounts_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DefendingCountryDestroyedWeaponsIndexsAndCounts;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SupportingCountriesForDefensseSide_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportingCountriesForDefensseSide;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastCheckTimeDefendingCountryWeaponsCount_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LastCheckTimeDefendingCountryWeaponsCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastWeaponsCalculatedTime;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VotesWarYesToWar_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VotesWarYesToWar;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VotesWarNoToWar_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VotesWarNoToWar;
	static void NewProp_IsMyCountrysWar_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMyCountrysWar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurrentWars>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_AttackingCountryIndex = { "AttackingCountryIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurrentWars, AttackingCountryIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackingCountryIndex_MetaData), NewProp_AttackingCountryIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_AttackingCountryDestroyedWeaponsIndexsAndCounts_ValueProp = { "AttackingCountryDestroyedWeaponsIndexsAndCounts", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_AttackingCountryDestroyedWeaponsIndexsAndCounts_Key_KeyProp = { "AttackingCountryDestroyedWeaponsIndexsAndCounts_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_AttackingCountryDestroyedWeaponsIndexsAndCounts = { "AttackingCountryDestroyedWeaponsIndexsAndCounts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurrentWars, AttackingCountryDestroyedWeaponsIndexsAndCounts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackingCountryDestroyedWeaponsIndexsAndCounts_MetaData), NewProp_AttackingCountryDestroyedWeaponsIndexsAndCounts_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_SupportingCountriesForAttackSide_Inner = { "SupportingCountriesForAttackSide", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_SupportingCountriesForAttackSide = { "SupportingCountriesForAttackSide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurrentWars, SupportingCountriesForAttackSide), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportingCountriesForAttackSide_MetaData), NewProp_SupportingCountriesForAttackSide_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_LastCheckTimeAttackingCountryWeaponsCount_Inner = { "LastCheckTimeAttackingCountryWeaponsCount", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_LastCheckTimeAttackingCountryWeaponsCount = { "LastCheckTimeAttackingCountryWeaponsCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurrentWars, LastCheckTimeAttackingCountryWeaponsCount), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastCheckTimeAttackingCountryWeaponsCount_MetaData), NewProp_LastCheckTimeAttackingCountryWeaponsCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_DefendingCountryIndex = { "DefendingCountryIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurrentWars, DefendingCountryIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefendingCountryIndex_MetaData), NewProp_DefendingCountryIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_DefendingCountryDestroyedWeaponsIndexsAndCounts_ValueProp = { "DefendingCountryDestroyedWeaponsIndexsAndCounts", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_DefendingCountryDestroyedWeaponsIndexsAndCounts_Key_KeyProp = { "DefendingCountryDestroyedWeaponsIndexsAndCounts_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_DefendingCountryDestroyedWeaponsIndexsAndCounts = { "DefendingCountryDestroyedWeaponsIndexsAndCounts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurrentWars, DefendingCountryDestroyedWeaponsIndexsAndCounts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefendingCountryDestroyedWeaponsIndexsAndCounts_MetaData), NewProp_DefendingCountryDestroyedWeaponsIndexsAndCounts_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_SupportingCountriesForDefensseSide_Inner = { "SupportingCountriesForDefensseSide", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_SupportingCountriesForDefensseSide = { "SupportingCountriesForDefensseSide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurrentWars, SupportingCountriesForDefensseSide), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportingCountriesForDefensseSide_MetaData), NewProp_SupportingCountriesForDefensseSide_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_LastCheckTimeDefendingCountryWeaponsCount_Inner = { "LastCheckTimeDefendingCountryWeaponsCount", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_LastCheckTimeDefendingCountryWeaponsCount = { "LastCheckTimeDefendingCountryWeaponsCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurrentWars, LastCheckTimeDefendingCountryWeaponsCount), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastCheckTimeDefendingCountryWeaponsCount_MetaData), NewProp_LastCheckTimeDefendingCountryWeaponsCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_LastWeaponsCalculatedTime = { "LastWeaponsCalculatedTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurrentWars, LastWeaponsCalculatedTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastWeaponsCalculatedTime_MetaData), NewProp_LastWeaponsCalculatedTime_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_VotesWarYesToWar_Inner = { "VotesWarYesToWar", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_VotesWarYesToWar = { "VotesWarYesToWar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurrentWars, VotesWarYesToWar), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VotesWarYesToWar_MetaData), NewProp_VotesWarYesToWar_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_VotesWarNoToWar_Inner = { "VotesWarNoToWar", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_VotesWarNoToWar = { "VotesWarNoToWar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurrentWars, VotesWarNoToWar), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VotesWarNoToWar_MetaData), NewProp_VotesWarNoToWar_MetaData) };
void Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_IsMyCountrysWar_SetBit(void* Obj)
{
	((FCurrentWars*)Obj)->IsMyCountrysWar = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_IsMyCountrysWar = { "IsMyCountrysWar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCurrentWars), &Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_IsMyCountrysWar_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsMyCountrysWar_MetaData), NewProp_IsMyCountrysWar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurrentWars_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_AttackingCountryIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_AttackingCountryDestroyedWeaponsIndexsAndCounts_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_AttackingCountryDestroyedWeaponsIndexsAndCounts_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_AttackingCountryDestroyedWeaponsIndexsAndCounts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_SupportingCountriesForAttackSide_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_SupportingCountriesForAttackSide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_LastCheckTimeAttackingCountryWeaponsCount_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_LastCheckTimeAttackingCountryWeaponsCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_DefendingCountryIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_DefendingCountryDestroyedWeaponsIndexsAndCounts_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_DefendingCountryDestroyedWeaponsIndexsAndCounts_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_DefendingCountryDestroyedWeaponsIndexsAndCounts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_SupportingCountriesForDefensseSide_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_SupportingCountriesForDefensseSide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_LastCheckTimeDefendingCountryWeaponsCount_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_LastCheckTimeDefendingCountryWeaponsCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_LastWeaponsCalculatedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_VotesWarYesToWar_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_VotesWarYesToWar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_VotesWarNoToWar_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_VotesWarNoToWar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentWars_Statics::NewProp_IsMyCountrysWar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentWars_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurrentWars_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WarIndustry,
	nullptr,
	&NewStructOps,
	"CurrentWars",
	Z_Construct_UScriptStruct_FCurrentWars_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentWars_Statics::PropPointers),
	sizeof(FCurrentWars),
	alignof(FCurrentWars),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentWars_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCurrentWars_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCurrentWars()
{
	if (!Z_Registration_Info_UScriptStruct_CurrentWars.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurrentWars.InnerSingleton, Z_Construct_UScriptStruct_FCurrentWars_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CurrentWars.InnerSingleton;
}
// End ScriptStruct FCurrentWars

// Begin ScriptStruct FNews
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_News;
class UScriptStruct* FNews::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_News.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_News.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNews, (UObject*)Z_Construct_UPackage__Script_WarIndustry(), TEXT("News"));
	}
	return Z_Registration_Info_UScriptStruct_News.OuterSingleton;
}
template<> WARINDUSTRY_API UScriptStruct* StaticStruct<FNews>()
{
	return FNews::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNews_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewsTitle_MetaData[] = {
		{ "Category", "News" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewsType_MetaData[] = {
		{ "Category", "News" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewsDataSavedIndex_MetaData[] = {
		{ "Category", "News" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsNewsRead_MetaData[] = {
		{ "Category", "News" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewsTitle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewsType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewsDataSavedIndex;
	static void NewProp_IsNewsRead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsNewsRead;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNews>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNews_Statics::NewProp_NewsTitle = { "NewsTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNews, NewsTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewsTitle_MetaData), NewProp_NewsTitle_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNews_Statics::NewProp_NewsType = { "NewsType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNews, NewsType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewsType_MetaData), NewProp_NewsType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNews_Statics::NewProp_NewsDataSavedIndex = { "NewsDataSavedIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNews, NewsDataSavedIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewsDataSavedIndex_MetaData), NewProp_NewsDataSavedIndex_MetaData) };
void Z_Construct_UScriptStruct_FNews_Statics::NewProp_IsNewsRead_SetBit(void* Obj)
{
	((FNews*)Obj)->IsNewsRead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNews_Statics::NewProp_IsNewsRead = { "IsNewsRead", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNews), &Z_Construct_UScriptStruct_FNews_Statics::NewProp_IsNewsRead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsNewsRead_MetaData), NewProp_IsNewsRead_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNews_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNews_Statics::NewProp_NewsTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNews_Statics::NewProp_NewsType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNews_Statics::NewProp_NewsDataSavedIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNews_Statics::NewProp_IsNewsRead,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNews_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNews_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WarIndustry,
	nullptr,
	&NewStructOps,
	"News",
	Z_Construct_UScriptStruct_FNews_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNews_Statics::PropPointers),
	sizeof(FNews),
	alignof(FNews),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNews_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNews_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNews()
{
	if (!Z_Registration_Info_UScriptStruct_News.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_News.InnerSingleton, Z_Construct_UScriptStruct_FNews_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_News.InnerSingleton;
}
// End ScriptStruct FNews

// Begin ScriptStruct FDesignedProductsProduction
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DesignedProductsProduction;
class UScriptStruct* FDesignedProductsProduction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DesignedProductsProduction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DesignedProductsProduction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDesignedProductsProduction, (UObject*)Z_Construct_UPackage__Script_WarIndustry(), TEXT("DesignedProductsProduction"));
	}
	return Z_Registration_Info_UScriptStruct_DesignedProductsProduction.OuterSingleton;
}
template<> WARINDUSTRY_API UScriptStruct* StaticStruct<FDesignedProductsProduction>()
{
	return FDesignedProductsProduction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDesignedProductsProduction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductionStartTime_MetaData[] = {
		{ "Category", "DesignedProductsProduction" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductionFactoryIndex_MetaData[] = {
		{ "Category", "DesignedProductsProduction" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestedNumber_MetaData[] = {
		{ "Category", "DesignedProductsProduction" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProductionStartTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProductionFactoryIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequestedNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDesignedProductsProduction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDesignedProductsProduction_Statics::NewProp_ProductionStartTime = { "ProductionStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDesignedProductsProduction, ProductionStartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductionStartTime_MetaData), NewProp_ProductionStartTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDesignedProductsProduction_Statics::NewProp_ProductionFactoryIndex = { "ProductionFactoryIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDesignedProductsProduction, ProductionFactoryIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductionFactoryIndex_MetaData), NewProp_ProductionFactoryIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDesignedProductsProduction_Statics::NewProp_RequestedNumber = { "RequestedNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDesignedProductsProduction, RequestedNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestedNumber_MetaData), NewProp_RequestedNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDesignedProductsProduction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDesignedProductsProduction_Statics::NewProp_ProductionStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDesignedProductsProduction_Statics::NewProp_ProductionFactoryIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDesignedProductsProduction_Statics::NewProp_RequestedNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDesignedProductsProduction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDesignedProductsProduction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WarIndustry,
	nullptr,
	&NewStructOps,
	"DesignedProductsProduction",
	Z_Construct_UScriptStruct_FDesignedProductsProduction_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDesignedProductsProduction_Statics::PropPointers),
	sizeof(FDesignedProductsProduction),
	alignof(FDesignedProductsProduction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDesignedProductsProduction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDesignedProductsProduction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDesignedProductsProduction()
{
	if (!Z_Registration_Info_UScriptStruct_DesignedProductsProduction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DesignedProductsProduction.InnerSingleton, Z_Construct_UScriptStruct_FDesignedProductsProduction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DesignedProductsProduction.InnerSingleton;
}
// End ScriptStruct FDesignedProductsProduction

// Begin ScriptStruct FNewDesignedProductsStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NewDesignedProductsStruct;
class UScriptStruct* FNewDesignedProductsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NewDesignedProductsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NewDesignedProductsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNewDesignedProductsStruct, (UObject*)Z_Construct_UPackage__Script_WarIndustry(), TEXT("NewDesignedProductsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_NewDesignedProductsStruct.OuterSingleton;
}
template<> WARINDUSTRY_API UScriptStruct* StaticStruct<FNewDesignedProductsStruct>()
{
	return FNewDesignedProductsStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Country_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProducedCompany_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalityRate_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCost_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductionCost_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompatibleProducts_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstProperty_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondProperty_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdProperty_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FourthProperty_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FifthProperty_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SixthProperty_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Overall_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProducedUnits_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductionImage_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesignSelectedParts_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductionTime_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeaturesAndValues_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Production_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FightingAgainstAndStrength_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsingWeaponTypeAndName_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsDesignedByMyCompany_MetaData[] = {
		{ "Category", "NewDesignedProductsStruct" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Class;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Country;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProducedCompany;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalityRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProductionCost;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CompatibleProducts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CompatibleProducts;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstProperty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondProperty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThirdProperty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FourthProperty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FifthProperty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SixthProperty;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Overall;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProducedUnits;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ProductionImage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DesignSelectedParts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DesignSelectedParts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProductionTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FeaturesAndValues_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FeaturesAndValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FeaturesAndValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Production_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Production;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FightingAgainstAndStrength_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FightingAgainstAndStrength_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FightingAgainstAndStrength;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UsingWeaponTypeAndName_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UsingWeaponTypeAndName_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_UsingWeaponTypeAndName;
	static void NewProp_IsDesignedByMyCompany_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDesignedByMyCompany;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNewDesignedProductsStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, Class), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_Country = { "Country", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, Country), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Country_MetaData), NewProp_Country_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_ProducedCompany = { "ProducedCompany", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, ProducedCompany), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProducedCompany_MetaData), NewProp_ProducedCompany_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_LocalityRate = { "LocalityRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, LocalityRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalityRate_MetaData), NewProp_LocalityRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_DefaultCost = { "DefaultCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, DefaultCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCost_MetaData), NewProp_DefaultCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_ProductionCost = { "ProductionCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, ProductionCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductionCost_MetaData), NewProp_ProductionCost_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_CompatibleProducts_Inner = { "CompatibleProducts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_CompatibleProducts = { "CompatibleProducts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, CompatibleProducts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompatibleProducts_MetaData), NewProp_CompatibleProducts_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_FirstProperty = { "FirstProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, FirstProperty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstProperty_MetaData), NewProp_FirstProperty_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_SecondProperty = { "SecondProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, SecondProperty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondProperty_MetaData), NewProp_SecondProperty_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_ThirdProperty = { "ThirdProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, ThirdProperty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdProperty_MetaData), NewProp_ThirdProperty_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_FourthProperty = { "FourthProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, FourthProperty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FourthProperty_MetaData), NewProp_FourthProperty_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_FifthProperty = { "FifthProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, FifthProperty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FifthProperty_MetaData), NewProp_FifthProperty_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_SixthProperty = { "SixthProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, SixthProperty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SixthProperty_MetaData), NewProp_SixthProperty_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_Overall = { "Overall", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, Overall), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Overall_MetaData), NewProp_Overall_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_ProducedUnits = { "ProducedUnits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, ProducedUnits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProducedUnits_MetaData), NewProp_ProducedUnits_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_ProductionImage = { "ProductionImage", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, ProductionImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductionImage_MetaData), NewProp_ProductionImage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_DesignSelectedParts_Inner = { "DesignSelectedParts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_DesignSelectedParts = { "DesignSelectedParts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, DesignSelectedParts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesignSelectedParts_MetaData), NewProp_DesignSelectedParts_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_ProductionTime = { "ProductionTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, ProductionTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductionTime_MetaData), NewProp_ProductionTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_FeaturesAndValues_ValueProp = { "FeaturesAndValues", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_FeaturesAndValues_Key_KeyProp = { "FeaturesAndValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_FeaturesAndValues = { "FeaturesAndValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, FeaturesAndValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeaturesAndValues_MetaData), NewProp_FeaturesAndValues_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_Production_Inner = { "Production", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDesignedProductsProduction, METADATA_PARAMS(0, nullptr) }; // 3789060387
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_Production = { "Production", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, Production), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Production_MetaData), NewProp_Production_MetaData) }; // 3789060387
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_FightingAgainstAndStrength_ValueProp = { "FightingAgainstAndStrength", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_FightingAgainstAndStrength_Key_KeyProp = { "FightingAgainstAndStrength_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_FightingAgainstAndStrength = { "FightingAgainstAndStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, FightingAgainstAndStrength), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FightingAgainstAndStrength_MetaData), NewProp_FightingAgainstAndStrength_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_UsingWeaponTypeAndName_ValueProp = { "UsingWeaponTypeAndName", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_UsingWeaponTypeAndName_Key_KeyProp = { "UsingWeaponTypeAndName_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_UsingWeaponTypeAndName = { "UsingWeaponTypeAndName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewDesignedProductsStruct, UsingWeaponTypeAndName), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsingWeaponTypeAndName_MetaData), NewProp_UsingWeaponTypeAndName_MetaData) };
void Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_IsDesignedByMyCompany_SetBit(void* Obj)
{
	((FNewDesignedProductsStruct*)Obj)->IsDesignedByMyCompany = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_IsDesignedByMyCompany = { "IsDesignedByMyCompany", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNewDesignedProductsStruct), &Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_IsDesignedByMyCompany_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsDesignedByMyCompany_MetaData), NewProp_IsDesignedByMyCompany_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_Country,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_ProducedCompany,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_LocalityRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_DefaultCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_ProductionCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_CompatibleProducts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_CompatibleProducts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_FirstProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_SecondProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_ThirdProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_FourthProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_FifthProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_SixthProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_Overall,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_ProducedUnits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_ProductionImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_DesignSelectedParts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_DesignSelectedParts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_ProductionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_FeaturesAndValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_FeaturesAndValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_FeaturesAndValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_Production_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_Production,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_FightingAgainstAndStrength_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_FightingAgainstAndStrength_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_FightingAgainstAndStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_UsingWeaponTypeAndName_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_UsingWeaponTypeAndName_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_UsingWeaponTypeAndName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewProp_IsDesignedByMyCompany,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WarIndustry,
	nullptr,
	&NewStructOps,
	"NewDesignedProductsStruct",
	Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::PropPointers),
	sizeof(FNewDesignedProductsStruct),
	alignof(FNewDesignedProductsStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNewDesignedProductsStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NewDesignedProductsStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NewDesignedProductsStruct.InnerSingleton, Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NewDesignedProductsStruct.InnerSingleton;
}
// End ScriptStruct FNewDesignedProductsStruct

// Begin ScriptStruct FWeaponFeatures
static_assert(std::is_polymorphic<FWeaponFeatures>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWeaponFeatures cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponFeatures;
class UScriptStruct* FWeaponFeatures::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponFeatures.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponFeatures.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponFeatures, (UObject*)Z_Construct_UPackage__Script_WarIndustry(), TEXT("WeaponFeatures"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponFeatures.OuterSingleton;
}
template<> WARINDUSTRY_API UScriptStruct* StaticStruct<FWeaponFeatures>()
{
	return FWeaponFeatures::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWeaponFeatures_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeatureName_MetaData[] = {
		{ "Category", "WeaponFeatures" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSpecialAbility_MetaData[] = {
		{ "Category", "WeaponFeatures" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponCategory_MetaData[] = {
		{ "Category", "WeaponFeatures" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThisIndexsGoodToBeHigher_MetaData[] = {
		{ "Category", "WeaponFeatures" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThisIndexsGoodToBeLower_MetaData[] = {
		{ "Category", "WeaponFeatures" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompatibleWeaponTypes_MetaData[] = {
		{ "Category", "WeaponFeatures" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrongAgainstCategories_MetaData[] = {
		{ "Category", "WeaponFeatures" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrongAgainstLocation_MetaData[] = {
		{ "Category", "WeaponFeatures" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrongAgainstTime_MetaData[] = {
		{ "Category", "WeaponFeatures" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FeatureName;
	static void NewProp_IsSpecialAbility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSpecialAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponCategory;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThisIndexsGoodToBeHigher_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ThisIndexsGoodToBeHigher;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThisIndexsGoodToBeLower_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ThisIndexsGoodToBeLower;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CompatibleWeaponTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CompatibleWeaponTypes;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StrongAgainstCategories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StrongAgainstCategories;
	static void NewProp_StrongAgainstLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StrongAgainstLocation;
	static void NewProp_StrongAgainstTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StrongAgainstTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponFeatures>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_FeatureName = { "FeatureName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponFeatures, FeatureName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeatureName_MetaData), NewProp_FeatureName_MetaData) };
void Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_IsSpecialAbility_SetBit(void* Obj)
{
	((FWeaponFeatures*)Obj)->IsSpecialAbility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_IsSpecialAbility = { "IsSpecialAbility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWeaponFeatures), &Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_IsSpecialAbility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSpecialAbility_MetaData), NewProp_IsSpecialAbility_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_WeaponCategory = { "WeaponCategory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponFeatures, WeaponCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponCategory_MetaData), NewProp_WeaponCategory_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_ThisIndexsGoodToBeHigher_Inner = { "ThisIndexsGoodToBeHigher", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_ThisIndexsGoodToBeHigher = { "ThisIndexsGoodToBeHigher", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponFeatures, ThisIndexsGoodToBeHigher), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThisIndexsGoodToBeHigher_MetaData), NewProp_ThisIndexsGoodToBeHigher_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_ThisIndexsGoodToBeLower_Inner = { "ThisIndexsGoodToBeLower", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_ThisIndexsGoodToBeLower = { "ThisIndexsGoodToBeLower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponFeatures, ThisIndexsGoodToBeLower), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThisIndexsGoodToBeLower_MetaData), NewProp_ThisIndexsGoodToBeLower_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_CompatibleWeaponTypes_Inner = { "CompatibleWeaponTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_CompatibleWeaponTypes = { "CompatibleWeaponTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponFeatures, CompatibleWeaponTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompatibleWeaponTypes_MetaData), NewProp_CompatibleWeaponTypes_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_StrongAgainstCategories_Inner = { "StrongAgainstCategories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_StrongAgainstCategories = { "StrongAgainstCategories", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponFeatures, StrongAgainstCategories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrongAgainstCategories_MetaData), NewProp_StrongAgainstCategories_MetaData) };
void Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_StrongAgainstLocation_SetBit(void* Obj)
{
	((FWeaponFeatures*)Obj)->StrongAgainstLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_StrongAgainstLocation = { "StrongAgainstLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWeaponFeatures), &Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_StrongAgainstLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrongAgainstLocation_MetaData), NewProp_StrongAgainstLocation_MetaData) };
void Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_StrongAgainstTime_SetBit(void* Obj)
{
	((FWeaponFeatures*)Obj)->StrongAgainstTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_StrongAgainstTime = { "StrongAgainstTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWeaponFeatures), &Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_StrongAgainstTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrongAgainstTime_MetaData), NewProp_StrongAgainstTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponFeatures_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_FeatureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_IsSpecialAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_WeaponCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_ThisIndexsGoodToBeHigher_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_ThisIndexsGoodToBeHigher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_ThisIndexsGoodToBeLower_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_ThisIndexsGoodToBeLower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_CompatibleWeaponTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_CompatibleWeaponTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_StrongAgainstCategories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_StrongAgainstCategories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_StrongAgainstLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewProp_StrongAgainstTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponFeatures_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponFeatures_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WarIndustry,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"WeaponFeatures",
	Z_Construct_UScriptStruct_FWeaponFeatures_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponFeatures_Statics::PropPointers),
	sizeof(FWeaponFeatures),
	alignof(FWeaponFeatures),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponFeatures_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponFeatures_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponFeatures()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponFeatures.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponFeatures.InnerSingleton, Z_Construct_UScriptStruct_FWeaponFeatures_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WeaponFeatures.InnerSingleton;
}
// End ScriptStruct FWeaponFeatures

// Begin ScriptStruct FCountryWeaponsStartData
static_assert(std::is_polymorphic<FCountryWeaponsStartData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCountryWeaponsStartData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CountryWeaponsStartData;
class UScriptStruct* FCountryWeaponsStartData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CountryWeaponsStartData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CountryWeaponsStartData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCountryWeaponsStartData, (UObject*)Z_Construct_UPackage__Script_WarIndustry(), TEXT("CountryWeaponsStartData"));
	}
	return Z_Registration_Info_UScriptStruct_CountryWeaponsStartData.OuterSingleton;
}
template<> WARINDUSTRY_API UScriptStruct* StaticStruct<FCountryWeaponsStartData>()
{
	return FCountryWeaponsStartData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCountryWeaponsStartData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountryName_MetaData[] = {
		{ "Category", "CountryWeaponsStartData" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountryWeaponCountsGoal_MetaData[] = {
		{ "Category", "CountryWeaponsStartData" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountryWeaponOverallsGoal_MetaData[] = {
		{ "Category", "CountryWeaponsStartData" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CountryName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CountryWeaponCountsGoal_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CountryWeaponCountsGoal;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CountryWeaponOverallsGoal_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CountryWeaponOverallsGoal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCountryWeaponsStartData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCountryWeaponsStartData_Statics::NewProp_CountryName = { "CountryName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCountryWeaponsStartData, CountryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountryName_MetaData), NewProp_CountryName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCountryWeaponsStartData_Statics::NewProp_CountryWeaponCountsGoal_Inner = { "CountryWeaponCountsGoal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCountryWeaponsStartData_Statics::NewProp_CountryWeaponCountsGoal = { "CountryWeaponCountsGoal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCountryWeaponsStartData, CountryWeaponCountsGoal), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountryWeaponCountsGoal_MetaData), NewProp_CountryWeaponCountsGoal_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCountryWeaponsStartData_Statics::NewProp_CountryWeaponOverallsGoal_Inner = { "CountryWeaponOverallsGoal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCountryWeaponsStartData_Statics::NewProp_CountryWeaponOverallsGoal = { "CountryWeaponOverallsGoal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCountryWeaponsStartData, CountryWeaponOverallsGoal), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountryWeaponOverallsGoal_MetaData), NewProp_CountryWeaponOverallsGoal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCountryWeaponsStartData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountryWeaponsStartData_Statics::NewProp_CountryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountryWeaponsStartData_Statics::NewProp_CountryWeaponCountsGoal_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountryWeaponsStartData_Statics::NewProp_CountryWeaponCountsGoal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountryWeaponsStartData_Statics::NewProp_CountryWeaponOverallsGoal_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountryWeaponsStartData_Statics::NewProp_CountryWeaponOverallsGoal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCountryWeaponsStartData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCountryWeaponsStartData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WarIndustry,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CountryWeaponsStartData",
	Z_Construct_UScriptStruct_FCountryWeaponsStartData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCountryWeaponsStartData_Statics::PropPointers),
	sizeof(FCountryWeaponsStartData),
	alignof(FCountryWeaponsStartData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCountryWeaponsStartData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCountryWeaponsStartData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCountryWeaponsStartData()
{
	if (!Z_Registration_Info_UScriptStruct_CountryWeaponsStartData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CountryWeaponsStartData.InnerSingleton, Z_Construct_UScriptStruct_FCountryWeaponsStartData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CountryWeaponsStartData.InnerSingleton;
}
// End ScriptStruct FCountryWeaponsStartData

// Begin Class UAllStructs
void UAllStructs::StaticRegisterNativesUAllStructs()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAllStructs);
UClass* Z_Construct_UClass_UAllStructs_NoRegister()
{
	return UAllStructs::StaticClass();
}
struct Z_Construct_UClass_UAllStructs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AllStructs.h" },
		{ "ModuleRelativePath", "Public/AllStructs.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAllStructs>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAllStructs_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WarIndustry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAllStructs_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAllStructs_Statics::ClassParams = {
	&UAllStructs::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAllStructs_Statics::Class_MetaDataParams), Z_Construct_UClass_UAllStructs_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAllStructs()
{
	if (!Z_Registration_Info_UClass_UAllStructs.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAllStructs.OuterSingleton, Z_Construct_UClass_UAllStructs_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAllStructs.OuterSingleton;
}
template<> WARINDUSTRY_API UClass* StaticClass<UAllStructs>()
{
	return UAllStructs::StaticClass();
}
UAllStructs::UAllStructs(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAllStructs);
UAllStructs::~UAllStructs() {}
// End Class UAllStructs

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AllStructs_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWeaponCategory_StaticEnum, TEXT("EWeaponCategory"), &Z_Registration_Info_UEnum_EWeaponCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4285974581U) },
		{ EWeaponType_StaticEnum, TEXT("EWeaponType"), &Z_Registration_Info_UEnum_EWeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2690430185U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGeneralDatas::StaticStruct, Z_Construct_UScriptStruct_FGeneralDatas_Statics::NewStructOps, TEXT("GeneralDatas"), &Z_Registration_Info_UScriptStruct_GeneralDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeneralDatas), 3939461807U) },
		{ FLastSlot::StaticStruct, Z_Construct_UScriptStruct_FLastSlot_Statics::NewStructOps, TEXT("LastSlot"), &Z_Registration_Info_UScriptStruct_LastSlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLastSlot), 2546034666U) },
		{ FCountrys::StaticStruct, Z_Construct_UScriptStruct_FCountrys_Statics::NewStructOps, TEXT("Countrys"), &Z_Registration_Info_UScriptStruct_Countrys, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCountrys), 4030937518U) },
		{ FFactorys::StaticStruct, Z_Construct_UScriptStruct_FFactorys_Statics::NewStructOps, TEXT("Factorys"), &Z_Registration_Info_UScriptStruct_Factorys, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFactorys), 499567656U) },
		{ FMyFactorys::StaticStruct, Z_Construct_UScriptStruct_FMyFactorys_Statics::NewStructOps, TEXT("MyFactorys"), &Z_Registration_Info_UScriptStruct_MyFactorys, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMyFactorys), 827706395U) },
		{ FResearchItems::StaticStruct, Z_Construct_UScriptStruct_FResearchItems_Statics::NewStructOps, TEXT("ResearchItems"), &Z_Registration_Info_UScriptStruct_ResearchItems, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FResearchItems), 1047416769U) },
		{ FContracts::StaticStruct, Z_Construct_UScriptStruct_FContracts_Statics::NewStructOps, TEXT("Contracts"), &Z_Registration_Info_UScriptStruct_Contracts, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContracts), 2041926957U) },
		{ FRebellion::StaticStruct, Z_Construct_UScriptStruct_FRebellion_Statics::NewStructOps, TEXT("Rebellion"), &Z_Registration_Info_UScriptStruct_Rebellion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRebellion), 4286398604U) },
		{ FCurrentWars::StaticStruct, Z_Construct_UScriptStruct_FCurrentWars_Statics::NewStructOps, TEXT("CurrentWars"), &Z_Registration_Info_UScriptStruct_CurrentWars, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurrentWars), 849588056U) },
		{ FNews::StaticStruct, Z_Construct_UScriptStruct_FNews_Statics::NewStructOps, TEXT("News"), &Z_Registration_Info_UScriptStruct_News, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNews), 3825443321U) },
		{ FDesignedProductsProduction::StaticStruct, Z_Construct_UScriptStruct_FDesignedProductsProduction_Statics::NewStructOps, TEXT("DesignedProductsProduction"), &Z_Registration_Info_UScriptStruct_DesignedProductsProduction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDesignedProductsProduction), 3789060387U) },
		{ FNewDesignedProductsStruct::StaticStruct, Z_Construct_UScriptStruct_FNewDesignedProductsStruct_Statics::NewStructOps, TEXT("NewDesignedProductsStruct"), &Z_Registration_Info_UScriptStruct_NewDesignedProductsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNewDesignedProductsStruct), 4217424401U) },
		{ FWeaponFeatures::StaticStruct, Z_Construct_UScriptStruct_FWeaponFeatures_Statics::NewStructOps, TEXT("WeaponFeatures"), &Z_Registration_Info_UScriptStruct_WeaponFeatures, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponFeatures), 2535297194U) },
		{ FCountryWeaponsStartData::StaticStruct, Z_Construct_UScriptStruct_FCountryWeaponsStartData_Statics::NewStructOps, TEXT("CountryWeaponsStartData"), &Z_Registration_Info_UScriptStruct_CountryWeaponsStartData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCountryWeaponsStartData), 1481782853U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAllStructs, UAllStructs::StaticClass, TEXT("UAllStructs"), &Z_Registration_Info_UClass_UAllStructs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAllStructs), 2848953886U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AllStructs_h_1706143863(TEXT("/Script/WarIndustry"),
	Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AllStructs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AllStructs_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AllStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AllStructs_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AllStructs_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AllStructs_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
