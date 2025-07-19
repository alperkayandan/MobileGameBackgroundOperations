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
WARINDUSTRY_API UClass* Z_Construct_UClass_USaveInterface_NoRegister();
// End Cross Module References

// Begin Class UC_GameInstance
void UC_GameInstance::StaticRegisterNativesUC_GameInstance()
{
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
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
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
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UC_GameInstance_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USaveInterface_NoRegister, (int32)VTABLE_OFFSET(UC_GameInstance, ISaveInterface), false },  // 3860430805
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UC_GameInstance_Statics::ClassParams = {
	&UC_GameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UC_GameInstance_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UC_GameInstance_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
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
		{ Z_Construct_UClass_UC_GameInstance, UC_GameInstance::StaticClass, TEXT("UC_GameInstance"), &Z_Registration_Info_UClass_UC_GameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UC_GameInstance), 3245603060U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_C_GameInstance_h_1235942101(TEXT("/Script/WarIndustry"),
	Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_C_GameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_C_GameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
