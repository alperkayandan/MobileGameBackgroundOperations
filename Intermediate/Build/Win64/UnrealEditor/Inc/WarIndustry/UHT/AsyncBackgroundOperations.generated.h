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
struct FCountrys;
struct FFactorys;
struct FNewDesignedProductsStruct;
#ifdef WARINDUSTRY_AsyncBackgroundOperations_generated_h
#error "AsyncBackgroundOperations.generated.h already included, missing '#pragma once' in AsyncBackgroundOperations.h"
#endif
#define WARINDUSTRY_AsyncBackgroundOperations_generated_h

#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCountriesThatCanProduceWeapons_Statics; \
	WARINDUSTRY_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> WARINDUSTRY_API UScriptStruct* StaticStruct<struct FCountriesThatCanProduceWeapons>();

#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCountryWeaponsStartData_Statics; \
	WARINDUSTRY_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> WARINDUSTRY_API UScriptStruct* StaticStruct<struct FCountryWeaponsStartData>();

#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_80_DELEGATE \
WARINDUSTRY_API void FOnAsyncProgressUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnAsyncProgressUpdated, float Progress);


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_81_DELEGATE \
WARINDUSTRY_API void FOnWeaponsCreated_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponsCreated, TArray<FNewDesignedProductsStruct> const& CreatedWeapons, TArray<FFactorys> const& GlobalFactorys);


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_82_DELEGATE \
WARINDUSTRY_API void FOnRandomWeaponsToCountries_DelegateWrapper(const FMulticastScriptDelegate& OnRandomWeaponsToCountries, TArray<FCountrys> const& SaveCountrys);


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCalculateWeaponOverall); \
	DECLARE_FUNCTION(execWeaponsMaxAndMinValues); \
	DECLARE_FUNCTION(execWeaponsFightingAgainstAndStrengths); \
	DECLARE_FUNCTION(execStartAsyncRandomWeaponsToCountries); \
	DECLARE_FUNCTION(execStartAsyncCreateRandomWeaponsData); \
	DECLARE_FUNCTION(execCreateAsyncBackgroundOperations);


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncBackgroundOperations(); \
	friend struct Z_Construct_UClass_UAsyncBackgroundOperations_Statics; \
public: \
	DECLARE_CLASS(UAsyncBackgroundOperations, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WarIndustry"), NO_API) \
	DECLARE_SERIALIZER(UAsyncBackgroundOperations)


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_87_ENHANCED_CONSTRUCTORS \
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


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_84_PROLOG
#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_87_INCLASS_NO_PURE_DECLS \
	FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARINDUSTRY_API UClass* StaticClass<class UAsyncBackgroundOperations>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_AsyncBackgroundOperations_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::Empty) \
	op(EWeaponType::AssultRifle) \
	op(EWeaponType::SniperRifle) \
	op(EWeaponType::SubmachineGun) \
	op(EWeaponType::AirAttackMachineGun) \
	op(EWeaponType::CoactionalMachineGun) \
	op(EWeaponType::LandToAirMissile) \
	op(EWeaponType::AirToLandMissile) \
	op(EWeaponType::AirToAirMissile) \
	op(EWeaponType::LightTank) \
	op(EWeaponType::MainBattleTank) \
	op(EWeaponType::HeavyTank) \
	op(EWeaponType::AmphibiousTank) \
	op(EWeaponType::WheeledArmoredPersonnelCarrier) \
	op(EWeaponType::TrackedArmoredPersonnelCarrier) \
	op(EWeaponType::ArmoredFightingVehicle) \
	op(EWeaponType::AmphibiousArmoredPersonnelCarrier) \
	op(EWeaponType::UAV) \
	op(EWeaponType::KamikazeUAV) \
	op(EWeaponType::ArmedUAV) \
	op(EWeaponType::UnmannedFighterJet) \
	op(EWeaponType::LandingHelicopter) \
	op(EWeaponType::AttackHelicopter) \
	op(EWeaponType::CargoHelicopter) \
	op(EWeaponType::MarineHelicopter) \
	op(EWeaponType::TrainAircraft) \
	op(EWeaponType::FighterJet) \
	op(EWeaponType::BomberPlane) \
	op(EWeaponType::VerticalTakeOffJets) \
	op(EWeaponType::AntiDroneSystems) \
	op(EWeaponType::MediumRangeAirDefenseSystems) \
	op(EWeaponType::LongRangeAirDefenseSystems) 

enum class EWeaponType : uint8;
template<> struct TIsUEnumClass<EWeaponType> { enum { Value = true }; };
template<> WARINDUSTRY_API UEnum* StaticEnum<EWeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
