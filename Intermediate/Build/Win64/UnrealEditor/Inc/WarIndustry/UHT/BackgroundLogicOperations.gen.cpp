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
UPackage* Z_Construct_UPackage__Script_WarIndustry();
WARINDUSTRY_API UClass* Z_Construct_UClass_UBackgroundLogicOperations();
WARINDUSTRY_API UClass* Z_Construct_UClass_UBackgroundLogicOperations_NoRegister();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FFactorys();
// End Cross Module References

// Begin Class UBackgroundLogicOperations Function CheckCountryBordersForOffer
struct Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics
{
	struct BackgroundLogicOperations_eventCheckCountryBordersForOffer_Parms
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundLogicOperations_eventCheckCountryBordersForOffer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundLogicOperations, nullptr, "CheckCountryBordersForOffer", nullptr, nullptr, Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::BackgroundLogicOperations_eventCheckCountryBordersForOffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer_Statics::Function_MetaDataParams) };
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
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckCountryBordersForOffer(Z_Param_WorldContextObject);
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

// Begin Class UBackgroundLogicOperations
void UBackgroundLogicOperations::StaticRegisterNativesUBackgroundLogicOperations()
{
	UClass* Class = UBackgroundLogicOperations::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckCountryBordersForOffer", &UBackgroundLogicOperations::execCheckCountryBordersForOffer },
		{ "CreateAsyncBackgroundLogicOperations", &UBackgroundLogicOperations::execCreateAsyncBackgroundLogicOperations },
		{ "DistributeProducedWeapons", &UBackgroundLogicOperations::execDistributeProducedWeapons },
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBackgroundLogicOperations_CheckCountryBordersForOffer, "CheckCountryBordersForOffer" }, // 2478278621
		{ &Z_Construct_UFunction_UBackgroundLogicOperations_CreateAsyncBackgroundLogicOperations, "CreateAsyncBackgroundLogicOperations" }, // 1521723656
		{ &Z_Construct_UFunction_UBackgroundLogicOperations_DistributeProducedWeapons, "DistributeProducedWeapons" }, // 1838244887
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackgroundLogicOperations>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
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
		{ Z_Construct_UClass_UBackgroundLogicOperations, UBackgroundLogicOperations::StaticClass, TEXT("UBackgroundLogicOperations"), &Z_Registration_Info_UClass_UBackgroundLogicOperations, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackgroundLogicOperations), 1085109414U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_BackgroundLogicOperations_h_3813581607(TEXT("/Script/WarIndustry"),
	Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_BackgroundLogicOperations_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_BackgroundLogicOperations_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
