// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarIndustry_init() {}
	WARINDUSTRY_API UFunction* Z_Construct_UDelegateFunction_WarIndustry_OnAsyncProgressUpdated__DelegateSignature();
	WARINDUSTRY_API UFunction* Z_Construct_UDelegateFunction_WarIndustry_OnRandomWeaponsToCountries__DelegateSignature();
	WARINDUSTRY_API UFunction* Z_Construct_UDelegateFunction_WarIndustry_OnWeaponsCreated__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WarIndustry;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WarIndustry()
	{
		if (!Z_Registration_Info_UPackage__Script_WarIndustry.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_WarIndustry_OnAsyncProgressUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WarIndustry_OnRandomWeaponsToCountries__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WarIndustry_OnWeaponsCreated__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WarIndustry",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x89B81CC9,
				0x955017B6,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WarIndustry.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WarIndustry.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WarIndustry(Z_Construct_UPackage__Script_WarIndustry, TEXT("/Script/WarIndustry"), Z_Registration_Info_UPackage__Script_WarIndustry, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x89B81CC9, 0x955017B6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
