// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WarIndustry/Public/AsyncBackgroundOperations.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncBackgroundOperations() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_WarIndustry();
WARINDUSTRY_API UClass* Z_Construct_UClass_UAsyncBackgroundOperations();
WARINDUSTRY_API UClass* Z_Construct_UClass_UAsyncBackgroundOperations_NoRegister();
WARINDUSTRY_API UFunction* Z_Construct_UDelegateFunction_WarIndustry_OnAsyncProgressUpdated__DelegateSignature();
WARINDUSTRY_API UFunction* Z_Construct_UDelegateFunction_WarIndustry_OnRandomWeaponsToCountries__DelegateSignature();
WARINDUSTRY_API UFunction* Z_Construct_UDelegateFunction_WarIndustry_OnWeaponsCreated__DelegateSignature();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons();
// End Cross Module References

// Begin ScriptStruct FCountriesThatCanProduceWeapons
static_assert(std::is_polymorphic<FCountriesThatCanProduceWeapons>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCountriesThatCanProduceWeapons cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CountriesThatCanProduceWeapons;
class UScriptStruct* FCountriesThatCanProduceWeapons::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CountriesThatCanProduceWeapons.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CountriesThatCanProduceWeapons.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons, (UObject*)Z_Construct_UPackage__Script_WarIndustry(), TEXT("CountriesThatCanProduceWeapons"));
	}
	return Z_Registration_Info_UScriptStruct_CountriesThatCanProduceWeapons.OuterSingleton;
}
template<> WARINDUSTRY_API UScriptStruct* StaticStruct<FCountriesThatCanProduceWeapons>()
{
	return FCountriesThatCanProduceWeapons::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AsyncBackgroundOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Country_MetaData[] = {
		{ "Category", "CountriesThatCanProduceWeapons" },
		{ "ModuleRelativePath", "Public/AsyncBackgroundOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponNamesData_MetaData[] = {
		{ "Category", "CountriesThatCanProduceWeapons" },
		{ "ModuleRelativePath", "Public/AsyncBackgroundOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoriesTechRanges_MetaData[] = {
		{ "Category", "CountriesThatCanProduceWeapons" },
		{ "ModuleRelativePath", "Public/AsyncBackgroundOperations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Country;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponNamesData_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WeaponNamesData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WeaponNamesData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CategoriesTechRanges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CategoriesTechRanges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCountriesThatCanProduceWeapons>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics::NewProp_Country = { "Country", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCountriesThatCanProduceWeapons, Country), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Country_MetaData), NewProp_Country_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics::NewProp_WeaponNamesData_ValueProp = { "WeaponNamesData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics::NewProp_WeaponNamesData_Key_KeyProp = { "WeaponNamesData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics::NewProp_WeaponNamesData = { "WeaponNamesData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCountriesThatCanProduceWeapons, WeaponNamesData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponNamesData_MetaData), NewProp_WeaponNamesData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics::NewProp_CategoriesTechRanges_Inner = { "CategoriesTechRanges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics::NewProp_CategoriesTechRanges = { "CategoriesTechRanges", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCountriesThatCanProduceWeapons, CategoriesTechRanges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoriesTechRanges_MetaData), NewProp_CategoriesTechRanges_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics::NewProp_Country,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics::NewProp_WeaponNamesData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics::NewProp_WeaponNamesData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics::NewProp_WeaponNamesData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics::NewProp_CategoriesTechRanges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics::NewProp_CategoriesTechRanges,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WarIndustry,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CountriesThatCanProduceWeapons",
	Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics::PropPointers),
	sizeof(FCountriesThatCanProduceWeapons),
	alignof(FCountriesThatCanProduceWeapons),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons()
{
	if (!Z_Registration_Info_UScriptStruct_CountriesThatCanProduceWeapons.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CountriesThatCanProduceWeapons.InnerSingleton, Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CountriesThatCanProduceWeapons.InnerSingleton;
}
// End ScriptStruct FCountriesThatCanProduceWeapons

// Begin Delegate FOnAsyncProgressUpdated
struct Z_Construct_UDelegateFunction_WarIndustry_OnAsyncProgressUpdated__DelegateSignature_Statics
{
	struct _Script_WarIndustry_eventOnAsyncProgressUpdated_Parms
	{
		float Progress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncBackgroundOperations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_WarIndustry_OnAsyncProgressUpdated__DelegateSignature_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WarIndustry_eventOnAsyncProgressUpdated_Parms, Progress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WarIndustry_OnAsyncProgressUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WarIndustry_OnAsyncProgressUpdated__DelegateSignature_Statics::NewProp_Progress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WarIndustry_OnAsyncProgressUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WarIndustry_OnAsyncProgressUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WarIndustry, nullptr, "OnAsyncProgressUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WarIndustry_OnAsyncProgressUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WarIndustry_OnAsyncProgressUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WarIndustry_OnAsyncProgressUpdated__DelegateSignature_Statics::_Script_WarIndustry_eventOnAsyncProgressUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WarIndustry_OnAsyncProgressUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WarIndustry_OnAsyncProgressUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_WarIndustry_OnAsyncProgressUpdated__DelegateSignature_Statics::_Script_WarIndustry_eventOnAsyncProgressUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WarIndustry_OnAsyncProgressUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WarIndustry_OnAsyncProgressUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAsyncProgressUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnAsyncProgressUpdated, float Progress)
{
	struct _Script_WarIndustry_eventOnAsyncProgressUpdated_Parms
	{
		float Progress;
	};
	_Script_WarIndustry_eventOnAsyncProgressUpdated_Parms Parms;
	Parms.Progress=Progress;
	OnAsyncProgressUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAsyncProgressUpdated

// Begin Delegate FOnWeaponsCreated
struct Z_Construct_UDelegateFunction_WarIndustry_OnWeaponsCreated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncBackgroundOperations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WarIndustry_OnWeaponsCreated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WarIndustry, nullptr, "OnWeaponsCreated__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WarIndustry_OnWeaponsCreated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WarIndustry_OnWeaponsCreated__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_WarIndustry_OnWeaponsCreated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WarIndustry_OnWeaponsCreated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWeaponsCreated_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponsCreated)
{
	OnWeaponsCreated.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnWeaponsCreated

// Begin Delegate FOnRandomWeaponsToCountries
struct Z_Construct_UDelegateFunction_WarIndustry_OnRandomWeaponsToCountries__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncBackgroundOperations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WarIndustry_OnRandomWeaponsToCountries__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WarIndustry, nullptr, "OnRandomWeaponsToCountries__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WarIndustry_OnRandomWeaponsToCountries__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WarIndustry_OnRandomWeaponsToCountries__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_WarIndustry_OnRandomWeaponsToCountries__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WarIndustry_OnRandomWeaponsToCountries__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRandomWeaponsToCountries_DelegateWrapper(const FMulticastScriptDelegate& OnRandomWeaponsToCountries)
{
	OnRandomWeaponsToCountries.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnRandomWeaponsToCountries

// Begin Class UAsyncBackgroundOperations Function CalculateWeaponOverall
struct Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics
{
	struct AsyncBackgroundOperations_eventCalculateWeaponOverall_Parms
	{
		TArray<float> SelectedValues;
		TArray<int32> MaximumValues;
		TArray<int32> MinimumValues;
		TArray<float> WeightMultipliers;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WeaponProperties" },
		{ "ModuleRelativePath", "Public/AsyncBackgroundOperations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SelectedValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedValues;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaximumValues;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MinimumValues;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightMultipliers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightMultipliers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::NewProp_SelectedValues_Inner = { "SelectedValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::NewProp_SelectedValues = { "SelectedValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncBackgroundOperations_eventCalculateWeaponOverall_Parms, SelectedValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::NewProp_MaximumValues_Inner = { "MaximumValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::NewProp_MaximumValues = { "MaximumValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncBackgroundOperations_eventCalculateWeaponOverall_Parms, MaximumValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::NewProp_MinimumValues_Inner = { "MinimumValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::NewProp_MinimumValues = { "MinimumValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncBackgroundOperations_eventCalculateWeaponOverall_Parms, MinimumValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::NewProp_WeightMultipliers_Inner = { "WeightMultipliers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::NewProp_WeightMultipliers = { "WeightMultipliers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncBackgroundOperations_eventCalculateWeaponOverall_Parms, WeightMultipliers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncBackgroundOperations_eventCalculateWeaponOverall_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::NewProp_SelectedValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::NewProp_SelectedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::NewProp_MaximumValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::NewProp_MaximumValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::NewProp_MinimumValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::NewProp_MinimumValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::NewProp_WeightMultipliers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::NewProp_WeightMultipliers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncBackgroundOperations, nullptr, "CalculateWeaponOverall", nullptr, nullptr, Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::AsyncBackgroundOperations_eventCalculateWeaponOverall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::AsyncBackgroundOperations_eventCalculateWeaponOverall_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncBackgroundOperations::execCalculateWeaponOverall)
{
	P_GET_TARRAY(float,Z_Param_SelectedValues);
	P_GET_TARRAY(int32,Z_Param_MaximumValues);
	P_GET_TARRAY(int32,Z_Param_MinimumValues);
	P_GET_TARRAY(float,Z_Param_WeightMultipliers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CalculateWeaponOverall(Z_Param_SelectedValues,Z_Param_MaximumValues,Z_Param_MinimumValues,Z_Param_WeightMultipliers);
	P_NATIVE_END;
}
// End Class UAsyncBackgroundOperations Function CalculateWeaponOverall

// Begin Class UAsyncBackgroundOperations Function CreateAsyncBackgroundOperations
struct Z_Construct_UFunction_UAsyncBackgroundOperations_CreateAsyncBackgroundOperations_Statics
{
	struct AsyncBackgroundOperations_eventCreateAsyncBackgroundOperations_Parms
	{
		UAsyncBackgroundOperations* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async" },
		{ "ModuleRelativePath", "Public/AsyncBackgroundOperations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncBackgroundOperations_CreateAsyncBackgroundOperations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncBackgroundOperations_eventCreateAsyncBackgroundOperations_Parms, ReturnValue), Z_Construct_UClass_UAsyncBackgroundOperations_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncBackgroundOperations_CreateAsyncBackgroundOperations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBackgroundOperations_CreateAsyncBackgroundOperations_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBackgroundOperations_CreateAsyncBackgroundOperations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncBackgroundOperations_CreateAsyncBackgroundOperations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncBackgroundOperations, nullptr, "CreateAsyncBackgroundOperations", nullptr, nullptr, Z_Construct_UFunction_UAsyncBackgroundOperations_CreateAsyncBackgroundOperations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBackgroundOperations_CreateAsyncBackgroundOperations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncBackgroundOperations_CreateAsyncBackgroundOperations_Statics::AsyncBackgroundOperations_eventCreateAsyncBackgroundOperations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBackgroundOperations_CreateAsyncBackgroundOperations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncBackgroundOperations_CreateAsyncBackgroundOperations_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncBackgroundOperations_CreateAsyncBackgroundOperations_Statics::AsyncBackgroundOperations_eventCreateAsyncBackgroundOperations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncBackgroundOperations_CreateAsyncBackgroundOperations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncBackgroundOperations_CreateAsyncBackgroundOperations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncBackgroundOperations::execCreateAsyncBackgroundOperations)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncBackgroundOperations**)Z_Param__Result=UAsyncBackgroundOperations::CreateAsyncBackgroundOperations();
	P_NATIVE_END;
}
// End Class UAsyncBackgroundOperations Function CreateAsyncBackgroundOperations

// Begin Class UAsyncBackgroundOperations Function StartAsyncCreateRandomWeaponsData
struct Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncCreateRandomWeaponsData_Statics
{
	struct AsyncBackgroundOperations_eventStartAsyncCreateRandomWeaponsData_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async" },
		{ "ModuleRelativePath", "Public/AsyncBackgroundOperations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncCreateRandomWeaponsData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncBackgroundOperations_eventStartAsyncCreateRandomWeaponsData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncCreateRandomWeaponsData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncCreateRandomWeaponsData_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncCreateRandomWeaponsData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncCreateRandomWeaponsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncBackgroundOperations, nullptr, "StartAsyncCreateRandomWeaponsData", nullptr, nullptr, Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncCreateRandomWeaponsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncCreateRandomWeaponsData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncCreateRandomWeaponsData_Statics::AsyncBackgroundOperations_eventStartAsyncCreateRandomWeaponsData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncCreateRandomWeaponsData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncCreateRandomWeaponsData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncCreateRandomWeaponsData_Statics::AsyncBackgroundOperations_eventStartAsyncCreateRandomWeaponsData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncCreateRandomWeaponsData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncCreateRandomWeaponsData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncBackgroundOperations::execStartAsyncCreateRandomWeaponsData)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAsyncCreateRandomWeaponsData(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UAsyncBackgroundOperations Function StartAsyncCreateRandomWeaponsData

// Begin Class UAsyncBackgroundOperations Function StartAsyncRandomWeaponsToCountries
struct Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncRandomWeaponsToCountries_Statics
{
	struct AsyncBackgroundOperations_eventStartAsyncRandomWeaponsToCountries_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async" },
		{ "ModuleRelativePath", "Public/AsyncBackgroundOperations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncRandomWeaponsToCountries_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncBackgroundOperations_eventStartAsyncRandomWeaponsToCountries_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncRandomWeaponsToCountries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncRandomWeaponsToCountries_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncRandomWeaponsToCountries_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncRandomWeaponsToCountries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncBackgroundOperations, nullptr, "StartAsyncRandomWeaponsToCountries", nullptr, nullptr, Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncRandomWeaponsToCountries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncRandomWeaponsToCountries_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncRandomWeaponsToCountries_Statics::AsyncBackgroundOperations_eventStartAsyncRandomWeaponsToCountries_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncRandomWeaponsToCountries_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncRandomWeaponsToCountries_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncRandomWeaponsToCountries_Statics::AsyncBackgroundOperations_eventStartAsyncRandomWeaponsToCountries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncRandomWeaponsToCountries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncRandomWeaponsToCountries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncBackgroundOperations::execStartAsyncRandomWeaponsToCountries)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAsyncRandomWeaponsToCountries(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UAsyncBackgroundOperations Function StartAsyncRandomWeaponsToCountries

// Begin Class UAsyncBackgroundOperations Function WeaponsFightingAgainstAndStrengths
struct Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsFightingAgainstAndStrengths_Statics
{
	struct AsyncBackgroundOperations_eventWeaponsFightingAgainstAndStrengths_Parms
	{
		FName WeaponType;
		TMap<FString,int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WeaponProperties" },
		{ "ModuleRelativePath", "Public/AsyncBackgroundOperations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsFightingAgainstAndStrengths_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncBackgroundOperations_eventWeaponsFightingAgainstAndStrengths_Parms, WeaponType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsFightingAgainstAndStrengths_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsFightingAgainstAndStrengths_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsFightingAgainstAndStrengths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncBackgroundOperations_eventWeaponsFightingAgainstAndStrengths_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsFightingAgainstAndStrengths_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsFightingAgainstAndStrengths_Statics::NewProp_WeaponType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsFightingAgainstAndStrengths_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsFightingAgainstAndStrengths_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsFightingAgainstAndStrengths_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsFightingAgainstAndStrengths_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsFightingAgainstAndStrengths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncBackgroundOperations, nullptr, "WeaponsFightingAgainstAndStrengths", nullptr, nullptr, Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsFightingAgainstAndStrengths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsFightingAgainstAndStrengths_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsFightingAgainstAndStrengths_Statics::AsyncBackgroundOperations_eventWeaponsFightingAgainstAndStrengths_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsFightingAgainstAndStrengths_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsFightingAgainstAndStrengths_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsFightingAgainstAndStrengths_Statics::AsyncBackgroundOperations_eventWeaponsFightingAgainstAndStrengths_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsFightingAgainstAndStrengths()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsFightingAgainstAndStrengths_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncBackgroundOperations::execWeaponsFightingAgainstAndStrengths)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_WeaponType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FString,int32>*)Z_Param__Result=P_THIS->WeaponsFightingAgainstAndStrengths(Z_Param_WeaponType);
	P_NATIVE_END;
}
// End Class UAsyncBackgroundOperations Function WeaponsFightingAgainstAndStrengths

// Begin Class UAsyncBackgroundOperations Function WeaponsMaxAndMinValues
struct Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics
{
	struct AsyncBackgroundOperations_eventWeaponsMaxAndMinValues_Parms
	{
		FName WeaponType;
		TArray<int32> MaxValues;
		TArray<int32> MinValues;
		TArray<float> WeightMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WeaponProperties" },
		{ "ModuleRelativePath", "Public/AsyncBackgroundOperations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaxValues;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MinValues;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightMultiplier_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncBackgroundOperations_eventWeaponsMaxAndMinValues_Parms, WeaponType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::NewProp_MaxValues_Inner = { "MaxValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::NewProp_MaxValues = { "MaxValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncBackgroundOperations_eventWeaponsMaxAndMinValues_Parms, MaxValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::NewProp_MinValues_Inner = { "MinValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::NewProp_MinValues = { "MinValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncBackgroundOperations_eventWeaponsMaxAndMinValues_Parms, MinValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::NewProp_WeightMultiplier_Inner = { "WeightMultiplier", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::NewProp_WeightMultiplier = { "WeightMultiplier", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncBackgroundOperations_eventWeaponsMaxAndMinValues_Parms, WeightMultiplier), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::NewProp_WeaponType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::NewProp_MaxValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::NewProp_MaxValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::NewProp_MinValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::NewProp_MinValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::NewProp_WeightMultiplier_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::NewProp_WeightMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncBackgroundOperations, nullptr, "WeaponsMaxAndMinValues", nullptr, nullptr, Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::AsyncBackgroundOperations_eventWeaponsMaxAndMinValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::AsyncBackgroundOperations_eventWeaponsMaxAndMinValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncBackgroundOperations::execWeaponsMaxAndMinValues)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_WeaponType);
	P_GET_TARRAY_REF(int32,Z_Param_Out_MaxValues);
	P_GET_TARRAY_REF(int32,Z_Param_Out_MinValues);
	P_GET_TARRAY_REF(float,Z_Param_Out_WeightMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAsyncBackgroundOperations::WeaponsMaxAndMinValues(Z_Param_WeaponType,Z_Param_Out_MaxValues,Z_Param_Out_MinValues,Z_Param_Out_WeightMultiplier);
	P_NATIVE_END;
}
// End Class UAsyncBackgroundOperations Function WeaponsMaxAndMinValues

// Begin Class UAsyncBackgroundOperations
void UAsyncBackgroundOperations::StaticRegisterNativesUAsyncBackgroundOperations()
{
	UClass* Class = UAsyncBackgroundOperations::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateWeaponOverall", &UAsyncBackgroundOperations::execCalculateWeaponOverall },
		{ "CreateAsyncBackgroundOperations", &UAsyncBackgroundOperations::execCreateAsyncBackgroundOperations },
		{ "StartAsyncCreateRandomWeaponsData", &UAsyncBackgroundOperations::execStartAsyncCreateRandomWeaponsData },
		{ "StartAsyncRandomWeaponsToCountries", &UAsyncBackgroundOperations::execStartAsyncRandomWeaponsToCountries },
		{ "WeaponsFightingAgainstAndStrengths", &UAsyncBackgroundOperations::execWeaponsFightingAgainstAndStrengths },
		{ "WeaponsMaxAndMinValues", &UAsyncBackgroundOperations::execWeaponsMaxAndMinValues },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncBackgroundOperations);
UClass* Z_Construct_UClass_UAsyncBackgroundOperations_NoRegister()
{
	return UAsyncBackgroundOperations::StaticClass();
}
struct Z_Construct_UClass_UAsyncBackgroundOperations_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncBackgroundOperations.h" },
		{ "ModuleRelativePath", "Public/AsyncBackgroundOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataCreateIsFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncBackgroundOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomWeaponsToCountriesIsFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncBackgroundOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnProgressUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncBackgroundOperations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DataCreateIsFinished;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RandomWeaponsToCountriesIsFinished;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgressUpdated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncBackgroundOperations_CalculateWeaponOverall, "CalculateWeaponOverall" }, // 2837997308
		{ &Z_Construct_UFunction_UAsyncBackgroundOperations_CreateAsyncBackgroundOperations, "CreateAsyncBackgroundOperations" }, // 3769314984
		{ &Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncCreateRandomWeaponsData, "StartAsyncCreateRandomWeaponsData" }, // 779304873
		{ &Z_Construct_UFunction_UAsyncBackgroundOperations_StartAsyncRandomWeaponsToCountries, "StartAsyncRandomWeaponsToCountries" }, // 3539264598
		{ &Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsFightingAgainstAndStrengths, "WeaponsFightingAgainstAndStrengths" }, // 2731255196
		{ &Z_Construct_UFunction_UAsyncBackgroundOperations_WeaponsMaxAndMinValues, "WeaponsMaxAndMinValues" }, // 2140668997
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncBackgroundOperations>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncBackgroundOperations_Statics::NewProp_DataCreateIsFinished = { "DataCreateIsFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncBackgroundOperations, DataCreateIsFinished), Z_Construct_UDelegateFunction_WarIndustry_OnWeaponsCreated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataCreateIsFinished_MetaData), NewProp_DataCreateIsFinished_MetaData) }; // 4112389994
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncBackgroundOperations_Statics::NewProp_RandomWeaponsToCountriesIsFinished = { "RandomWeaponsToCountriesIsFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncBackgroundOperations, RandomWeaponsToCountriesIsFinished), Z_Construct_UDelegateFunction_WarIndustry_OnRandomWeaponsToCountries__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomWeaponsToCountriesIsFinished_MetaData), NewProp_RandomWeaponsToCountriesIsFinished_MetaData) }; // 2812210442
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncBackgroundOperations_Statics::NewProp_OnProgressUpdated = { "OnProgressUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncBackgroundOperations, OnProgressUpdated), Z_Construct_UDelegateFunction_WarIndustry_OnAsyncProgressUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnProgressUpdated_MetaData), NewProp_OnProgressUpdated_MetaData) }; // 3583266922
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncBackgroundOperations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncBackgroundOperations_Statics::NewProp_DataCreateIsFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncBackgroundOperations_Statics::NewProp_RandomWeaponsToCountriesIsFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncBackgroundOperations_Statics::NewProp_OnProgressUpdated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncBackgroundOperations_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncBackgroundOperations_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WarIndustry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncBackgroundOperations_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncBackgroundOperations_Statics::ClassParams = {
	&UAsyncBackgroundOperations::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncBackgroundOperations_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncBackgroundOperations_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncBackgroundOperations_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncBackgroundOperations_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncBackgroundOperations()
{
	if (!Z_Registration_Info_UClass_UAsyncBackgroundOperations.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncBackgroundOperations.OuterSingleton, Z_Construct_UClass_UAsyncBackgroundOperations_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncBackgroundOperations.OuterSingleton;
}
template<> WARINDUSTRY_API UClass* StaticClass<UAsyncBackgroundOperations>()
{
	return UAsyncBackgroundOperations::StaticClass();
}
UAsyncBackgroundOperations::UAsyncBackgroundOperations(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncBackgroundOperations);
UAsyncBackgroundOperations::~UAsyncBackgroundOperations() {}
// End Class UAsyncBackgroundOperations

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCountriesThatCanProduceWeapons::StaticStruct, Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics::NewStructOps, TEXT("CountriesThatCanProduceWeapons"), &Z_Registration_Info_UScriptStruct_CountriesThatCanProduceWeapons, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCountriesThatCanProduceWeapons), 115735686U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncBackgroundOperations, UAsyncBackgroundOperations::StaticClass, TEXT("UAsyncBackgroundOperations"), &Z_Registration_Info_UClass_UAsyncBackgroundOperations, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncBackgroundOperations), 1935666342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_3526670139(TEXT("/Script/WarIndustry"),
	Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
