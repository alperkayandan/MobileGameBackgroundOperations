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
WARINDUSTRY_API UFunction* Z_Construct_UDelegateFunction_WarIndustry_Offer__DelegateSignature();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FFactorys();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTenderOfferData();
// End Cross Module References

// Begin ScriptStruct FTenderOfferData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TenderOfferData;
class UScriptStruct* FTenderOfferData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TenderOfferData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TenderOfferData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTenderOfferData, (UObject*)Z_Construct_UPackage__Script_WarIndustry(), TEXT("TenderOfferData"));
	}
	return Z_Registration_Info_UScriptStruct_TenderOfferData.OuterSingleton;
}
template<> WARINDUSTRY_API UScriptStruct* StaticStruct<FTenderOfferData>()
{
	return FTenderOfferData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTenderOfferData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BackgroundLogicOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTenderOffer_MetaData[] = {
		{ "Category", "TenderOfferData" },
		{ "ModuleRelativePath", "Public/BackgroundLogicOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSellContractOffer_MetaData[] = {
		{ "Category", "TenderOfferData" },
		{ "ModuleRelativePath", "Public/BackgroundLogicOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsDesignContractOffer_MetaData[] = {
		{ "Category", "TenderOfferData" },
		{ "ModuleRelativePath", "Public/BackgroundLogicOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestedWeaponCategory_MetaData[] = {
		{ "Category", "TenderOfferData" },
		{ "ModuleRelativePath", "Public/BackgroundLogicOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestedWeaponFeatures_MetaData[] = {
		{ "Category", "TenderOfferData" },
		{ "ModuleRelativePath", "Public/BackgroundLogicOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestedCountryName_MetaData[] = {
		{ "Category", "TenderOfferData" },
		{ "ModuleRelativePath", "Public/BackgroundLogicOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestedWeaponCount_MetaData[] = {
		{ "Category", "TenderOfferData" },
		{ "ModuleRelativePath", "Public/BackgroundLogicOperations.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsTenderOffer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTenderOffer;
	static void NewProp_IsSellContractOffer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSellContractOffer;
	static void NewProp_IsDesignContractOffer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDesignContractOffer;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RequestedWeaponCategory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequestedWeaponFeatures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RequestedWeaponFeatures;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequestedCountryName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequestedWeaponCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTenderOfferData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FTenderOfferData_Statics::NewProp_IsTenderOffer_SetBit(void* Obj)
{
	((FTenderOfferData*)Obj)->IsTenderOffer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTenderOfferData_Statics::NewProp_IsTenderOffer = { "IsTenderOffer", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTenderOfferData), &Z_Construct_UScriptStruct_FTenderOfferData_Statics::NewProp_IsTenderOffer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTenderOffer_MetaData), NewProp_IsTenderOffer_MetaData) };
void Z_Construct_UScriptStruct_FTenderOfferData_Statics::NewProp_IsSellContractOffer_SetBit(void* Obj)
{
	((FTenderOfferData*)Obj)->IsSellContractOffer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTenderOfferData_Statics::NewProp_IsSellContractOffer = { "IsSellContractOffer", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTenderOfferData), &Z_Construct_UScriptStruct_FTenderOfferData_Statics::NewProp_IsSellContractOffer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSellContractOffer_MetaData), NewProp_IsSellContractOffer_MetaData) };
void Z_Construct_UScriptStruct_FTenderOfferData_Statics::NewProp_IsDesignContractOffer_SetBit(void* Obj)
{
	((FTenderOfferData*)Obj)->IsDesignContractOffer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTenderOfferData_Statics::NewProp_IsDesignContractOffer = { "IsDesignContractOffer", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTenderOfferData), &Z_Construct_UScriptStruct_FTenderOfferData_Statics::NewProp_IsDesignContractOffer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsDesignContractOffer_MetaData), NewProp_IsDesignContractOffer_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTenderOfferData_Statics::NewProp_RequestedWeaponCategory = { "RequestedWeaponCategory", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTenderOfferData, RequestedWeaponCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestedWeaponCategory_MetaData), NewProp_RequestedWeaponCategory_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTenderOfferData_Statics::NewProp_RequestedWeaponFeatures_Inner = { "RequestedWeaponFeatures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTenderOfferData_Statics::NewProp_RequestedWeaponFeatures = { "RequestedWeaponFeatures", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTenderOfferData, RequestedWeaponFeatures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestedWeaponFeatures_MetaData), NewProp_RequestedWeaponFeatures_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTenderOfferData_Statics::NewProp_RequestedCountryName = { "RequestedCountryName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTenderOfferData, RequestedCountryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestedCountryName_MetaData), NewProp_RequestedCountryName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTenderOfferData_Statics::NewProp_RequestedWeaponCount = { "RequestedWeaponCount", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTenderOfferData, RequestedWeaponCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestedWeaponCount_MetaData), NewProp_RequestedWeaponCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTenderOfferData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTenderOfferData_Statics::NewProp_IsTenderOffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTenderOfferData_Statics::NewProp_IsSellContractOffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTenderOfferData_Statics::NewProp_IsDesignContractOffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTenderOfferData_Statics::NewProp_RequestedWeaponCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTenderOfferData_Statics::NewProp_RequestedWeaponFeatures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTenderOfferData_Statics::NewProp_RequestedWeaponFeatures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTenderOfferData_Statics::NewProp_RequestedCountryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTenderOfferData_Statics::NewProp_RequestedWeaponCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTenderOfferData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTenderOfferData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WarIndustry,
	nullptr,
	&NewStructOps,
	"TenderOfferData",
	Z_Construct_UScriptStruct_FTenderOfferData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTenderOfferData_Statics::PropPointers),
	sizeof(FTenderOfferData),
	alignof(FTenderOfferData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTenderOfferData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTenderOfferData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTenderOfferData()
{
	if (!Z_Registration_Info_UScriptStruct_TenderOfferData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TenderOfferData.InnerSingleton, Z_Construct_UScriptStruct_FTenderOfferData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TenderOfferData.InnerSingleton;
}
// End ScriptStruct FTenderOfferData

// Begin Delegate FOffer
struct Z_Construct_UDelegateFunction_WarIndustry_Offer__DelegateSignature_Statics
{
	struct _Script_WarIndustry_eventOffer_Parms
	{
		FTenderOfferData TenderOfferData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BackgroundLogicOperations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TenderOfferData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WarIndustry_Offer__DelegateSignature_Statics::NewProp_TenderOfferData = { "TenderOfferData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WarIndustry_eventOffer_Parms, TenderOfferData), Z_Construct_UScriptStruct_FTenderOfferData, METADATA_PARAMS(0, nullptr) }; // 3892554774
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WarIndustry_Offer__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WarIndustry_Offer__DelegateSignature_Statics::NewProp_TenderOfferData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WarIndustry_Offer__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WarIndustry_Offer__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WarIndustry, nullptr, "Offer__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WarIndustry_Offer__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WarIndustry_Offer__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WarIndustry_Offer__DelegateSignature_Statics::_Script_WarIndustry_eventOffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WarIndustry_Offer__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WarIndustry_Offer__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_WarIndustry_Offer__DelegateSignature_Statics::_Script_WarIndustry_eventOffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WarIndustry_Offer__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WarIndustry_Offer__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOffer_DelegateWrapper(const FMulticastScriptDelegate& Offer, FTenderOfferData TenderOfferData)
{
	struct _Script_WarIndustry_eventOffer_Parms
	{
		FTenderOfferData TenderOfferData;
	};
	_Script_WarIndustry_eventOffer_Parms Parms;
	Parms.TenderOfferData=TenderOfferData;
	Offer.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOffer

// Begin Class UBackgroundLogicOperations Function CheckCountryBordersForOffer
struct Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics
{
	struct BackgroundLogicOperations_eventCheckCountryBordersForOffer_Parms
	{
		UObject* WorldContextObject;
		UDataTable* AllFeaturesDataTable;
		FTenderOfferData OfferData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AsyncBackgroundLogic" },
		{ "ModuleRelativePath", "Public/BackgroundLogicOperations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllFeaturesDataTable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OfferData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundLogicOperations_eventCheckCountryBordersForOffer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_AllFeaturesDataTable = { "AllFeaturesDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundLogicOperations_eventCheckCountryBordersForOffer_Parms, AllFeaturesDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_OfferData = { "OfferData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundLogicOperations_eventCheckCountryBordersForOffer_Parms, OfferData), Z_Construct_UScriptStruct_FTenderOfferData, METADATA_PARAMS(0, nullptr) }; // 3892554774
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_AllFeaturesDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_OfferData,
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
	P_GET_STRUCT_REF(FTenderOfferData,Z_Param_Out_OfferData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckCountryBordersForOffer(Z_Param_WorldContextObject,Z_Param_AllFeaturesDataTable,Z_Param_Out_OfferData);
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
		{ "BlueprintType", "true" },
		{ "IncludePath", "BackgroundLogicOperations.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BackgroundLogicOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateOfferPage_MetaData[] = {
		{ "ModuleRelativePath", "Public/BackgroundLogicOperations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CreateOfferPage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer, "CheckCountryBordersForOffer" }, // 1821132164
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
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBackgroundLogicOperations_Statics::NewProp_CreateOfferPage = { "CreateOfferPage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackgroundLogicOperations, CreateOfferPage), Z_Construct_UDelegateFunction_WarIndustry_Offer__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateOfferPage_MetaData), NewProp_CreateOfferPage_MetaData) }; // 2676748157
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackgroundLogicOperations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundLogicOperations_Statics::NewProp_CreateOfferPage,
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
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTenderOfferData::StaticStruct, Z_Construct_UScriptStruct_FTenderOfferData_Statics::NewStructOps, TEXT("TenderOfferData"), &Z_Registration_Info_UScriptStruct_TenderOfferData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTenderOfferData), 3892554774U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBackgroundLogicOperations, UBackgroundLogicOperations::StaticClass, TEXT("UBackgroundLogicOperations"), &Z_Registration_Info_UClass_UBackgroundLogicOperations, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackgroundLogicOperations), 3032901477U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_BackgroundLogicOperations_h_3403844852(TEXT("/Script/WarIndustry"),
	Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_BackgroundLogicOperations_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_BackgroundLogicOperations_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_BackgroundLogicOperations_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_BackgroundLogicOperations_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
