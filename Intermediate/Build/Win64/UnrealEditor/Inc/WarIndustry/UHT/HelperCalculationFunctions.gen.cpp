// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WarIndustry/Public/HelperCalculationFunctions.h"
#include "WarIndustry/Public/AllStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHelperCalculationFunctions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_WarIndustry();
WARINDUSTRY_API UClass* Z_Construct_UClass_UHelperCalculationFunctions();
WARINDUSTRY_API UClass* Z_Construct_UClass_UHelperCalculationFunctions_NoRegister();
WARINDUSTRY_API UEnum* Z_Construct_UEnum_WarIndustry_EWeaponCategory();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FCountrys();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FRebellion();
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
		{ "ModuleRelativePath", "Public/HelperCalculationFunctions.h" },
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

// Begin Class UHelperCalculationFunctions Function CompareWeaponPowerAndTechnoligies
struct Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics
{
	struct HelperCalculationFunctions_eventCompareWeaponPowerAndTechnoligies_Parms
	{
		FCountrys FirstCountryStruct;
		FCountrys SecondCountryStruct;
		FRebellion Rebellions;
		UObject* WorldContextObject;
		TArray<int32> WeaponCompareResults;
		int64 FirstCountryTotalPower;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Calculations" },
		{ "ModuleRelativePath", "Public/HelperCalculationFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstCountryStruct;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondCountryStruct;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rebellions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponCompareResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeaponCompareResults;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FirstCountryTotalPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_FirstCountryStruct = { "FirstCountryStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventCompareWeaponPowerAndTechnoligies_Parms, FirstCountryStruct), Z_Construct_UScriptStruct_FCountrys, METADATA_PARAMS(0, nullptr) }; // 4030937518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_SecondCountryStruct = { "SecondCountryStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventCompareWeaponPowerAndTechnoligies_Parms, SecondCountryStruct), Z_Construct_UScriptStruct_FCountrys, METADATA_PARAMS(0, nullptr) }; // 4030937518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_Rebellions = { "Rebellions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventCompareWeaponPowerAndTechnoligies_Parms, Rebellions), Z_Construct_UScriptStruct_FRebellion, METADATA_PARAMS(0, nullptr) }; // 4286398604
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventCompareWeaponPowerAndTechnoligies_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_WeaponCompareResults_Inner = { "WeaponCompareResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_WeaponCompareResults = { "WeaponCompareResults", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventCompareWeaponPowerAndTechnoligies_Parms, WeaponCompareResults), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_FirstCountryTotalPower = { "FirstCountryTotalPower", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventCompareWeaponPowerAndTechnoligies_Parms, FirstCountryTotalPower), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_FirstCountryStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_SecondCountryStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_Rebellions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_WeaponCompareResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_WeaponCompareResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_FirstCountryTotalPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelperCalculationFunctions, nullptr, "CompareWeaponPowerAndTechnoligies", nullptr, nullptr, Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::HelperCalculationFunctions_eventCompareWeaponPowerAndTechnoligies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::HelperCalculationFunctions_eventCompareWeaponPowerAndTechnoligies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelperCalculationFunctions::execCompareWeaponPowerAndTechnoligies)
{
	P_GET_STRUCT(FCountrys,Z_Param_FirstCountryStruct);
	P_GET_STRUCT(FCountrys,Z_Param_SecondCountryStruct);
	P_GET_STRUCT(FRebellion,Z_Param_Rebellions);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(int32,Z_Param_Out_WeaponCompareResults);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FirstCountryTotalPower);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHelperCalculationFunctions::CompareWeaponPowerAndTechnoligies(Z_Param_FirstCountryStruct,Z_Param_SecondCountryStruct,Z_Param_Rebellions,Z_Param_WorldContextObject,Z_Param_Out_WeaponCompareResults,Z_Param_Out_FirstCountryTotalPower);
	P_NATIVE_END;
}
// End Class UHelperCalculationFunctions Function CompareWeaponPowerAndTechnoligies

// Begin Class UHelperCalculationFunctions Function SortCompaniesByCompanyValues
struct Z_Construct_UFunction_UHelperCalculationFunctions_SortCompaniesByCompanyValues_Statics
{
	struct HelperCalculationFunctions_eventSortCompaniesByCompanyValues_Parms
	{
		UObject* WorldContextObject;
		TArray<int32> AllCompanyPlacements;
		int32 MyCompanyPlacement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sortting" },
		{ "ModuleRelativePath", "Public/HelperCalculationFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllCompanyPlacements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllCompanyPlacements;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MyCompanyPlacement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_SortCompaniesByCompanyValues_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventSortCompaniesByCompanyValues_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_SortCompaniesByCompanyValues_Statics::NewProp_AllCompanyPlacements_Inner = { "AllCompanyPlacements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_SortCompaniesByCompanyValues_Statics::NewProp_AllCompanyPlacements = { "AllCompanyPlacements", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventSortCompaniesByCompanyValues_Parms, AllCompanyPlacements), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_SortCompaniesByCompanyValues_Statics::NewProp_MyCompanyPlacement = { "MyCompanyPlacement", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventSortCompaniesByCompanyValues_Parms, MyCompanyPlacement), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelperCalculationFunctions_SortCompaniesByCompanyValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_SortCompaniesByCompanyValues_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_SortCompaniesByCompanyValues_Statics::NewProp_AllCompanyPlacements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_SortCompaniesByCompanyValues_Statics::NewProp_AllCompanyPlacements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_SortCompaniesByCompanyValues_Statics::NewProp_MyCompanyPlacement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_SortCompaniesByCompanyValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelperCalculationFunctions_SortCompaniesByCompanyValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelperCalculationFunctions, nullptr, "SortCompaniesByCompanyValues", nullptr, nullptr, Z_Construct_UFunction_UHelperCalculationFunctions_SortCompaniesByCompanyValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_SortCompaniesByCompanyValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelperCalculationFunctions_SortCompaniesByCompanyValues_Statics::HelperCalculationFunctions_eventSortCompaniesByCompanyValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_SortCompaniesByCompanyValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelperCalculationFunctions_SortCompaniesByCompanyValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelperCalculationFunctions_SortCompaniesByCompanyValues_Statics::HelperCalculationFunctions_eventSortCompaniesByCompanyValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelperCalculationFunctions_SortCompaniesByCompanyValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelperCalculationFunctions_SortCompaniesByCompanyValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelperCalculationFunctions::execSortCompaniesByCompanyValues)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(int32,Z_Param_Out_AllCompanyPlacements);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MyCompanyPlacement);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHelperCalculationFunctions::SortCompaniesByCompanyValues(Z_Param_WorldContextObject,Z_Param_Out_AllCompanyPlacements,Z_Param_Out_MyCompanyPlacement);
	P_NATIVE_END;
}
// End Class UHelperCalculationFunctions Function SortCompaniesByCompanyValues

// Begin Class UHelperCalculationFunctions Function SortCountriesByPower
struct Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower_Statics
{
	struct HelperCalculationFunctions_eventSortCountriesByPower_Parms
	{
		UObject* WorldContextObject;
		TArray<int32> TopTenCountryIndexs;
		int32 MyCountryPlacement;
		int32 MyCountryIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sortting" },
		{ "ModuleRelativePath", "Public/HelperCalculationFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TopTenCountryIndexs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TopTenCountryIndexs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MyCountryPlacement;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MyCountryIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventSortCountriesByPower_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower_Statics::NewProp_TopTenCountryIndexs_Inner = { "TopTenCountryIndexs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower_Statics::NewProp_TopTenCountryIndexs = { "TopTenCountryIndexs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventSortCountriesByPower_Parms, TopTenCountryIndexs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower_Statics::NewProp_MyCountryPlacement = { "MyCountryPlacement", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventSortCountriesByPower_Parms, MyCountryPlacement), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower_Statics::NewProp_MyCountryIndex = { "MyCountryIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventSortCountriesByPower_Parms, MyCountryIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower_Statics::NewProp_TopTenCountryIndexs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower_Statics::NewProp_TopTenCountryIndexs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower_Statics::NewProp_MyCountryPlacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower_Statics::NewProp_MyCountryIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelperCalculationFunctions, nullptr, "SortCountriesByPower", nullptr, nullptr, Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower_Statics::HelperCalculationFunctions_eventSortCountriesByPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower_Statics::HelperCalculationFunctions_eventSortCountriesByPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelperCalculationFunctions::execSortCountriesByPower)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(int32,Z_Param_Out_TopTenCountryIndexs);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MyCountryPlacement);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MyCountryIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHelperCalculationFunctions::SortCountriesByPower(Z_Param_WorldContextObject,Z_Param_Out_TopTenCountryIndexs,Z_Param_Out_MyCountryPlacement,Z_Param_Out_MyCountryIndex);
	P_NATIVE_END;
}
// End Class UHelperCalculationFunctions Function SortCountriesByPower

// Begin Class UHelperCalculationFunctions
void UHelperCalculationFunctions::StaticRegisterNativesUHelperCalculationFunctions()
{
	UClass* Class = UHelperCalculationFunctions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CompareWeaponPowerAndTechnoligies", &UHelperCalculationFunctions::execCompareWeaponPowerAndTechnoligies },
		{ "SortCompaniesByCompanyValues", &UHelperCalculationFunctions::execSortCompaniesByCompanyValues },
		{ "SortCountriesByPower", &UHelperCalculationFunctions::execSortCountriesByPower },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHelperCalculationFunctions);
UClass* Z_Construct_UClass_UHelperCalculationFunctions_NoRegister()
{
	return UHelperCalculationFunctions::StaticClass();
}
struct Z_Construct_UClass_UHelperCalculationFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HelperCalculationFunctions.h" },
		{ "ModuleRelativePath", "Public/HelperCalculationFunctions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies, "CompareWeaponPowerAndTechnoligies" }, // 1880048125
		{ &Z_Construct_UFunction_UHelperCalculationFunctions_SortCompaniesByCompanyValues, "SortCompaniesByCompanyValues" }, // 1047267460
		{ &Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower, "SortCountriesByPower" }, // 2184963336
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHelperCalculationFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHelperCalculationFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_WarIndustry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHelperCalculationFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHelperCalculationFunctions_Statics::ClassParams = {
	&UHelperCalculationFunctions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHelperCalculationFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UHelperCalculationFunctions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHelperCalculationFunctions()
{
	if (!Z_Registration_Info_UClass_UHelperCalculationFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHelperCalculationFunctions.OuterSingleton, Z_Construct_UClass_UHelperCalculationFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHelperCalculationFunctions.OuterSingleton;
}
template<> WARINDUSTRY_API UClass* StaticClass<UHelperCalculationFunctions>()
{
	return UHelperCalculationFunctions::StaticClass();
}
UHelperCalculationFunctions::UHelperCalculationFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHelperCalculationFunctions);
UHelperCalculationFunctions::~UHelperCalculationFunctions() {}
// End Class UHelperCalculationFunctions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_HelperCalculationFunctions_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWeaponCategory_StaticEnum, TEXT("EWeaponCategory"), &Z_Registration_Info_UEnum_EWeaponCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1371502666U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHelperCalculationFunctions, UHelperCalculationFunctions::StaticClass, TEXT("UHelperCalculationFunctions"), &Z_Registration_Info_UClass_UHelperCalculationFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHelperCalculationFunctions), 3823744820U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_HelperCalculationFunctions_h_2004389985(TEXT("/Script/WarIndustry"),
	Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_HelperCalculationFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_HelperCalculationFunctions_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_HelperCalculationFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_HelperCalculationFunctions_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
