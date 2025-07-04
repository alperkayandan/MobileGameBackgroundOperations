// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_SaveGame.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WARINDUSTRY_C_SaveGame_generated_h
#error "C_SaveGame.generated.h already included, missing '#pragma once' in C_SaveGame.h"
#endif
#define WARINDUSTRY_C_SaveGame_generated_h

#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_C_SaveGame_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUC_SaveGame(); \
	friend struct Z_Construct_UClass_UC_SaveGame_Statics; \
public: \
	DECLARE_CLASS(UC_SaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WarIndustry"), NO_API) \
	DECLARE_SERIALIZER(UC_SaveGame)


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_C_SaveGame_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC_SaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UC_SaveGame(UC_SaveGame&&); \
	UC_SaveGame(const UC_SaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC_SaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC_SaveGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC_SaveGame) \
	NO_API virtual ~UC_SaveGame();


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_C_SaveGame_h_14_PROLOG
#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_C_SaveGame_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_C_SaveGame_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_C_SaveGame_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARINDUSTRY_API UClass* StaticClass<class UC_SaveGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_C_SaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
