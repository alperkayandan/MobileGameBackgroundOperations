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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
UPackage* Z_Construct_UPackage__Script_WarIndustry();
WARINDUSTRY_API UClass* Z_Construct_UClass_UHelperCalculationFunctions();
WARINDUSTRY_API UClass* Z_Construct_UClass_UHelperCalculationFunctions_NoRegister();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FCountrys();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FNewDesignedProductsStruct();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FRebellion();
// End Cross Module References

// Begin Class UHelperCalculationFunctions Function CalculateDesignWeaponFeatures
struct Z_Construct_UFunction_UHelperCalculationFunctions_CalculateDesignWeaponFeatures_Statics
{
	struct HelperCalculationFunctions_eventCalculateDesignWeaponFeatures_Parms
	{
		UDataTable* AllFeaturesDataTable;
		FNewDesignedProductsStruct DesignedProduct;
		TMap<FString,int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Calculations|WeaponDesign" },
		{ "ModuleRelativePath", "Public/HelperCalculationFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllFeaturesDataTable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DesignedProduct;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CalculateDesignWeaponFeatures_Statics::NewProp_AllFeaturesDataTable = { "AllFeaturesDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventCalculateDesignWeaponFeatures_Parms, AllFeaturesDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CalculateDesignWeaponFeatures_Statics::NewProp_DesignedProduct = { "DesignedProduct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventCalculateDesignWeaponFeatures_Parms, DesignedProduct), Z_Construct_UScriptStruct_FNewDesignedProductsStruct, METADATA_PARAMS(0, nullptr) }; // 4217424401
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CalculateDesignWeaponFeatures_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CalculateDesignWeaponFeatures_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CalculateDesignWeaponFeatures_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventCalculateDesignWeaponFeatures_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelperCalculationFunctions_CalculateDesignWeaponFeatures_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CalculateDesignWeaponFeatures_Statics::NewProp_AllFeaturesDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CalculateDesignWeaponFeatures_Statics::NewProp_DesignedProduct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CalculateDesignWeaponFeatures_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CalculateDesignWeaponFeatures_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CalculateDesignWeaponFeatures_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_CalculateDesignWeaponFeatures_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelperCalculationFunctions_CalculateDesignWeaponFeatures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelperCalculationFunctions, nullptr, "CalculateDesignWeaponFeatures", nullptr, nullptr, Z_Construct_UFunction_UHelperCalculationFunctions_CalculateDesignWeaponFeatures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_CalculateDesignWeaponFeatures_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelperCalculationFunctions_CalculateDesignWeaponFeatures_Statics::HelperCalculationFunctions_eventCalculateDesignWeaponFeatures_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_CalculateDesignWeaponFeatures_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelperCalculationFunctions_CalculateDesignWeaponFeatures_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelperCalculationFunctions_CalculateDesignWeaponFeatures_Statics::HelperCalculationFunctions_eventCalculateDesignWeaponFeatures_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelperCalculationFunctions_CalculateDesignWeaponFeatures()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelperCalculationFunctions_CalculateDesignWeaponFeatures_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelperCalculationFunctions::execCalculateDesignWeaponFeatures)
{
	P_GET_OBJECT(UDataTable,Z_Param_AllFeaturesDataTable);
	P_GET_STRUCT(FNewDesignedProductsStruct,Z_Param_DesignedProduct);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FString,int32>*)Z_Param__Result=UHelperCalculationFunctions::CalculateDesignWeaponFeatures(Z_Param_AllFeaturesDataTable,Z_Param_DesignedProduct);
	P_NATIVE_END;
}
// End Class UHelperCalculationFunctions Function CalculateDesignWeaponFeatures

// Begin Class UHelperCalculationFunctions Function CalculateGameDifficultyByCountries
struct Z_Construct_UFunction_UHelperCalculationFunctions_CalculateGameDifficultyByCountries_Statics
{
	struct HelperCalculationFunctions_eventCalculateGameDifficultyByCountries_Parms
	{
		TMap<FString,float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Calculations" },
		{ "ModuleRelativePath", "Public/HelperCalculationFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CalculateGameDifficultyByCountries_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CalculateGameDifficultyByCountries_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CalculateGameDifficultyByCountries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventCalculateGameDifficultyByCountries_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelperCalculationFunctions_CalculateGameDifficultyByCountries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CalculateGameDifficultyByCountries_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CalculateGameDifficultyByCountries_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CalculateGameDifficultyByCountries_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_CalculateGameDifficultyByCountries_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelperCalculationFunctions_CalculateGameDifficultyByCountries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelperCalculationFunctions, nullptr, "CalculateGameDifficultyByCountries", nullptr, nullptr, Z_Construct_UFunction_UHelperCalculationFunctions_CalculateGameDifficultyByCountries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_CalculateGameDifficultyByCountries_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelperCalculationFunctions_CalculateGameDifficultyByCountries_Statics::HelperCalculationFunctions_eventCalculateGameDifficultyByCountries_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_CalculateGameDifficultyByCountries_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelperCalculationFunctions_CalculateGameDifficultyByCountries_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelperCalculationFunctions_CalculateGameDifficultyByCountries_Statics::HelperCalculationFunctions_eventCalculateGameDifficultyByCountries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelperCalculationFunctions_CalculateGameDifficultyByCountries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelperCalculationFunctions_CalculateGameDifficultyByCountries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelperCalculationFunctions::execCalculateGameDifficultyByCountries)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FString,float>*)Z_Param__Result=UHelperCalculationFunctions::CalculateGameDifficultyByCountries();
	P_NATIVE_END;
}
// End Class UHelperCalculationFunctions Function CalculateGameDifficultyByCountries

// Begin Class UHelperCalculationFunctions Function CalculateWeaponProductionTime
struct Z_Construct_UFunction_UHelperCalculationFunctions_CalculateWeaponProductionTime_Statics
{
	struct HelperCalculationFunctions_eventCalculateWeaponProductionTime_Parms
	{
		FNewDesignedProductsStruct DesignedProduct;
		FTimespan ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Calculations|WeaponDesign" },
		{ "ModuleRelativePath", "Public/HelperCalculationFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DesignedProduct;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CalculateWeaponProductionTime_Statics::NewProp_DesignedProduct = { "DesignedProduct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventCalculateWeaponProductionTime_Parms, DesignedProduct), Z_Construct_UScriptStruct_FNewDesignedProductsStruct, METADATA_PARAMS(0, nullptr) }; // 4217424401
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CalculateWeaponProductionTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventCalculateWeaponProductionTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelperCalculationFunctions_CalculateWeaponProductionTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CalculateWeaponProductionTime_Statics::NewProp_DesignedProduct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CalculateWeaponProductionTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_CalculateWeaponProductionTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelperCalculationFunctions_CalculateWeaponProductionTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelperCalculationFunctions, nullptr, "CalculateWeaponProductionTime", nullptr, nullptr, Z_Construct_UFunction_UHelperCalculationFunctions_CalculateWeaponProductionTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_CalculateWeaponProductionTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelperCalculationFunctions_CalculateWeaponProductionTime_Statics::HelperCalculationFunctions_eventCalculateWeaponProductionTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_CalculateWeaponProductionTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelperCalculationFunctions_CalculateWeaponProductionTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelperCalculationFunctions_CalculateWeaponProductionTime_Statics::HelperCalculationFunctions_eventCalculateWeaponProductionTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelperCalculationFunctions_CalculateWeaponProductionTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelperCalculationFunctions_CalculateWeaponProductionTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelperCalculationFunctions::execCalculateWeaponProductionTime)
{
	P_GET_STRUCT(FNewDesignedProductsStruct,Z_Param_DesignedProduct);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimespan*)Z_Param__Result=UHelperCalculationFunctions::CalculateWeaponProductionTime(Z_Param_DesignedProduct);
	P_NATIVE_END;
}
// End Class UHelperCalculationFunctions Function CalculateWeaponProductionTime

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
		TArray<int32> WeaponNightCompareResults;
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
	static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponNightCompareResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeaponNightCompareResults;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FirstCountryTotalPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_FirstCountryStruct = { "FirstCountryStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventCompareWeaponPowerAndTechnoligies_Parms, FirstCountryStruct), Z_Construct_UScriptStruct_FCountrys, METADATA_PARAMS(0, nullptr) }; // 4030937518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_SecondCountryStruct = { "SecondCountryStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventCompareWeaponPowerAndTechnoligies_Parms, SecondCountryStruct), Z_Construct_UScriptStruct_FCountrys, METADATA_PARAMS(0, nullptr) }; // 4030937518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_Rebellions = { "Rebellions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventCompareWeaponPowerAndTechnoligies_Parms, Rebellions), Z_Construct_UScriptStruct_FRebellion, METADATA_PARAMS(0, nullptr) }; // 842799746
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventCompareWeaponPowerAndTechnoligies_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_WeaponCompareResults_Inner = { "WeaponCompareResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_WeaponCompareResults = { "WeaponCompareResults", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventCompareWeaponPowerAndTechnoligies_Parms, WeaponCompareResults), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_WeaponNightCompareResults_Inner = { "WeaponNightCompareResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_WeaponNightCompareResults = { "WeaponNightCompareResults", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventCompareWeaponPowerAndTechnoligies_Parms, WeaponNightCompareResults), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_FirstCountryTotalPower = { "FirstCountryTotalPower", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventCompareWeaponPowerAndTechnoligies_Parms, FirstCountryTotalPower), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_FirstCountryStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_SecondCountryStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_Rebellions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_WeaponCompareResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_WeaponCompareResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_WeaponNightCompareResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies_Statics::NewProp_WeaponNightCompareResults,
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
	P_GET_TARRAY_REF(int32,Z_Param_Out_WeaponNightCompareResults);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FirstCountryTotalPower);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHelperCalculationFunctions::CompareWeaponPowerAndTechnoligies(Z_Param_FirstCountryStruct,Z_Param_SecondCountryStruct,Z_Param_Rebellions,Z_Param_WorldContextObject,Z_Param_Out_WeaponCompareResults,Z_Param_Out_WeaponNightCompareResults,Z_Param_Out_FirstCountryTotalPower);
	P_NATIVE_END;
}
// End Class UHelperCalculationFunctions Function CompareWeaponPowerAndTechnoligies

// Begin Class UHelperCalculationFunctions Function FindSelectedCountryWeaponNeeds
struct Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics
{
	struct HelperCalculationFunctions_eventFindSelectedCountryWeaponNeeds_Parms
	{
		UObject* WorldContextObject;
		FCountrys FirstCountry;
		FCountrys OpponentCountry;
		FRebellion RebellionsInCountry;
		TMap<FName,int32> WeaponCategoriesAndCountDiff;
		TMap<FName,int32> WeaponTypesAndCountDiff;
		TArray<FName> FirstCountryDoesntHaveTheseWeaponTypes;
		TMap<FString,FName> FirstCountryBadThisWeaponFeatureNameAndCategory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Calculations" },
		{ "ModuleRelativePath", "Public/HelperCalculationFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstCountry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OpponentCountry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RebellionsInCountry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponCategoriesAndCountDiff_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponCategoriesAndCountDiff_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WeaponCategoriesAndCountDiff;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponTypesAndCountDiff_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponTypesAndCountDiff_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WeaponTypesAndCountDiff;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FirstCountryDoesntHaveTheseWeaponTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FirstCountryDoesntHaveTheseWeaponTypes;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FirstCountryBadThisWeaponFeatureNameAndCategory_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FirstCountryBadThisWeaponFeatureNameAndCategory_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FirstCountryBadThisWeaponFeatureNameAndCategory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventFindSelectedCountryWeaponNeeds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_FirstCountry = { "FirstCountry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventFindSelectedCountryWeaponNeeds_Parms, FirstCountry), Z_Construct_UScriptStruct_FCountrys, METADATA_PARAMS(0, nullptr) }; // 4030937518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_OpponentCountry = { "OpponentCountry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventFindSelectedCountryWeaponNeeds_Parms, OpponentCountry), Z_Construct_UScriptStruct_FCountrys, METADATA_PARAMS(0, nullptr) }; // 4030937518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_RebellionsInCountry = { "RebellionsInCountry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventFindSelectedCountryWeaponNeeds_Parms, RebellionsInCountry), Z_Construct_UScriptStruct_FRebellion, METADATA_PARAMS(0, nullptr) }; // 842799746
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_WeaponCategoriesAndCountDiff_ValueProp = { "WeaponCategoriesAndCountDiff", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_WeaponCategoriesAndCountDiff_Key_KeyProp = { "WeaponCategoriesAndCountDiff_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_WeaponCategoriesAndCountDiff = { "WeaponCategoriesAndCountDiff", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventFindSelectedCountryWeaponNeeds_Parms, WeaponCategoriesAndCountDiff), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_WeaponTypesAndCountDiff_ValueProp = { "WeaponTypesAndCountDiff", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_WeaponTypesAndCountDiff_Key_KeyProp = { "WeaponTypesAndCountDiff_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_WeaponTypesAndCountDiff = { "WeaponTypesAndCountDiff", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventFindSelectedCountryWeaponNeeds_Parms, WeaponTypesAndCountDiff), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_FirstCountryDoesntHaveTheseWeaponTypes_Inner = { "FirstCountryDoesntHaveTheseWeaponTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_FirstCountryDoesntHaveTheseWeaponTypes = { "FirstCountryDoesntHaveTheseWeaponTypes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventFindSelectedCountryWeaponNeeds_Parms, FirstCountryDoesntHaveTheseWeaponTypes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_FirstCountryBadThisWeaponFeatureNameAndCategory_ValueProp = { "FirstCountryBadThisWeaponFeatureNameAndCategory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_FirstCountryBadThisWeaponFeatureNameAndCategory_Key_KeyProp = { "FirstCountryBadThisWeaponFeatureNameAndCategory_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_FirstCountryBadThisWeaponFeatureNameAndCategory = { "FirstCountryBadThisWeaponFeatureNameAndCategory", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventFindSelectedCountryWeaponNeeds_Parms, FirstCountryBadThisWeaponFeatureNameAndCategory), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_FirstCountry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_OpponentCountry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_RebellionsInCountry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_WeaponCategoriesAndCountDiff_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_WeaponCategoriesAndCountDiff_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_WeaponCategoriesAndCountDiff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_WeaponTypesAndCountDiff_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_WeaponTypesAndCountDiff_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_WeaponTypesAndCountDiff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_FirstCountryDoesntHaveTheseWeaponTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_FirstCountryDoesntHaveTheseWeaponTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_FirstCountryBadThisWeaponFeatureNameAndCategory_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_FirstCountryBadThisWeaponFeatureNameAndCategory_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::NewProp_FirstCountryBadThisWeaponFeatureNameAndCategory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelperCalculationFunctions, nullptr, "FindSelectedCountryWeaponNeeds", nullptr, nullptr, Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::HelperCalculationFunctions_eventFindSelectedCountryWeaponNeeds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::HelperCalculationFunctions_eventFindSelectedCountryWeaponNeeds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelperCalculationFunctions::execFindSelectedCountryWeaponNeeds)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FCountrys,Z_Param_FirstCountry);
	P_GET_STRUCT(FCountrys,Z_Param_OpponentCountry);
	P_GET_STRUCT(FRebellion,Z_Param_RebellionsInCountry);
	P_GET_TMAP_REF(FName,int32,Z_Param_Out_WeaponCategoriesAndCountDiff);
	P_GET_TMAP_REF(FName,int32,Z_Param_Out_WeaponTypesAndCountDiff);
	P_GET_TARRAY_REF(FName,Z_Param_Out_FirstCountryDoesntHaveTheseWeaponTypes);
	P_GET_TMAP_REF(FString,FName,Z_Param_Out_FirstCountryBadThisWeaponFeatureNameAndCategory);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHelperCalculationFunctions::FindSelectedCountryWeaponNeeds(Z_Param_WorldContextObject,Z_Param_FirstCountry,Z_Param_OpponentCountry,Z_Param_RebellionsInCountry,Z_Param_Out_WeaponCategoriesAndCountDiff,Z_Param_Out_WeaponTypesAndCountDiff,Z_Param_Out_FirstCountryDoesntHaveTheseWeaponTypes,Z_Param_Out_FirstCountryBadThisWeaponFeatureNameAndCategory);
	P_NATIVE_END;
}
// End Class UHelperCalculationFunctions Function FindSelectedCountryWeaponNeeds

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

// Begin Class UHelperCalculationFunctions Function WeaponsCountryRates
struct Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates_Statics
{
	struct HelperCalculationFunctions_eventWeaponsCountryRates_Parms
	{
		UObject* WorldContextObject;
		FCountrys CountryStruct;
		FRebellion RebellionStruct;
		TMap<FString,float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Calculations" },
		{ "ModuleRelativePath", "Public/HelperCalculationFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CountryStruct;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RebellionStruct;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventWeaponsCountryRates_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates_Statics::NewProp_CountryStruct = { "CountryStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventWeaponsCountryRates_Parms, CountryStruct), Z_Construct_UScriptStruct_FCountrys, METADATA_PARAMS(0, nullptr) }; // 4030937518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates_Statics::NewProp_RebellionStruct = { "RebellionStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventWeaponsCountryRates_Parms, RebellionStruct), Z_Construct_UScriptStruct_FRebellion, METADATA_PARAMS(0, nullptr) }; // 842799746
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperCalculationFunctions_eventWeaponsCountryRates_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates_Statics::NewProp_CountryStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates_Statics::NewProp_RebellionStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelperCalculationFunctions, nullptr, "WeaponsCountryRates", nullptr, nullptr, Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates_Statics::HelperCalculationFunctions_eventWeaponsCountryRates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates_Statics::HelperCalculationFunctions_eventWeaponsCountryRates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelperCalculationFunctions::execWeaponsCountryRates)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FCountrys,Z_Param_CountryStruct);
	P_GET_STRUCT(FRebellion,Z_Param_RebellionStruct);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FString,float>*)Z_Param__Result=UHelperCalculationFunctions::WeaponsCountryRates(Z_Param_WorldContextObject,Z_Param_CountryStruct,Z_Param_RebellionStruct);
	P_NATIVE_END;
}
// End Class UHelperCalculationFunctions Function WeaponsCountryRates

