// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaveInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UC_SaveGame;
struct FContracts;
struct FCountrys;
struct FCurrentWars;
struct FFactorys;
struct FGeneralDatas;
struct FLastSlot;
struct FMyFactorys;
struct FNewDesignedProductsStruct;
struct FNews;
struct FRebellion;
struct FResearchItems;
#ifdef WARINDUSTRY_SaveInterface_generated_h
#error "SaveInterface.generated.h already included, missing '#pragma once' in SaveInterface.h"
#endif
#define WARINDUSTRY_SaveInterface_generated_h

#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_SaveInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SaveLastSlots_Implementation(FLastSlot const& LastSlotParam, bool IsAsync) {}; \
	virtual void SaveSlots_Implementation(bool IsAsync) {}; \
	virtual void CheckLastSavedSlots_Implementation(bool IsAsync) {}; \
	virtual void SaveNew_Implementation(TArray<FNews> const& DataToSave, bool IsAsync) {}; \
	virtual void SaveWars_Implementation(TArray<FCurrentWars> const& DataToSave, bool IsAsync) {}; \
	virtual void SaveRebellion_Implementation(TArray<FRebellion> const& DataToSave, bool IsAsync) {}; \
	virtual void SaveContract_Implementation(TArray<FContracts> const& DataToSave, bool IsAsync) {}; \
	virtual void SaveResearchProducts_Implementation(TArray<FResearchItems> const& DataToSave, bool IsAsync) {}; \
	virtual void SaveMyFactorysData_Implementation(TArray<FMyFactorys> const& DataToSave, bool IsAsync) {}; \
	virtual void SaveGlobalFactory_Implementation(TArray<FFactorys> const& DataToSave, bool IsAsync) {}; \
	virtual void SaveDesignedProducts_Implementation(TArray<FNewDesignedProductsStruct> const& DataToSave, bool IsAsync) {}; \
	virtual void SaveCountrys_Implementation(TArray<FCountrys> const& DataToSave, bool IsAsync) {}; \
	virtual void SaveGeneralData_Implementation(FGeneralDatas const& DataToSave, bool IsAsync) {}; \
	virtual void GetGameData_Implementation(UC_SaveGame*& SaveGameData) {}; \
	virtual void LoadSavedGameData_Implementation(bool IsAsync) {}; \
	virtual void SaveGameDatas_Implementation(bool IsAsync) {}; \
	DECLARE_FUNCTION(execSaveLastSlots); \
	DECLARE_FUNCTION(execSaveSlots); \
	DECLARE_FUNCTION(execCheckLastSavedSlots); \
	DECLARE_FUNCTION(execSaveNew); \
	DECLARE_FUNCTION(execSaveWars); \
	DECLARE_FUNCTION(execSaveRebellion); \
	DECLARE_FUNCTION(execSaveContract); \
	DECLARE_FUNCTION(execSaveResearchProducts); \
	DECLARE_FUNCTION(execSaveMyFactorysData); \
	DECLARE_FUNCTION(execSaveGlobalFactory); \
	DECLARE_FUNCTION(execSaveDesignedProducts); \
	DECLARE_FUNCTION(execSaveCountrys); \
	DECLARE_FUNCTION(execSaveGeneralData); \
	DECLARE_FUNCTION(execGetGameData); \
	DECLARE_FUNCTION(execLoadSavedGameData); \
	DECLARE_FUNCTION(execSaveGameDatas);


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_SaveInterface_h_13_CALLBACK_WRAPPERS
#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_SaveInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USaveInterface(USaveInterface&&); \
	USaveInterface(const USaveInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveInterface) \
	NO_API virtual ~USaveInterface();


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_SaveInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSaveInterface(); \
	friend struct Z_Construct_UClass_USaveInterface_Statics; \
public: \
	DECLARE_CLASS(USaveInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/WarIndustry"), NO_API) \
	DECLARE_SERIALIZER(USaveInterface)


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_SaveInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_SaveInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_SaveInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_SaveInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISaveInterface() {} \
public: \
	typedef USaveInterface UClassType; \
	typedef ISaveInterface ThisClass; \
	static void Execute_CheckLastSavedSlots(UObject* O, bool IsAsync); \
	static void Execute_GetGameData(UObject* O, UC_SaveGame*& SaveGameData); \
	static void Execute_LoadSavedGameData(UObject* O, bool IsAsync); \
	static void Execute_SaveContract(UObject* O, TArray<FContracts> const& DataToSave, bool IsAsync); \
	static void Execute_SaveCountrys(UObject* O, TArray<FCountrys> const& DataToSave, bool IsAsync); \
	static void Execute_SaveDesignedProducts(UObject* O, TArray<FNewDesignedProductsStruct> const& DataToSave, bool IsAsync); \
	static void Execute_SaveGameDatas(UObject* O, bool IsAsync); \
	static void Execute_SaveGeneralData(UObject* O, FGeneralDatas const& DataToSave, bool IsAsync); \
	static void Execute_SaveGlobalFactory(UObject* O, TArray<FFactorys> const& DataToSave, bool IsAsync); \
	static void Execute_SaveLastSlots(UObject* O, FLastSlot const& LastSlotParam, bool IsAsync); \
	static void Execute_SaveMyFactorysData(UObject* O, TArray<FMyFactorys> const& DataToSave, bool IsAsync); \
	static void Execute_SaveNew(UObject* O, TArray<FNews> const& DataToSave, bool IsAsync); \
	static void Execute_SaveRebellion(UObject* O, TArray<FRebellion> const& DataToSave, bool IsAsync); \
	static void Execute_SaveResearchProducts(UObject* O, TArray<FResearchItems> const& DataToSave, bool IsAsync); \
	static void Execute_SaveSlots(UObject* O, bool IsAsync); \
	static void Execute_SaveWars(UObject* O, TArray<FCurrentWars> const& DataToSave, bool IsAsync); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_SaveInterface_h_10_PROLOG
#define FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_SaveInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_SaveInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_SaveInterface_h_13_CALLBACK_WRAPPERS \
	FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_SaveInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARINDUSTRY_API UClass* StaticClass<class USaveInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_SaveInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
