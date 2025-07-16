// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WarIndustry/Public/C_SaveGame.h"
#include "WarIndustry/Public/AllStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_SaveGame() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
UPackage* Z_Construct_UPackage__Script_WarIndustry();
WARINDUSTRY_API UClass* Z_Construct_UClass_UC_SaveGame();
WARINDUSTRY_API UClass* Z_Construct_UClass_UC_SaveGame_NoRegister();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FContracts();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FCountrys();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FCurrentWars();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FFactorys();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FGeneralDatas();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FLastSlot();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FMyFactorys();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FNewDesignedProductsStruct();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FNews();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FRebellion();
WARINDUSTRY_API UScriptStruct* Z_Construct_UScriptStruct_FResearchItems();
// End Cross Module References

// Begin Class UC_SaveGame
void UC_SaveGame::StaticRegisterNativesUC_SaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UC_SaveGame);
UClass* Z_Construct_UClass_UC_SaveGame_NoRegister()
{
	return UC_SaveGame::StaticClass();
}
struct Z_Construct_UClass_UC_SaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "C_SaveGame.h" },
		{ "ModuleRelativePath", "Public/C_SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneralDatas_MetaData[] = {
		{ "Category", "C_SaveGame" },
		{ "ModuleRelativePath", "Public/C_SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSlot_MetaData[] = {
		{ "Category", "C_SaveGame" },
		{ "ModuleRelativePath", "Public/C_SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Countrys_MetaData[] = {
		{ "Category", "C_SaveGame" },
		{ "ModuleRelativePath", "Public/C_SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Factorys_MetaData[] = {
		{ "Category", "C_SaveGame" },
		{ "ModuleRelativePath", "Public/C_SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyFactorys_MetaData[] = {
		{ "Category", "C_SaveGame" },
		{ "ModuleRelativePath", "Public/C_SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResearchTimes_MetaData[] = {
		{ "Category", "C_SaveGame" },
		{ "ModuleRelativePath", "Public/C_SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Contracts_MetaData[] = {
		{ "Category", "C_SaveGame" },
		{ "ModuleRelativePath", "Public/C_SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rebellion_MetaData[] = {
		{ "Category", "C_SaveGame" },
		{ "ModuleRelativePath", "Public/C_SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_War_MetaData[] = {
		{ "Category", "C_SaveGame" },
		{ "ModuleRelativePath", "Public/C_SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllNews_MetaData[] = {
		{ "Category", "C_SaveGame" },
		{ "ModuleRelativePath", "Public/C_SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesignedProducts_MetaData[] = {
		{ "Category", "C_SaveGame" },
		{ "ModuleRelativePath", "Public/C_SaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneralDatas;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastSlot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Countrys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Countrys;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Factorys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Factorys;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MyFactorys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MyFactorys;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResearchTimes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResearchTimes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Contracts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Contracts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rebellion_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rebellion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_War_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_War;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllNews_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllNews;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DesignedProducts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DesignedProducts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_SaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UC_SaveGame_Statics::NewProp_GeneralDatas = { "GeneralDatas", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC_SaveGame, GeneralDatas), Z_Construct_UScriptStruct_FGeneralDatas, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneralDatas_MetaData), NewProp_GeneralDatas_MetaData) }; // 3045005971
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UC_SaveGame_Statics::NewProp_LastSlot = { "LastSlot", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC_SaveGame, LastSlot), Z_Construct_UScriptStruct_FLastSlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSlot_MetaData), NewProp_LastSlot_MetaData) }; // 2546034666
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UC_SaveGame_Statics::NewProp_Countrys_Inner = { "Countrys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCountrys, METADATA_PARAMS(0, nullptr) }; // 4030937518
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UC_SaveGame_Statics::NewProp_Countrys = { "Countrys", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC_SaveGame, Countrys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Countrys_MetaData), NewProp_Countrys_MetaData) }; // 4030937518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UC_SaveGame_Statics::NewProp_Factorys_Inner = { "Factorys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFactorys, METADATA_PARAMS(0, nullptr) }; // 499567656
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UC_SaveGame_Statics::NewProp_Factorys = { "Factorys", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC_SaveGame, Factorys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Factorys_MetaData), NewProp_Factorys_MetaData) }; // 499567656
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UC_SaveGame_Statics::NewProp_MyFactorys_Inner = { "MyFactorys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMyFactorys, METADATA_PARAMS(0, nullptr) }; // 827706395
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UC_SaveGame_Statics::NewProp_MyFactorys = { "MyFactorys", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC_SaveGame, MyFactorys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyFactorys_MetaData), NewProp_MyFactorys_MetaData) }; // 827706395
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UC_SaveGame_Statics::NewProp_ResearchTimes_Inner = { "ResearchTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FResearchItems, METADATA_PARAMS(0, nullptr) }; // 1047416769
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UC_SaveGame_Statics::NewProp_ResearchTimes = { "ResearchTimes", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC_SaveGame, ResearchTimes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResearchTimes_MetaData), NewProp_ResearchTimes_MetaData) }; // 1047416769
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UC_SaveGame_Statics::NewProp_Contracts_Inner = { "Contracts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FContracts, METADATA_PARAMS(0, nullptr) }; // 2041926957
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UC_SaveGame_Statics::NewProp_Contracts = { "Contracts", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC_SaveGame, Contracts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Contracts_MetaData), NewProp_Contracts_MetaData) }; // 2041926957
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UC_SaveGame_Statics::NewProp_Rebellion_Inner = { "Rebellion", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRebellion, METADATA_PARAMS(0, nullptr) }; // 842799746
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UC_SaveGame_Statics::NewProp_Rebellion = { "Rebellion", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC_SaveGame, Rebellion), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rebellion_MetaData), NewProp_Rebellion_MetaData) }; // 842799746
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UC_SaveGame_Statics::NewProp_War_Inner = { "War", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCurrentWars, METADATA_PARAMS(0, nullptr) }; // 849588056
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UC_SaveGame_Statics::NewProp_War = { "War", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC_SaveGame, War), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_War_MetaData), NewProp_War_MetaData) }; // 849588056
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UC_SaveGame_Statics::NewProp_AllNews_Inner = { "AllNews", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNews, METADATA_PARAMS(0, nullptr) }; // 3825443321
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UC_SaveGame_Statics::NewProp_AllNews = { "AllNews", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC_SaveGame, AllNews), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllNews_MetaData), NewProp_AllNews_MetaData) }; // 3825443321
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UC_SaveGame_Statics::NewProp_DesignedProducts_Inner = { "DesignedProducts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNewDesignedProductsStruct, METADATA_PARAMS(0, nullptr) }; // 4217424401
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UC_SaveGame_Statics::NewProp_DesignedProducts = { "DesignedProducts", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC_SaveGame, DesignedProducts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesignedProducts_MetaData), NewProp_DesignedProducts_MetaData) }; // 4217424401
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UC_SaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_SaveGame_Statics::NewProp_GeneralDatas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_SaveGame_Statics::NewProp_LastSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_SaveGame_Statics::NewProp_Countrys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_SaveGame_Statics::NewProp_Countrys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_SaveGame_Statics::NewProp_Factorys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_SaveGame_Statics::NewProp_Factorys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_SaveGame_Statics::NewProp_MyFactorys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_SaveGame_Statics::NewProp_MyFactorys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_SaveGame_Statics::NewProp_ResearchTimes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_SaveGame_Statics::NewProp_ResearchTimes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_SaveGame_Statics::NewProp_Contracts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_SaveGame_Statics::NewProp_Contracts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_SaveGame_Statics::NewProp_Rebellion_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_SaveGame_Statics::NewProp_Rebellion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_SaveGame_Statics::NewProp_War_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_SaveGame_Statics::NewProp_War,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_SaveGame_Statics::NewProp_AllNews_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_SaveGame_Statics::NewProp_AllNews,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_SaveGame_Statics::NewProp_DesignedProducts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_SaveGame_Statics::NewProp_DesignedProducts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC_SaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UC_SaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_WarIndustry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC_SaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UC_SaveGame_Statics::ClassParams = {
	&UC_SaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UC_SaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UC_SaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UC_SaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UC_SaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UC_SaveGame()
{
	if (!Z_Registration_Info_UClass_UC_SaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UC_SaveGame.OuterSingleton, Z_Construct_UClass_UC_SaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UC_SaveGame.OuterSingleton;
}
template<> WARINDUSTRY_API UClass* StaticClass<UC_SaveGame>()
{
	return UC_SaveGame::StaticClass();
}
UC_SaveGame::UC_SaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UC_SaveGame);
UC_SaveGame::~UC_SaveGame() {}
// End Class UC_SaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_C_SaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UC_SaveGame, UC_SaveGame::StaticClass, TEXT("UC_SaveGame"), &Z_Registration_Info_UClass_UC_SaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UC_SaveGame), 2321283236U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_C_SaveGame_h_2277134003(TEXT("/Script/WarIndustry"),
	Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_C_SaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_C_SaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
