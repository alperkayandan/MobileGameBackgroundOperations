// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncBackgroundOperations.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UAsyncBackgroundOperations;
class UObject;
#ifdef WARINDUSTRY_AsyncBackgroundOperations_generated_h
#error "AsyncBackgroundOperations.generated.h already included, missing '#pragma once' in AsyncBackgroundOperations.h"
#endif
#define WARINDUSTRY_AsyncBackgroundOperations_generated_h

#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics; \
	WARINDUSTRY_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> WARINDUSTRY_API UScriptStruct* StaticStruct<struct FCountriesThatCanProduceWeapons>();

#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_27_DELEGATE \
WARINDUSTRY_API void FOnAsyncProgressUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnAsyncProgressUpdated, float Progress);


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_28_DELEGATE \
WARINDUSTRY_API void FOnWeaponsCreated_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponsCreated);


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_29_DELEGATE \
WARINDUSTRY_API void FOnRandomWeaponsToCountries_DelegateWrapper(const FMulticastScriptDelegate& OnRandomWeaponsToCountries);


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCalculateWeaponOverall); \
	DECLARE_FUNCTION(execWeaponsMaxAndMinValues); \
	DECLARE_FUNCTION(execWeaponsFightingAgainstAndStrengths); \
	DECLARE_FUNCTION(execStartAsyncRandomWeaponsToCountries); \
	DECLARE_FUNCTION(execStartAsyncCreateRandomWeaponsData); \
	DECLARE_FUNCTION(execCreateAsyncBackgroundOperations);


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncBackgroundOperations(); \
	friend struct Z_Construct_UClass_UAsyncBackgroundOperations_Statics; \
public: \
	DECLARE_CLASS(UAsyncBackgroundOperations, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WarIndustry"), NO_API) \
	DECLARE_SERIALIZER(UAsyncBackgroundOperations)


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncBackgroundOperations(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAsyncBackgroundOperations(UAsyncBackgroundOperations&&); \
	UAsyncBackgroundOperations(const UAsyncBackgroundOperations&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncBackgroundOperations); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncBackgroundOperations); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncBackgroundOperations) \
	NO_API virtual ~UAsyncBackgroundOperations();


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_31_PROLOG
#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_34_INCLASS_NO_PURE_DECLS \
	FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARINDUSTRY_API UClass* StaticClass<class UAsyncBackgroundOperations>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
