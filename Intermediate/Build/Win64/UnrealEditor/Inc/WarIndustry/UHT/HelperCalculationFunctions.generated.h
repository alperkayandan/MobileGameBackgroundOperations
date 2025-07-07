// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HelperCalculationFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FCountrys;
struct FRebellion;
#ifdef WARINDUSTRY_HelperCalculationFunctions_generated_h
#error "HelperCalculationFunctions.generated.h already included, missing '#pragma once' in HelperCalculationFunctions.h"
#endif
#define WARINDUSTRY_HelperCalculationFunctions_generated_h

#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_HelperCalculationFunctions_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSortCompaniesByCompanyValues); \
	DECLARE_FUNCTION(execSortCountriesByPower); \
	DECLARE_FUNCTION(execCompareWeaponPowerAndTechnoligies);


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_HelperCalculationFunctions_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHelperCalculationFunctions(); \
	friend struct Z_Construct_UClass_UHelperCalculationFunctions_Statics; \
public: \
	DECLARE_CLASS(UHelperCalculationFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WarIndustry"), NO_API) \
	DECLARE_SERIALIZER(UHelperCalculationFunctions)


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_HelperCalculationFunctions_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHelperCalculationFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHelperCalculationFunctions(UHelperCalculationFunctions&&); \
	UHelperCalculationFunctions(const UHelperCalculationFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHelperCalculationFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHelperCalculationFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHelperCalculationFunctions) \
	NO_API virtual ~UHelperCalculationFunctions();


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_HelperCalculationFunctions_h_26_PROLOG
#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_HelperCalculationFunctions_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_HelperCalculationFunctions_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_HelperCalculationFunctions_h_29_INCLASS_NO_PURE_DECLS \
	FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_HelperCalculationFunctions_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARINDUSTRY_API UClass* StaticClass<class UHelperCalculationFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_HelperCalculationFunctions_h


#define FOREACH_ENUM_EWEAPONCATEGORY(op) \
	op(EWeaponCategory::LongRangeRifles) \
	op(EWeaponCategory::Rockets) \
	op(EWeaponCategory::Tanks) \
	op(EWeaponCategory::ArmoredVehicles) \
	op(EWeaponCategory::Uavs) \
	op(EWeaponCategory::Helicopters) \
	op(EWeaponCategory::FighterJets) \
	op(EWeaponCategory::AirDefensseSystems) \
	op(EWeaponCategory::Default) 

enum class EWeaponCategory : uint8;
template<> struct TIsUEnumClass<EWeaponCategory> { enum { Value = true }; };
template<> WARINDUSTRY_API UEnum* StaticEnum<EWeaponCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