// Begin Class UHelperCalculationFunctions
void UHelperCalculationFunctions::StaticRegisterNativesUHelperCalculationFunctions()
{
	UClass* Class = UHelperCalculationFunctions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateDesignWeaponFeatures", &UHelperCalculationFunctions::execCalculateDesignWeaponFeatures },
		{ "CalculateGameDifficultyByCountries", &UHelperCalculationFunctions::execCalculateGameDifficultyByCountries },
		{ "CalculateWeaponProductionTime", &UHelperCalculationFunctions::execCalculateWeaponProductionTime },
		{ "CompareWeaponPowerAndTechnoligies", &UHelperCalculationFunctions::execCompareWeaponPowerAndTechnoligies },
		{ "FindSelectedCountryWeaponNeeds", &UHelperCalculationFunctions::execFindSelectedCountryWeaponNeeds },
		{ "SortCompaniesByCompanyValues", &UHelperCalculationFunctions::execSortCompaniesByCompanyValues },
		{ "SortCountriesByPower", &UHelperCalculationFunctions::execSortCountriesByPower },
		{ "WeaponsCountryRates", &UHelperCalculationFunctions::execWeaponsCountryRates },
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
		{ &Z_Construct_UFunction_UHelperCalculationFunctions_CalculateDesignWeaponFeatures, "CalculateDesignWeaponFeatures" }, // 1634834366
		{ &Z_Construct_UFunction_UHelperCalculationFunctions_CalculateGameDifficultyByCountries, "CalculateGameDifficultyByCountries" }, // 3578361905
		{ &Z_Construct_UFunction_UHelperCalculationFunctions_CalculateWeaponProductionTime, "CalculateWeaponProductionTime" }, // 3502352295
		{ &Z_Construct_UFunction_UHelperCalculationFunctions_CompareWeaponPowerAndTechnoligies, "CompareWeaponPowerAndTechnoligies" }, // 1367889741
		{ &Z_Construct_UFunction_UHelperCalculationFunctions_FindSelectedCountryWeaponNeeds, "FindSelectedCountryWeaponNeeds" }, // 2246241521
		{ &Z_Construct_UFunction_UHelperCalculationFunctions_SortCompaniesByCompanyValues, "SortCompaniesByCompanyValues" }, // 1047267460
		{ &Z_Construct_UFunction_UHelperCalculationFunctions_SortCountriesByPower, "SortCountriesByPower" }, // 2184963336
		{ &Z_Construct_UFunction_UHelperCalculationFunctions_WeaponsCountryRates, "WeaponsCountryRates" }, // 2428699414
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
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHelperCalculationFunctions, UHelperCalculationFunctions::StaticClass, TEXT("UHelperCalculationFunctions"), &Z_Registration_Info_UClass_UHelperCalculationFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHelperCalculationFunctions), 3147180506U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_HelperCalculationFunctions_h_2223388786(TEXT("/Script/WarIndustry"),
	Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_HelperCalculationFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_HelperCalculationFunctions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
