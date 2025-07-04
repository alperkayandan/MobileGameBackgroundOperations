// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WarIndustry/Public/C_GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_GameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_WarIndustry();
WARINDUSTRY_API UClass* Z_Construct_UClass_UC_GameInstance();
WARINDUSTRY_API UClass* Z_Construct_UClass_UC_GameInstance_NoRegister();
WARINDUSTRY_API UClass* Z_Construct_UClass_UC_SaveGame_NoRegister();
// End Cross Module References

// Begin Class UC_GameInstance Function GetCurrentSaveData
struct Z_Construct_UFunction_UC_GameInstance_GetCurrentSaveData_Statics
{
	struct C_GameInstance_eventGetCurrentSaveData_Parms
	{
		UC_SaveGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/C_GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UC_GameInstance_GetCurrentSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_GameInstance_eventGetCurrentSaveData_Parms, ReturnValue), Z_Construct_UClass_UC_SaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC_GameInstance_GetCurrentSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC_GameInstance_GetCurrentSaveData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC_GameInstance_GetCurrentSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC_GameInstance_GetCurrentSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC_GameInstance, nullptr, "GetCurrentSaveData", nullptr, nullptr, Z_Construct_UFunction_UC_GameInstance_GetCurrentSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC_GameInstance_GetCurrentSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC_GameInstance_GetCurrentSaveData_Statics::C_GameInstance_eventGetCurrentSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC_GameInstance_GetCurrentSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC_GameInstance_GetCurrentSaveData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC_GameInstance_GetCurrentSaveData_Statics::C_GameInstance_eventGetCurrentSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC_GameInstance_GetCurrentSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC_GameInstance_GetCurrentSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC_GameInstance::execGetCurrentSaveData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UC_SaveGame**)Z_Param__Result=P_THIS->GetCurrentSaveData();
	P_NATIVE_END;
}
// End Class UC_GameInstance Function GetCurrentSaveData

// Begin Class UC_GameInstance Function LoadSaveGame
struct Z_Construct_UFunction_UC_GameInstance_LoadSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/C_GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC_GameInstance_LoadSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC_GameInstance, nullptr, "LoadSaveGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC_GameInstance_LoadSaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC_GameInstance_LoadSaveGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UC_GameInstance_LoadSaveGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC_GameInstance_LoadSaveGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC_GameInstance::execLoadSaveGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadSaveGame();
	P_NATIVE_END;
}
// End Class UC_GameInstance Function LoadSaveGame

// Begin Class UC_GameInstance
void UC_GameInstance::StaticRegisterNativesUC_GameInstance()
{
	UClass* Class = UC_GameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentSaveData", &UC_GameInstance::execGetCurrentSaveData },
		{ "LoadSaveGame", &UC_GameInstance::execLoadSaveGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UC_GameInstance);
UClass* Z_Construct_UClass_UC_GameInstance_NoRegister()
{
	return UC_GameInstance::StaticClass();
}
struct Z_Construct_UClass_UC_GameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "C_GameInstance.h" },
		{ "ModuleRelativePath", "Public/C_GameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSaveData_MetaData[] = {
		{ "Category", "C_GameInstance" },
		{ "ModuleRelativePath", "Public/C_GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSaveData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UC_GameInstance_GetCurrentSaveData, "GetCurrentSaveData" }, // 4145560121
		{ &Z_Construct_UFunction_UC_GameInstance_LoadSaveGame, "LoadSaveGame" }, // 3886470549
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_GameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UC_GameInstance_Statics::NewProp_CurrentSaveData = { "CurrentSaveData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC_GameInstance, CurrentSaveData), Z_Construct_UClass_UC_SaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSaveData_MetaData), NewProp_CurrentSaveData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UC_GameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_GameInstance_Statics::NewProp_CurrentSaveData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC_GameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UC_GameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_WarIndustry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC_GameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UC_GameInstance_Statics::ClassParams = {
	&UC_GameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UC_GameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UC_GameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UC_GameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UC_GameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UC_GameInstance()
{
	if (!Z_Registration_Info_UClass_UC_GameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UC_GameInstance.OuterSingleton, Z_Construct_UClass_UC_GameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UC_GameInstance.OuterSingleton;
}
template<> WARINDUSTRY_API UClass* StaticClass<UC_GameInstance>()
{
	return UC_GameInstance::StaticClass();
}
UC_GameInstance::UC_GameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UC_GameInstance);
UC_GameInstance::~UC_GameInstance() {}
// End Class UC_GameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_C_GameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UC_GameInstance, UC_GameInstance::StaticClass, TEXT("UC_GameInstance"), &Z_Registration_Info_UClass_UC_GameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UC_GameInstance), 3003947526U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_C_GameInstance_h_2673618155(TEXT("/Script/WarIndustry"),
	Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_C_GameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_C_GameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
