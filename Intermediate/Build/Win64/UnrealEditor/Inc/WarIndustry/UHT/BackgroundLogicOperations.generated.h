// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BackgroundLogicOperations.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBackgroundLogicOperations;
class UObject;
struct FFactorys;
#ifdef WARINDUSTRY_BackgroundLogicOperations_generated_h
#error "BackgroundLogicOperations.generated.h already included, missing '#pragma once' in BackgroundLogicOperations.h"
#endif
#define WARINDUSTRY_BackgroundLogicOperations_generated_h

#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_BackgroundLogicOperations_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckCountryBordersForOffer); \
	DECLARE_FUNCTION(execDistributeProducedWeapons); \
	DECLARE_FUNCTION(execCreateAsyncBackgroundLogicOperations);


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_BackgroundLogicOperations_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBackgroundLogicOperations(); \
	friend struct Z_Construct_UClass_UBackgroundLogicOperations_Statics; \
public: \
	DECLARE_CLASS(UBackgroundLogicOperations, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WarIndustry"), NO_API) \
	DECLARE_SERIALIZER(UBackgroundLogicOperations)


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_BackgroundLogicOperations_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBackgroundLogicOperations(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBackgroundLogicOperations(UBackgroundLogicOperations&&); \
	UBackgroundLogicOperations(const UBackgroundLogicOperations&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBackgroundLogicOperations); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBackgroundLogicOperations); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBackgroundLogicOperations) \
	NO_API virtual ~UBackgroundLogicOperations();


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_BackgroundLogicOperations_h_12_PROLOG
#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_BackgroundLogicOperations_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_BackgroundLogicOperations_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_BackgroundLogicOperations_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_BackgroundLogicOperations_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARINDUSTRY_API UClass* StaticClass<class UBackgroundLogicOperations>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_BackgroundLogicOperations_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
