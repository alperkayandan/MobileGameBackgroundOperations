// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WarIndustry/Public/BackgroundLogicOperations.h"
#include "WarIndustry/Public/AllStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackgroundLogicOperations() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
UPackage* Z_Construct_UPackage__Script_WarIndustry();
WARINDUSTRY_API UClass* Z_Construct_UClass_UBackgroundLogicOperations();
WARINDUSTRY_API UClass* Z_Construct_UClass_UBackgroundLogicOperations_NoRegister();
WARINDUSTRY_API UFunction* Z_Construct_UDelegateFunction_WarIndustry_DesignContractOffer__DelegateSignature();
WARINDUSTRY_API UFunction* Z_Construct_UDelegateFunction_WarIndustry_SellContractOffer__DelegateSignature();
WARINDUSTRY_API UFunction* Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FFactorys();
// End Cross Module References

// Begin Delegate FSellContractOffer
struct Z_Construct_UDelegateFunction_WarIndustry_SellContractOffer__DelegateSignature_Statics
{
	struct _Script_WarIndustry_eventSellContractOffer_Parms
	{
		float Progress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BackgroundLogicOperations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_WarIndustry_SellContractOffer__DelegateSignature_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WarIndustry_eventSellContractOffer_Parms, Progress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WarIndustry_SellContractOffer__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WarIndustry_SellContractOffer__DelegateSignature_Statics::NewProp_Progress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WarIndustry_SellContractOffer__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WarIndustry_SellContractOffer__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WarIndustry, nullptr, "SellContractOffer__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WarIndustry_SellContractOffer__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WarIndustry_SellContractOffer__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WarIndustry_SellContractOffer__DelegateSignature_Statics::_Script_WarIndustry_eventSellContractOffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WarIndustry_SellContractOffer__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WarIndustry_SellContractOffer__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_WarIndustry_SellContractOffer__DelegateSignature_Statics::_Script_WarIndustry_eventSellContractOffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WarIndustry_SellContractOffer__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WarIndustry_SellContractOffer__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSellContractOffer_DelegateWrapper(const FMulticastScriptDelegate& SellContractOffer, float Progress)
{
	struct _Script_WarIndustry_eventSellContractOffer_Parms
	{
		float Progress;
	};
	_Script_WarIndustry_eventSellContractOffer_Parms Parms;
	Parms.Progress=Progress;
	SellContractOffer.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FSellContractOffer

// Begin Delegate FDesignContractOffer
struct Z_Construct_UDelegateFunction_WarIndustry_DesignContractOffer__DelegateSignature_Statics
{
	struct _Script_WarIndustry_eventDesignContractOffer_Parms
	{
		float Progress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BackgroundLogicOperations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_WarIndustry_DesignContractOffer__DelegateSignature_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WarIndustry_eventDesignContractOffer_Parms, Progress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WarIndustry_DesignContractOffer__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WarIndustry_DesignContractOffer__DelegateSignature_Statics::NewProp_Progress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WarIndustry_DesignContractOffer__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WarIndustry_DesignContractOffer__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WarIndustry, nullptr, "DesignContractOffer__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WarIndustry_DesignContractOffer__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WarIndustry_DesignContractOffer__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WarIndustry_DesignContractOffer__DelegateSignature_Statics::_Script_WarIndustry_eventDesignContractOffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WarIndustry_DesignContractOffer__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WarIndustry_DesignContractOffer__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_WarIndustry_DesignContractOffer__DelegateSignature_Statics::_Script_WarIndustry_eventDesignContractOffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WarIndustry_DesignContractOffer__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WarIndustry_DesignContractOffer__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDesignContractOffer_DelegateWrapper(const FMulticastScriptDelegate& DesignContractOffer, float Progress)
{
	struct _Script_WarIndustry_eventDesignContractOffer_Parms
	{
		float Progress;
	};
	_Script_WarIndustry_eventDesignContractOffer_Parms Parms;
	Parms.Progress=Progress;
	DesignContractOffer.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDesignContractOffer

// Begin Delegate FTenderOffer
struct Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature_Statics
{
	struct _Script_WarIndustry_eventTenderOffer_Parms
	{
		FName RequestedWeaponCategory;
		TArray<FString> RequestedWeaponFeatures;
		FString RequestedCountryName;
		int32 RequestedWeaponCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BackgroundLogicOperations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_RequestedWeaponCategory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequestedWeaponFeatures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RequestedWeaponFeatures;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequestedCountryName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequestedWeaponCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature_Statics::NewProp_RequestedWeaponCategory = { "RequestedWeaponCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WarIndustry_eventTenderOffer_Parms, RequestedWeaponCategory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature_Statics::NewProp_RequestedWeaponFeatures_Inner = { "RequestedWeaponFeatures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature_Statics::NewProp_RequestedWeaponFeatures = { "RequestedWeaponFeatures", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WarIndustry_eventTenderOffer_Parms, RequestedWeaponFeatures), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature_Statics::NewProp_RequestedCountryName = { "RequestedCountryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WarIndustry_eventTenderOffer_Parms, RequestedCountryName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature_Statics::NewProp_RequestedWeaponCount = { "RequestedWeaponCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WarIndustry_eventTenderOffer_Parms, RequestedWeaponCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature_Statics::NewProp_RequestedWeaponCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature_Statics::NewProp_RequestedWeaponFeatures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature_Statics::NewProp_RequestedWeaponFeatures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature_Statics::NewProp_RequestedCountryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature_Statics::NewProp_RequestedWeaponCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WarIndustry, nullptr, "TenderOffer__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature_Statics::_Script_WarIndustry_eventTenderOffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature_Statics::_Script_WarIndustry_eventTenderOffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FTenderOffer_DelegateWrapper(const FMulticastScriptDelegate& TenderOffer, FName RequestedWeaponCategory, const TArray<FString>& RequestedWeaponFeatures, const FString& RequestedCountryName, int32 RequestedWeaponCount)
{
	struct _Script_WarIndustry_eventTenderOffer_Parms
	{
		FName RequestedWeaponCategory;
		TArray<FString> RequestedWeaponFeatures;
		FString RequestedCountryName;
		int32 RequestedWeaponCount;
	};
	_Script_WarIndustry_eventTenderOffer_Parms Parms;
	Parms.RequestedWeaponCategory=RequestedWeaponCategory;
	Parms.RequestedWeaponFeatures=RequestedWeaponFeatures;
	Parms.RequestedCountryName=RequestedCountryName;
	Parms.RequestedWeaponCount=RequestedWeaponCount;
	TenderOffer.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FTenderOffer

// Begin Class UBackgroundLogicOperations Function CheckCountryBordersForOffer
struct Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics
{
	struct BackgroundLogicOperations_eventCheckCountryBordersForOffer_Parms
	{
		UObject* WorldContextObject;
		UDataTable* AllFeaturesDataTable;
		bool IsTenderOffer;
		bool SellContractOffer;
		bool DesignContractOffer;
		FString RequestedCountryName;
		FName RequestedWeaponCategory;
		TArray<FString> RequestedWeaponFeatures;
		int32 RequestedWeaponCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AsyncBackgroundLogic" },
		{ "ModuleRelativePath", "Public/BackgroundLogicOperations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllFeaturesDataTable;
	static void NewProp_IsTenderOffer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTenderOffer;
	static void NewProp_SellContractOffer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SellContractOffer;
	static void NewProp_DesignContractOffer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DesignContractOffer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequestedCountryName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RequestedWeaponCategory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequestedWeaponFeatures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RequestedWeaponFeatures;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequestedWeaponCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundLogicOperations_eventCheckCountryBordersForOffer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_AllFeaturesDataTable = { "AllFeaturesDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundLogicOperations_eventCheckCountryBordersForOffer_Parms, AllFeaturesDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_IsTenderOffer_SetBit(void* Obj)
{
	((BackgroundLogicOperations_eventCheckCountryBordersForOffer_Parms*)Obj)->IsTenderOffer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_IsTenderOffer = { "IsTenderOffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BackgroundLogicOperations_eventCheckCountryBordersForOffer_Parms), &Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_IsTenderOffer_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_SellContractOffer_SetBit(void* Obj)
{
	((BackgroundLogicOperations_eventCheckCountryBordersForOffer_Parms*)Obj)->SellContractOffer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_SellContractOffer = { "SellContractOffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BackgroundLogicOperations_eventCheckCountryBordersForOffer_Parms), &Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_SellContractOffer_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_DesignContractOffer_SetBit(void* Obj)
{
	((BackgroundLogicOperations_eventCheckCountryBordersForOffer_Parms*)Obj)->DesignContractOffer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_DesignContractOffer = { "DesignContractOffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BackgroundLogicOperations_eventCheckCountryBordersForOffer_Parms), &Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_DesignContractOffer_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_RequestedCountryName = { "RequestedCountryName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundLogicOperations_eventCheckCountryBordersForOffer_Parms, RequestedCountryName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_RequestedWeaponCategory = { "RequestedWeaponCategory", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundLogicOperations_eventCheckCountryBordersForOffer_Parms, RequestedWeaponCategory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_RequestedWeaponFeatures_Inner = { "RequestedWeaponFeatures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_RequestedWeaponFeatures = { "RequestedWeaponFeatures", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundLogicOperations_eventCheckCountryBordersForOffer_Parms, RequestedWeaponFeatures), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_RequestedWeaponCount = { "RequestedWeaponCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundLogicOperations_eventCheckCountryBordersForOffer_Parms, RequestedWeaponCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_AllFeaturesDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_IsTenderOffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_SellContractOffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_DesignContractOffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_RequestedCountryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_RequestedWeaponCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_RequestedWeaponFeatures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_RequestedWeaponFeatures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_RequestedWeaponCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundLogicOperations, nullptr, "CheckCountryBordersForOffer", nullptr, nullptr, Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::BackgroundLogicOperations_eventCheckCountryBordersForOffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::BackgroundLogicOperations_eventCheckCountryBordersForOffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundLogicOperations::execCheckCountryBordersForOffer)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UDataTable,Z_Param_AllFeaturesDataTable);
	P_GET_UBOOL_REF(Z_Param_Out_IsTenderOffer);
	P_GET_UBOOL_REF(Z_Param_Out_SellContractOffer);
	P_GET_UBOOL_REF(Z_Param_Out_DesignContractOffer);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_RequestedCountryName);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RequestedWeaponCategory);
	P_GET_TARRAY_REF(FString,Z_Param_Out_RequestedWeaponFeatures);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_RequestedWeaponCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckCountryBordersForOffer(Z_Param_WorldContextObject,Z_Param_AllFeaturesDataTable,Z_Param_Out_IsTenderOffer,Z_Param_Out_SellContractOffer,Z_Param_Out_DesignContractOffer,Z_Param_Out_RequestedCountryName,Z_Param_Out_RequestedWeaponCategory,Z_Param_Out_RequestedWeaponFeatures,Z_Param_Out_RequestedWeaponCount);
	P_NATIVE_END;
}
// End Class UBackgroundLogicOperations Function CheckCountryBordersForOffer

// Begin Class UBackgroundLogicOperations Function CreateAsyncBackgroundLogicOperations
struct Z_Construct_UFunction_UBackgroundLogicOperations_CreateAsyncBackgroundLogicOperations_Statics
{
	struct BackgroundLogicOperations_eventCreateAsyncBackgroundLogicOperations_Parms
	{
		UBackgroundLogicOperations* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AsyncBackgroundLogic" },
		{ "ModuleRelativePath", "Public/BackgroundLogicOperations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackgroundLogicOperations_CreateAsyncBackgroundLogicOperations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundLogicOperations_eventCreateAsyncBackgroundLogicOperations_Parms, ReturnValue), Z_Construct_UClass_UBackgroundLogicOperations_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundLogicOperations_CreateAsyncBackgroundLogicOperations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundLogicOperations_CreateAsyncBackgroundLogicOperations_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundLogicOperations_CreateAsyncBackgroundLogicOperations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundLogicOperations_CreateAsyncBackgroundLogicOperations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundLogicOperations, nullptr, "CreateAsyncBackgroundLogicOperations", nullptr, nullptr, Z_Construct_UFunction_UBackgroundLogicOperations_CreateAsyncBackgroundLogicOperations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundLogicOperations_CreateAsyncBackgroundLogicOperations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackgroundLogicOperations_CreateAsyncBackgroundLogicOperations_Statics::BackgroundLogicOperations_eventCreateAsyncBackgroundLogicOperations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundLogicOperations_CreateAsyncBackgroundLogicOperations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundLogicOperations_CreateAsyncBackgroundLogicOperations_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundLogicOperations_CreateAsyncBackgroundLogicOperations_Statics::BackgroundLogicOperations_eventCreateAsyncBackgroundLogicOperations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundLogicOperations_CreateAsyncBackgroundLogicOperations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundLogicOperations_CreateAsyncBackgroundLogicOperations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundLogicOperations::execCreateAsyncBackgroundLogicOperations)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBackgroundLogicOperations**)Z_Param__Result=UBackgroundLogicOperations::CreateAsyncBackgroundLogicOperations();
	P_NATIVE_END;
}
// End Class UBackgroundLogicOperations Function CreateAsyncBackgroundLogicOperations

// Begin Class UBackgroundLogicOperations Function DistributeProducedWeapons
struct Z_Construct_UFunction_UBackgroundLogicOperations_DistributeProducedWeapons_Statics
{
	struct BackgroundLogicOperations_eventDistributeProducedWeapons_Parms
	{
		UObject* WorldContextObject;
		TArray<FFactorys> GlobalFactorysData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AsyncBackgroundLogic" },
		{ "ModuleRelativePath", "Public/BackgroundLogicOperations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalFactorysData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GlobalFactorysData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackgroundLogicOperations_DistributeProducedWeapons_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundLogicOperations_eventDistributeProducedWeapons_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBackgroundLogicOperations_DistributeProducedWeapons_Statics::NewProp_GlobalFactorysData_Inner = { "GlobalFactorysData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFactorys, METADATA_PARAMS(0, nullptr) }; // 499567656
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBackgroundLogicOperations_DistributeProducedWeapons_Statics::NewProp_GlobalFactorysData = { "GlobalFactorysData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundLogicOperations_eventDistributeProducedWeapons_Parms, GlobalFactorysData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 499567656
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundLogicOperations_DistributeProducedWeapons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundLogicOperations_DistributeProducedWeapons_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundLogicOperations_DistributeProducedWeapons_Statics::NewProp_GlobalFactorysData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundLogicOperations_DistributeProducedWeapons_Statics::NewProp_GlobalFactorysData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundLogicOperations_DistributeProducedWeapons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundLogicOperations_DistributeProducedWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundLogicOperations, nullptr, "DistributeProducedWeapons", nullptr, nullptr, Z_Construct_UFunction_UBackgroundLogicOperations_DistributeProducedWeapons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundLogicOperations_DistributeProducedWeapons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackgroundLogicOperations_DistributeProducedWeapons_Statics::BackgroundLogicOperations_eventDistributeProducedWeapons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundLogicOperations_DistributeProducedWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundLogicOperations_DistributeProducedWeapons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundLogicOperations_DistributeProducedWeapons_Statics::BackgroundLogicOperations_eventDistributeProducedWeapons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundLogicOperations_DistributeProducedWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundLogicOperations_DistributeProducedWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundLogicOperations::execDistributeProducedWeapons)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(FFactorys,Z_Param_Out_GlobalFactorysData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DistributeProducedWeapons(Z_Param_WorldContextObject,Z_Param_Out_GlobalFactorysData);
	P_NATIVE_END;
}
// End Class UBackgroundLogicOperations Function DistributeProducedWeapons

// Begin Class UBackgroundLogicOperations Function StartAsyncControlForBackgroundOperations
struct Z_Construct_UFunction_UBackgroundLogicOperations_StartAsyncControlForBackgroundOperations_Statics
{
	struct BackgroundLogicOperations_eventStartAsyncControlForBackgroundOperations_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AsyncBackgroundLogic" },
		{ "ModuleRelativePath", "Public/BackgroundLogicOperations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackgroundLogicOperations_StartAsyncControlForBackgroundOperations_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundLogicOperations_eventStartAsyncControlForBackgroundOperations_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundLogicOperations_StartAsyncControlForBackgroundOperations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundLogicOperations_StartAsyncControlForBackgroundOperations_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundLogicOperations_StartAsyncControlForBackgroundOperations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundLogicOperations_StartAsyncControlForBackgroundOperations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundLogicOperations, nullptr, "StartAsyncControlForBackgroundOperations", nullptr, nullptr, Z_Construct_UFunction_UBackgroundLogicOperations_StartAsyncControlForBackgroundOperations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundLogicOperations_StartAsyncControlForBackgroundOperations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackgroundLogicOperations_StartAsyncControlForBackgroundOperations_Statics::BackgroundLogicOperations_eventStartAsyncControlForBackgroundOperations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundLogicOperations_StartAsyncControlForBackgroundOperations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundLogicOperations_StartAsyncControlForBackgroundOperations_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundLogicOperations_StartAsyncControlForBackgroundOperations_Statics::BackgroundLogicOperations_eventStartAsyncControlForBackgroundOperations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundLogicOperations_StartAsyncControlForBackgroundOperations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundLogicOperations_StartAsyncControlForBackgroundOperations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundLogicOperations::execStartAsyncControlForBackgroundOperations)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAsyncControlForBackgroundOperations(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UBackgroundLogicOperations Function StartAsyncControlForBackgroundOperations

// Begin Class UBackgroundLogicOperations
void UBackgroundLogicOperations::StaticRegisterNativesUBackgroundLogicOperations()
{
	UClass* Class = UBackgroundLogicOperations::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckCountryBordersForOffer", &UBackgroundLogicOperations::execCheckCountryBordersForOffer },
		{ "CreateAsyncBackgroundLogicOperations", &UBackgroundLogicOperations::execCreateAsyncBackgroundLogicOperations },
		{ "DistributeProducedWeapons", &UBackgroundLogicOperations::execDistributeProducedWeapons },
		{ "StartAsyncControlForBackgroundOperations", &UBackgroundLogicOperations::execStartAsyncControlForBackgroundOperations },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBackgroundLogicOperations);
UClass* Z_Construct_UClass_UBackgroundLogicOperations_NoRegister()
{
	return UBackgroundLogicOperations::StaticClass();
}
struct Z_Construct_UClass_UBackgroundLogicOperations_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BackgroundLogicOperations.h" },
		{ "ModuleRelativePath", "Public/BackgroundLogicOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateSellContractPage_MetaData[] = {
		{ "ModuleRelativePath", "Public/BackgroundLogicOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateDesignContractPage_MetaData[] = {
		{ "ModuleRelativePath", "Public/BackgroundLogicOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateTenderPage_MetaData[] = {
		{ "ModuleRelativePath", "Public/BackgroundLogicOperations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CreateSellContractPage;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CreateDesignContractPage;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CreateTenderPage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer, "CheckCountryBordersForOffer" }, // 4203792556
		{ &Z_Construct_UFunction_UBackgroundLogicOperations_CreateAsyncBackgroundLogicOperations, "CreateAsyncBackgroundLogicOperations" }, // 1521723656
		{ &Z_Construct_UFunction_UBackgroundLogicOperations_DistributeProducedWeapons, "DistributeProducedWeapons" }, // 1838244887
		{ &Z_Construct_UFunction_UBackgroundLogicOperations_StartAsyncControlForBackgroundOperations, "StartAsyncControlForBackgroundOperations" }, // 955861803
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackgroundLogicOperations>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBackgroundLogicOperations_Statics::NewProp_CreateSellContractPage = { "CreateSellContractPage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackgroundLogicOperations, CreateSellContractPage), Z_Construct_UDelegateFunction_WarIndustry_SellContractOffer__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateSellContractPage_MetaData), NewProp_CreateSellContractPage_MetaData) }; // 3972016138
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBackgroundLogicOperations_Statics::NewProp_CreateDesignContractPage = { "CreateDesignContractPage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackgroundLogicOperations, CreateDesignContractPage), Z_Construct_UDelegateFunction_WarIndustry_DesignContractOffer__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateDesignContractPage_MetaData), NewProp_CreateDesignContractPage_MetaData) }; // 2965472364
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBackgroundLogicOperations_Statics::NewProp_CreateTenderPage = { "CreateTenderPage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackgroundLogicOperations, CreateTenderPage), Z_Construct_UDelegateFunction_WarIndustry_TenderOffer__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateTenderPage_MetaData), NewProp_CreateTenderPage_MetaData) }; // 3514998680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackgroundLogicOperations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundLogicOperations_Statics::NewProp_CreateSellContractPage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundLogicOperations_Statics::NewProp_CreateDesignContractPage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundLogicOperations_Statics::NewProp_CreateTenderPage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundLogicOperations_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBackgroundLogicOperations_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WarIndustry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundLogicOperations_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackgroundLogicOperations_Statics::ClassParams = {
	&UBackgroundLogicOperations::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBackgroundLogicOperations_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundLogicOperations_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundLogicOperations_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackgroundLogicOperations_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBackgroundLogicOperations()
{
	if (!Z_Registration_Info_UClass_UBackgroundLogicOperations.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackgroundLogicOperations.OuterSingleton, Z_Construct_UClass_UBackgroundLogicOperations_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBackgroundLogicOperations.OuterSingleton;
}
template<> WARINDUSTRY_API UClass* StaticClass<UBackgroundLogicOperations>()
{
	return UBackgroundLogicOperations::StaticClass();
}
UBackgroundLogicOperations::UBackgroundLogicOperations(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBackgroundLogicOperations);
UBackgroundLogicOperations::~UBackgroundLogicOperations() {}
// End Class UBackgroundLogicOperations

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_BackgroundLogicOperations_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBackgroundLogicOperations, UBackgroundLogicOperations::StaticClass, TEXT("UBackgroundLogicOperations"), &Z_Registration_Info_UClass_UBackgroundLogicOperations, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackgroundLogicOperations), 943292637U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_BackgroundLogicOperations_h_2023516036(TEXT("/Script/WarIndustry"),
	Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_BackgroundLogicOperations_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_BackgroundLogicOperations_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
