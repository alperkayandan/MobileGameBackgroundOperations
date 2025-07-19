// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WarIndustry/Public/SaveInterface.h"
#include "WarIndustry/Public/AllStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_WarIndustry();
WARINDUSTRY_API UClass* Z_Construct_UClass_UC_SaveGame_NoRegister();
WARINDUSTRY_API UClass* Z_Construct_UClass_USaveInterface();
WARINDUSTRY_API UClass* Z_Construct_UClass_USaveInterface_NoRegister();
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

// Begin Interface USaveInterface Function CheckLastSavedSlots
struct SaveInterface_eventCheckLastSavedSlots_Parms
{
	bool IsAsync;
};
void ISaveInterface::CheckLastSavedSlots(bool IsAsync)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CheckLastSavedSlots instead.");
}
static FName NAME_USaveInterface_CheckLastSavedSlots = FName(TEXT("CheckLastSavedSlots"));
void ISaveInterface::Execute_CheckLastSavedSlots(UObject* O, bool IsAsync)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveInterface::StaticClass()));
	SaveInterface_eventCheckLastSavedSlots_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveInterface_CheckLastSavedSlots);
	if (Func)
	{
		Parms.IsAsync=IsAsync;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveInterface*)(O->GetNativeInterfaceAddress(USaveInterface::StaticClass())))
	{
		I->CheckLastSavedSlots_Implementation(IsAsync);
	}
}
struct Z_Construct_UFunction_USaveInterface_CheckLastSavedSlots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveSystem" },
		{ "ModuleRelativePath", "Public/SaveInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USaveInterface_CheckLastSavedSlots_Statics::NewProp_IsAsync_SetBit(void* Obj)
{
	((SaveInterface_eventCheckLastSavedSlots_Parms*)Obj)->IsAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveInterface_CheckLastSavedSlots_Statics::NewProp_IsAsync = { "IsAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveInterface_eventCheckLastSavedSlots_Parms), &Z_Construct_UFunction_USaveInterface_CheckLastSavedSlots_Statics::NewProp_IsAsync_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveInterface_CheckLastSavedSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_CheckLastSavedSlots_Statics::NewProp_IsAsync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_CheckLastSavedSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveInterface_CheckLastSavedSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveInterface, nullptr, "CheckLastSavedSlots", nullptr, nullptr, Z_Construct_UFunction_USaveInterface_CheckLastSavedSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_CheckLastSavedSlots_Statics::PropPointers), sizeof(SaveInterface_eventCheckLastSavedSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_CheckLastSavedSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveInterface_CheckLastSavedSlots_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveInterface_eventCheckLastSavedSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveInterface_CheckLastSavedSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveInterface_CheckLastSavedSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveInterface::execCheckLastSavedSlots)
{
	P_GET_UBOOL(Z_Param_IsAsync);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckLastSavedSlots_Implementation(Z_Param_IsAsync);
	P_NATIVE_END;
}
// End Interface USaveInterface Function CheckLastSavedSlots

// Begin Interface USaveInterface Function GetGameData
struct SaveInterface_eventGetGameData_Parms
{
	UC_SaveGame* SaveGameData;
};
void ISaveInterface::GetGameData(UC_SaveGame*& SaveGameData)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetGameData instead.");
}
static FName NAME_USaveInterface_GetGameData = FName(TEXT("GetGameData"));
void ISaveInterface::Execute_GetGameData(UObject* O, UC_SaveGame*& SaveGameData)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveInterface::StaticClass()));
	SaveInterface_eventGetGameData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveInterface_GetGameData);
	if (Func)
	{
		Parms.SaveGameData=SaveGameData;
		O->ProcessEvent(Func, &Parms);
		SaveGameData=Parms.SaveGameData;
	}
	else if (auto I = (ISaveInterface*)(O->GetNativeInterfaceAddress(USaveInterface::StaticClass())))
	{
		I->GetGameData_Implementation(SaveGameData);
	}
}
struct Z_Construct_UFunction_USaveInterface_GetGameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveSystem" },
		{ "ModuleRelativePath", "Public/SaveInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveInterface_GetGameData_Statics::NewProp_SaveGameData = { "SaveGameData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveInterface_eventGetGameData_Parms, SaveGameData), Z_Construct_UClass_UC_SaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveInterface_GetGameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_GetGameData_Statics::NewProp_SaveGameData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_GetGameData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveInterface_GetGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveInterface, nullptr, "GetGameData", nullptr, nullptr, Z_Construct_UFunction_USaveInterface_GetGameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_GetGameData_Statics::PropPointers), sizeof(SaveInterface_eventGetGameData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_GetGameData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveInterface_GetGameData_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveInterface_eventGetGameData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveInterface_GetGameData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveInterface_GetGameData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveInterface::execGetGameData)
{
	P_GET_OBJECT_REF(UC_SaveGame,Z_Param_Out_SaveGameData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGameData_Implementation(P_ARG_GC_BARRIER(Z_Param_Out_SaveGameData));
	P_NATIVE_END;
}
// End Interface USaveInterface Function GetGameData

// Begin Interface USaveInterface Function LoadSavedGameData
struct SaveInterface_eventLoadSavedGameData_Parms
{
	bool IsAsync;
};
void ISaveInterface::LoadSavedGameData(bool IsAsync)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LoadSavedGameData instead.");
}
static FName NAME_USaveInterface_LoadSavedGameData = FName(TEXT("LoadSavedGameData"));
void ISaveInterface::Execute_LoadSavedGameData(UObject* O, bool IsAsync)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveInterface::StaticClass()));
	SaveInterface_eventLoadSavedGameData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveInterface_LoadSavedGameData);
	if (Func)
	{
		Parms.IsAsync=IsAsync;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveInterface*)(O->GetNativeInterfaceAddress(USaveInterface::StaticClass())))
	{
		I->LoadSavedGameData_Implementation(IsAsync);
	}
}
struct Z_Construct_UFunction_USaveInterface_LoadSavedGameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveSystem" },
		{ "ModuleRelativePath", "Public/SaveInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USaveInterface_LoadSavedGameData_Statics::NewProp_IsAsync_SetBit(void* Obj)
{
	((SaveInterface_eventLoadSavedGameData_Parms*)Obj)->IsAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveInterface_LoadSavedGameData_Statics::NewProp_IsAsync = { "IsAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveInterface_eventLoadSavedGameData_Parms), &Z_Construct_UFunction_USaveInterface_LoadSavedGameData_Statics::NewProp_IsAsync_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveInterface_LoadSavedGameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_LoadSavedGameData_Statics::NewProp_IsAsync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_LoadSavedGameData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveInterface_LoadSavedGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveInterface, nullptr, "LoadSavedGameData", nullptr, nullptr, Z_Construct_UFunction_USaveInterface_LoadSavedGameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_LoadSavedGameData_Statics::PropPointers), sizeof(SaveInterface_eventLoadSavedGameData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_LoadSavedGameData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveInterface_LoadSavedGameData_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveInterface_eventLoadSavedGameData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveInterface_LoadSavedGameData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveInterface_LoadSavedGameData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveInterface::execLoadSavedGameData)
{
	P_GET_UBOOL(Z_Param_IsAsync);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadSavedGameData_Implementation(Z_Param_IsAsync);
	P_NATIVE_END;
}
// End Interface USaveInterface Function LoadSavedGameData

// Begin Interface USaveInterface Function SaveContract
struct SaveInterface_eventSaveContract_Parms
{
	TArray<FContracts> DataToSave;
	bool IsAsync;
};
void ISaveInterface::SaveContract(TArray<FContracts> const& DataToSave, bool IsAsync)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SaveContract instead.");
}
static FName NAME_USaveInterface_SaveContract = FName(TEXT("SaveContract"));
void ISaveInterface::Execute_SaveContract(UObject* O, TArray<FContracts> const& DataToSave, bool IsAsync)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveInterface::StaticClass()));
	SaveInterface_eventSaveContract_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveInterface_SaveContract);
	if (Func)
	{
		Parms.DataToSave=DataToSave;
		Parms.IsAsync=IsAsync;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveInterface*)(O->GetNativeInterfaceAddress(USaveInterface::StaticClass())))
	{
		I->SaveContract_Implementation(DataToSave,IsAsync);
	}
}
struct Z_Construct_UFunction_USaveInterface_SaveContract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveSystem" },
		{ "ModuleRelativePath", "Public/SaveInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataToSave_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataToSave;
	static void NewProp_IsAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveInterface_SaveContract_Statics::NewProp_DataToSave_Inner = { "DataToSave", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FContracts, METADATA_PARAMS(0, nullptr) }; // 2041926957
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveInterface_SaveContract_Statics::NewProp_DataToSave = { "DataToSave", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveInterface_eventSaveContract_Parms, DataToSave), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataToSave_MetaData), NewProp_DataToSave_MetaData) }; // 2041926957
void Z_Construct_UFunction_USaveInterface_SaveContract_Statics::NewProp_IsAsync_SetBit(void* Obj)
{
	((SaveInterface_eventSaveContract_Parms*)Obj)->IsAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveInterface_SaveContract_Statics::NewProp_IsAsync = { "IsAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveInterface_eventSaveContract_Parms), &Z_Construct_UFunction_USaveInterface_SaveContract_Statics::NewProp_IsAsync_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveInterface_SaveContract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveContract_Statics::NewProp_DataToSave_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveContract_Statics::NewProp_DataToSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveContract_Statics::NewProp_IsAsync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveContract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveInterface_SaveContract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveInterface, nullptr, "SaveContract", nullptr, nullptr, Z_Construct_UFunction_USaveInterface_SaveContract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveContract_Statics::PropPointers), sizeof(SaveInterface_eventSaveContract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveContract_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveInterface_SaveContract_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveInterface_eventSaveContract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveInterface_SaveContract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveInterface_SaveContract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveInterface::execSaveContract)
{
	P_GET_TARRAY_REF(FContracts,Z_Param_Out_DataToSave);
	P_GET_UBOOL(Z_Param_IsAsync);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveContract_Implementation(Z_Param_Out_DataToSave,Z_Param_IsAsync);
	P_NATIVE_END;
}
// End Interface USaveInterface Function SaveContract

// Begin Interface USaveInterface Function SaveCountrys
struct SaveInterface_eventSaveCountrys_Parms
{
	TArray<FCountrys> DataToSave;
	bool IsAsync;
};
void ISaveInterface::SaveCountrys(TArray<FCountrys> const& DataToSave, bool IsAsync)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SaveCountrys instead.");
}
static FName NAME_USaveInterface_SaveCountrys = FName(TEXT("SaveCountrys"));
void ISaveInterface::Execute_SaveCountrys(UObject* O, TArray<FCountrys> const& DataToSave, bool IsAsync)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveInterface::StaticClass()));
	SaveInterface_eventSaveCountrys_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveInterface_SaveCountrys);
	if (Func)
	{
		Parms.DataToSave=DataToSave;
		Parms.IsAsync=IsAsync;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveInterface*)(O->GetNativeInterfaceAddress(USaveInterface::StaticClass())))
	{
		I->SaveCountrys_Implementation(DataToSave,IsAsync);
	}
}
struct Z_Construct_UFunction_USaveInterface_SaveCountrys_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveSystem" },
		{ "ModuleRelativePath", "Public/SaveInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataToSave_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataToSave;
	static void NewProp_IsAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveInterface_SaveCountrys_Statics::NewProp_DataToSave_Inner = { "DataToSave", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCountrys, METADATA_PARAMS(0, nullptr) }; // 4030937518
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveInterface_SaveCountrys_Statics::NewProp_DataToSave = { "DataToSave", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveInterface_eventSaveCountrys_Parms, DataToSave), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataToSave_MetaData), NewProp_DataToSave_MetaData) }; // 4030937518
void Z_Construct_UFunction_USaveInterface_SaveCountrys_Statics::NewProp_IsAsync_SetBit(void* Obj)
{
	((SaveInterface_eventSaveCountrys_Parms*)Obj)->IsAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveInterface_SaveCountrys_Statics::NewProp_IsAsync = { "IsAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveInterface_eventSaveCountrys_Parms), &Z_Construct_UFunction_USaveInterface_SaveCountrys_Statics::NewProp_IsAsync_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveInterface_SaveCountrys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveCountrys_Statics::NewProp_DataToSave_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveCountrys_Statics::NewProp_DataToSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveCountrys_Statics::NewProp_IsAsync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveCountrys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveInterface_SaveCountrys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveInterface, nullptr, "SaveCountrys", nullptr, nullptr, Z_Construct_UFunction_USaveInterface_SaveCountrys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveCountrys_Statics::PropPointers), sizeof(SaveInterface_eventSaveCountrys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveCountrys_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveInterface_SaveCountrys_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveInterface_eventSaveCountrys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveInterface_SaveCountrys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveInterface_SaveCountrys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveInterface::execSaveCountrys)
{
	P_GET_TARRAY_REF(FCountrys,Z_Param_Out_DataToSave);
	P_GET_UBOOL(Z_Param_IsAsync);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveCountrys_Implementation(Z_Param_Out_DataToSave,Z_Param_IsAsync);
	P_NATIVE_END;
}
// End Interface USaveInterface Function SaveCountrys

// Begin Interface USaveInterface Function SaveDesignedProducts
struct SaveInterface_eventSaveDesignedProducts_Parms
{
	TArray<FNewDesignedProductsStruct> DataToSave;
	bool IsAsync;
};
void ISaveInterface::SaveDesignedProducts(TArray<FNewDesignedProductsStruct> const& DataToSave, bool IsAsync)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SaveDesignedProducts instead.");
}
static FName NAME_USaveInterface_SaveDesignedProducts = FName(TEXT("SaveDesignedProducts"));
void ISaveInterface::Execute_SaveDesignedProducts(UObject* O, TArray<FNewDesignedProductsStruct> const& DataToSave, bool IsAsync)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveInterface::StaticClass()));
	SaveInterface_eventSaveDesignedProducts_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveInterface_SaveDesignedProducts);
	if (Func)
	{
		Parms.DataToSave=DataToSave;
		Parms.IsAsync=IsAsync;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveInterface*)(O->GetNativeInterfaceAddress(USaveInterface::StaticClass())))
	{
		I->SaveDesignedProducts_Implementation(DataToSave,IsAsync);
	}
}
struct Z_Construct_UFunction_USaveInterface_SaveDesignedProducts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveSystem" },
		{ "ModuleRelativePath", "Public/SaveInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataToSave_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataToSave;
	static void NewProp_IsAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveInterface_SaveDesignedProducts_Statics::NewProp_DataToSave_Inner = { "DataToSave", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNewDesignedProductsStruct, METADATA_PARAMS(0, nullptr) }; // 4217424401
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveInterface_SaveDesignedProducts_Statics::NewProp_DataToSave = { "DataToSave", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveInterface_eventSaveDesignedProducts_Parms, DataToSave), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataToSave_MetaData), NewProp_DataToSave_MetaData) }; // 4217424401
void Z_Construct_UFunction_USaveInterface_SaveDesignedProducts_Statics::NewProp_IsAsync_SetBit(void* Obj)
{
	((SaveInterface_eventSaveDesignedProducts_Parms*)Obj)->IsAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveInterface_SaveDesignedProducts_Statics::NewProp_IsAsync = { "IsAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveInterface_eventSaveDesignedProducts_Parms), &Z_Construct_UFunction_USaveInterface_SaveDesignedProducts_Statics::NewProp_IsAsync_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveInterface_SaveDesignedProducts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveDesignedProducts_Statics::NewProp_DataToSave_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveDesignedProducts_Statics::NewProp_DataToSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveDesignedProducts_Statics::NewProp_IsAsync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveDesignedProducts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveInterface_SaveDesignedProducts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveInterface, nullptr, "SaveDesignedProducts", nullptr, nullptr, Z_Construct_UFunction_USaveInterface_SaveDesignedProducts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveDesignedProducts_Statics::PropPointers), sizeof(SaveInterface_eventSaveDesignedProducts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveDesignedProducts_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveInterface_SaveDesignedProducts_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveInterface_eventSaveDesignedProducts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveInterface_SaveDesignedProducts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveInterface_SaveDesignedProducts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveInterface::execSaveDesignedProducts)
{
	P_GET_TARRAY_REF(FNewDesignedProductsStruct,Z_Param_Out_DataToSave);
	P_GET_UBOOL(Z_Param_IsAsync);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveDesignedProducts_Implementation(Z_Param_Out_DataToSave,Z_Param_IsAsync);
	P_NATIVE_END;
}
// End Interface USaveInterface Function SaveDesignedProducts

// Begin Interface USaveInterface Function SaveGameDatas
struct SaveInterface_eventSaveGameDatas_Parms
{
	bool IsAsync;
};
void ISaveInterface::SaveGameDatas(bool IsAsync)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SaveGameDatas instead.");
}
static FName NAME_USaveInterface_SaveGameDatas = FName(TEXT("SaveGameDatas"));
void ISaveInterface::Execute_SaveGameDatas(UObject* O, bool IsAsync)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveInterface::StaticClass()));
	SaveInterface_eventSaveGameDatas_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveInterface_SaveGameDatas);
	if (Func)
	{
		Parms.IsAsync=IsAsync;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveInterface*)(O->GetNativeInterfaceAddress(USaveInterface::StaticClass())))
	{
		I->SaveGameDatas_Implementation(IsAsync);
	}
}
struct Z_Construct_UFunction_USaveInterface_SaveGameDatas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveSystem" },
		{ "ModuleRelativePath", "Public/SaveInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USaveInterface_SaveGameDatas_Statics::NewProp_IsAsync_SetBit(void* Obj)
{
	((SaveInterface_eventSaveGameDatas_Parms*)Obj)->IsAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveInterface_SaveGameDatas_Statics::NewProp_IsAsync = { "IsAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveInterface_eventSaveGameDatas_Parms), &Z_Construct_UFunction_USaveInterface_SaveGameDatas_Statics::NewProp_IsAsync_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveInterface_SaveGameDatas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveGameDatas_Statics::NewProp_IsAsync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveGameDatas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveInterface_SaveGameDatas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveInterface, nullptr, "SaveGameDatas", nullptr, nullptr, Z_Construct_UFunction_USaveInterface_SaveGameDatas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveGameDatas_Statics::PropPointers), sizeof(SaveInterface_eventSaveGameDatas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveGameDatas_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveInterface_SaveGameDatas_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveInterface_eventSaveGameDatas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveInterface_SaveGameDatas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveInterface_SaveGameDatas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveInterface::execSaveGameDatas)
{
	P_GET_UBOOL(Z_Param_IsAsync);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveGameDatas_Implementation(Z_Param_IsAsync);
	P_NATIVE_END;
}
// End Interface USaveInterface Function SaveGameDatas

// Begin Interface USaveInterface Function SaveGeneralData
struct SaveInterface_eventSaveGeneralData_Parms
{
	FGeneralDatas DataToSave;
	bool IsAsync;
};
void ISaveInterface::SaveGeneralData(FGeneralDatas const& DataToSave, bool IsAsync)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SaveGeneralData instead.");
}
static FName NAME_USaveInterface_SaveGeneralData = FName(TEXT("SaveGeneralData"));
void ISaveInterface::Execute_SaveGeneralData(UObject* O, FGeneralDatas const& DataToSave, bool IsAsync)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveInterface::StaticClass()));
	SaveInterface_eventSaveGeneralData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveInterface_SaveGeneralData);
	if (Func)
	{
		Parms.DataToSave=DataToSave;
		Parms.IsAsync=IsAsync;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveInterface*)(O->GetNativeInterfaceAddress(USaveInterface::StaticClass())))
	{
		I->SaveGeneralData_Implementation(DataToSave,IsAsync);
	}
}
struct Z_Construct_UFunction_USaveInterface_SaveGeneralData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveSystem" },
		{ "ModuleRelativePath", "Public/SaveInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataToSave;
	static void NewProp_IsAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveInterface_SaveGeneralData_Statics::NewProp_DataToSave = { "DataToSave", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveInterface_eventSaveGeneralData_Parms, DataToSave), Z_Construct_UScriptStruct_FGeneralDatas, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataToSave_MetaData), NewProp_DataToSave_MetaData) }; // 3846640314
void Z_Construct_UFunction_USaveInterface_SaveGeneralData_Statics::NewProp_IsAsync_SetBit(void* Obj)
{
	((SaveInterface_eventSaveGeneralData_Parms*)Obj)->IsAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveInterface_SaveGeneralData_Statics::NewProp_IsAsync = { "IsAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveInterface_eventSaveGeneralData_Parms), &Z_Construct_UFunction_USaveInterface_SaveGeneralData_Statics::NewProp_IsAsync_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveInterface_SaveGeneralData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveGeneralData_Statics::NewProp_DataToSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveGeneralData_Statics::NewProp_IsAsync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveGeneralData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveInterface_SaveGeneralData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveInterface, nullptr, "SaveGeneralData", nullptr, nullptr, Z_Construct_UFunction_USaveInterface_SaveGeneralData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveGeneralData_Statics::PropPointers), sizeof(SaveInterface_eventSaveGeneralData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveGeneralData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveInterface_SaveGeneralData_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveInterface_eventSaveGeneralData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveInterface_SaveGeneralData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveInterface_SaveGeneralData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveInterface::execSaveGeneralData)
{
	P_GET_STRUCT_REF(FGeneralDatas,Z_Param_Out_DataToSave);
	P_GET_UBOOL(Z_Param_IsAsync);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveGeneralData_Implementation(Z_Param_Out_DataToSave,Z_Param_IsAsync);
	P_NATIVE_END;
}
// End Interface USaveInterface Function SaveGeneralData

// Begin Interface USaveInterface Function SaveGlobalFactory
struct SaveInterface_eventSaveGlobalFactory_Parms
{
	TArray<FFactorys> DataToSave;
	bool IsAsync;
};
void ISaveInterface::SaveGlobalFactory(TArray<FFactorys> const& DataToSave, bool IsAsync)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SaveGlobalFactory instead.");
}
static FName NAME_USaveInterface_SaveGlobalFactory = FName(TEXT("SaveGlobalFactory"));
void ISaveInterface::Execute_SaveGlobalFactory(UObject* O, TArray<FFactorys> const& DataToSave, bool IsAsync)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveInterface::StaticClass()));
	SaveInterface_eventSaveGlobalFactory_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveInterface_SaveGlobalFactory);
	if (Func)
	{
		Parms.DataToSave=DataToSave;
		Parms.IsAsync=IsAsync;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveInterface*)(O->GetNativeInterfaceAddress(USaveInterface::StaticClass())))
	{
		I->SaveGlobalFactory_Implementation(DataToSave,IsAsync);
	}
}
struct Z_Construct_UFunction_USaveInterface_SaveGlobalFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveSystem" },
		{ "ModuleRelativePath", "Public/SaveInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataToSave_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataToSave;
	static void NewProp_IsAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveInterface_SaveGlobalFactory_Statics::NewProp_DataToSave_Inner = { "DataToSave", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFactorys, METADATA_PARAMS(0, nullptr) }; // 499567656
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveInterface_SaveGlobalFactory_Statics::NewProp_DataToSave = { "DataToSave", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveInterface_eventSaveGlobalFactory_Parms, DataToSave), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataToSave_MetaData), NewProp_DataToSave_MetaData) }; // 499567656
void Z_Construct_UFunction_USaveInterface_SaveGlobalFactory_Statics::NewProp_IsAsync_SetBit(void* Obj)
{
	((SaveInterface_eventSaveGlobalFactory_Parms*)Obj)->IsAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveInterface_SaveGlobalFactory_Statics::NewProp_IsAsync = { "IsAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveInterface_eventSaveGlobalFactory_Parms), &Z_Construct_UFunction_USaveInterface_SaveGlobalFactory_Statics::NewProp_IsAsync_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveInterface_SaveGlobalFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveGlobalFactory_Statics::NewProp_DataToSave_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveGlobalFactory_Statics::NewProp_DataToSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveGlobalFactory_Statics::NewProp_IsAsync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveGlobalFactory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveInterface_SaveGlobalFactory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveInterface, nullptr, "SaveGlobalFactory", nullptr, nullptr, Z_Construct_UFunction_USaveInterface_SaveGlobalFactory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveGlobalFactory_Statics::PropPointers), sizeof(SaveInterface_eventSaveGlobalFactory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveGlobalFactory_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveInterface_SaveGlobalFactory_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveInterface_eventSaveGlobalFactory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveInterface_SaveGlobalFactory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveInterface_SaveGlobalFactory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveInterface::execSaveGlobalFactory)
{
	P_GET_TARRAY_REF(FFactorys,Z_Param_Out_DataToSave);
	P_GET_UBOOL(Z_Param_IsAsync);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveGlobalFactory_Implementation(Z_Param_Out_DataToSave,Z_Param_IsAsync);
	P_NATIVE_END;
}
// End Interface USaveInterface Function SaveGlobalFactory

// Begin Interface USaveInterface Function SaveLastSlots
struct SaveInterface_eventSaveLastSlots_Parms
{
	FLastSlot LastSlotParam;
	bool IsAsync;
};
void ISaveInterface::SaveLastSlots(FLastSlot const& LastSlotParam, bool IsAsync)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SaveLastSlots instead.");
}
static FName NAME_USaveInterface_SaveLastSlots = FName(TEXT("SaveLastSlots"));
void ISaveInterface::Execute_SaveLastSlots(UObject* O, FLastSlot const& LastSlotParam, bool IsAsync)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveInterface::StaticClass()));
	SaveInterface_eventSaveLastSlots_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveInterface_SaveLastSlots);
	if (Func)
	{
		Parms.LastSlotParam=LastSlotParam;
		Parms.IsAsync=IsAsync;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveInterface*)(O->GetNativeInterfaceAddress(USaveInterface::StaticClass())))
	{
		I->SaveLastSlots_Implementation(LastSlotParam,IsAsync);
	}
}
struct Z_Construct_UFunction_USaveInterface_SaveLastSlots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveSystem" },
		{ "ModuleRelativePath", "Public/SaveInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSlotParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastSlotParam;
	static void NewProp_IsAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveInterface_SaveLastSlots_Statics::NewProp_LastSlotParam = { "LastSlotParam", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveInterface_eventSaveLastSlots_Parms, LastSlotParam), Z_Construct_UScriptStruct_FLastSlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSlotParam_MetaData), NewProp_LastSlotParam_MetaData) }; // 2546034666
void Z_Construct_UFunction_USaveInterface_SaveLastSlots_Statics::NewProp_IsAsync_SetBit(void* Obj)
{
	((SaveInterface_eventSaveLastSlots_Parms*)Obj)->IsAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveInterface_SaveLastSlots_Statics::NewProp_IsAsync = { "IsAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveInterface_eventSaveLastSlots_Parms), &Z_Construct_UFunction_USaveInterface_SaveLastSlots_Statics::NewProp_IsAsync_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveInterface_SaveLastSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveLastSlots_Statics::NewProp_LastSlotParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveLastSlots_Statics::NewProp_IsAsync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveLastSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveInterface_SaveLastSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveInterface, nullptr, "SaveLastSlots", nullptr, nullptr, Z_Construct_UFunction_USaveInterface_SaveLastSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveLastSlots_Statics::PropPointers), sizeof(SaveInterface_eventSaveLastSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveLastSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveInterface_SaveLastSlots_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveInterface_eventSaveLastSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveInterface_SaveLastSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveInterface_SaveLastSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveInterface::execSaveLastSlots)
{
	P_GET_STRUCT_REF(FLastSlot,Z_Param_Out_LastSlotParam);
	P_GET_UBOOL(Z_Param_IsAsync);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveLastSlots_Implementation(Z_Param_Out_LastSlotParam,Z_Param_IsAsync);
	P_NATIVE_END;
}
// End Interface USaveInterface Function SaveLastSlots

// Begin Interface USaveInterface Function SaveMyFactorysData
struct SaveInterface_eventSaveMyFactorysData_Parms
{
	TArray<FMyFactorys> DataToSave;
	bool IsAsync;
};
void ISaveInterface::SaveMyFactorysData(TArray<FMyFactorys> const& DataToSave, bool IsAsync)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SaveMyFactorysData instead.");
}
static FName NAME_USaveInterface_SaveMyFactorysData = FName(TEXT("SaveMyFactorysData"));
void ISaveInterface::Execute_SaveMyFactorysData(UObject* O, TArray<FMyFactorys> const& DataToSave, bool IsAsync)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveInterface::StaticClass()));
	SaveInterface_eventSaveMyFactorysData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveInterface_SaveMyFactorysData);
	if (Func)
	{
		Parms.DataToSave=DataToSave;
		Parms.IsAsync=IsAsync;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveInterface*)(O->GetNativeInterfaceAddress(USaveInterface::StaticClass())))
	{
		I->SaveMyFactorysData_Implementation(DataToSave,IsAsync);
	}
}
struct Z_Construct_UFunction_USaveInterface_SaveMyFactorysData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveSystem" },
		{ "ModuleRelativePath", "Public/SaveInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataToSave_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataToSave;
	static void NewProp_IsAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveInterface_SaveMyFactorysData_Statics::NewProp_DataToSave_Inner = { "DataToSave", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMyFactorys, METADATA_PARAMS(0, nullptr) }; // 827706395
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveInterface_SaveMyFactorysData_Statics::NewProp_DataToSave = { "DataToSave", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveInterface_eventSaveMyFactorysData_Parms, DataToSave), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataToSave_MetaData), NewProp_DataToSave_MetaData) }; // 827706395
void Z_Construct_UFunction_USaveInterface_SaveMyFactorysData_Statics::NewProp_IsAsync_SetBit(void* Obj)
{
	((SaveInterface_eventSaveMyFactorysData_Parms*)Obj)->IsAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveInterface_SaveMyFactorysData_Statics::NewProp_IsAsync = { "IsAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveInterface_eventSaveMyFactorysData_Parms), &Z_Construct_UFunction_USaveInterface_SaveMyFactorysData_Statics::NewProp_IsAsync_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveInterface_SaveMyFactorysData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveMyFactorysData_Statics::NewProp_DataToSave_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveMyFactorysData_Statics::NewProp_DataToSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveMyFactorysData_Statics::NewProp_IsAsync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveMyFactorysData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveInterface_SaveMyFactorysData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveInterface, nullptr, "SaveMyFactorysData", nullptr, nullptr, Z_Construct_UFunction_USaveInterface_SaveMyFactorysData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveMyFactorysData_Statics::PropPointers), sizeof(SaveInterface_eventSaveMyFactorysData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveMyFactorysData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveInterface_SaveMyFactorysData_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveInterface_eventSaveMyFactorysData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveInterface_SaveMyFactorysData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveInterface_SaveMyFactorysData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveInterface::execSaveMyFactorysData)
{
	P_GET_TARRAY_REF(FMyFactorys,Z_Param_Out_DataToSave);
	P_GET_UBOOL(Z_Param_IsAsync);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveMyFactorysData_Implementation(Z_Param_Out_DataToSave,Z_Param_IsAsync);
	P_NATIVE_END;
}
// End Interface USaveInterface Function SaveMyFactorysData

// Begin Interface USaveInterface Function SaveNew
struct SaveInterface_eventSaveNew_Parms
{
	TArray<FNews> DataToSave;
	bool IsAsync;
};
void ISaveInterface::SaveNew(TArray<FNews> const& DataToSave, bool IsAsync)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SaveNew instead.");
}
static FName NAME_USaveInterface_SaveNew = FName(TEXT("SaveNew"));
void ISaveInterface::Execute_SaveNew(UObject* O, TArray<FNews> const& DataToSave, bool IsAsync)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveInterface::StaticClass()));
	SaveInterface_eventSaveNew_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveInterface_SaveNew);
	if (Func)
	{
		Parms.DataToSave=DataToSave;
		Parms.IsAsync=IsAsync;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveInterface*)(O->GetNativeInterfaceAddress(USaveInterface::StaticClass())))
	{
		I->SaveNew_Implementation(DataToSave,IsAsync);
	}
}
struct Z_Construct_UFunction_USaveInterface_SaveNew_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveSystem" },
		{ "ModuleRelativePath", "Public/SaveInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataToSave_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataToSave;
	static void NewProp_IsAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveInterface_SaveNew_Statics::NewProp_DataToSave_Inner = { "DataToSave", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNews, METADATA_PARAMS(0, nullptr) }; // 3825443321
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveInterface_SaveNew_Statics::NewProp_DataToSave = { "DataToSave", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveInterface_eventSaveNew_Parms, DataToSave), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataToSave_MetaData), NewProp_DataToSave_MetaData) }; // 3825443321
void Z_Construct_UFunction_USaveInterface_SaveNew_Statics::NewProp_IsAsync_SetBit(void* Obj)
{
	((SaveInterface_eventSaveNew_Parms*)Obj)->IsAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveInterface_SaveNew_Statics::NewProp_IsAsync = { "IsAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveInterface_eventSaveNew_Parms), &Z_Construct_UFunction_USaveInterface_SaveNew_Statics::NewProp_IsAsync_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveInterface_SaveNew_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveNew_Statics::NewProp_DataToSave_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveNew_Statics::NewProp_DataToSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveNew_Statics::NewProp_IsAsync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveNew_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveInterface_SaveNew_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveInterface, nullptr, "SaveNew", nullptr, nullptr, Z_Construct_UFunction_USaveInterface_SaveNew_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveNew_Statics::PropPointers), sizeof(SaveInterface_eventSaveNew_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveNew_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveInterface_SaveNew_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveInterface_eventSaveNew_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveInterface_SaveNew()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveInterface_SaveNew_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveInterface::execSaveNew)
{
	P_GET_TARRAY_REF(FNews,Z_Param_Out_DataToSave);
	P_GET_UBOOL(Z_Param_IsAsync);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveNew_Implementation(Z_Param_Out_DataToSave,Z_Param_IsAsync);
	P_NATIVE_END;
}
// End Interface USaveInterface Function SaveNew

// Begin Interface USaveInterface Function SaveRebellion
struct SaveInterface_eventSaveRebellion_Parms
{
	TArray<FRebellion> DataToSave;
	bool IsAsync;
};
void ISaveInterface::SaveRebellion(TArray<FRebellion> const& DataToSave, bool IsAsync)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SaveRebellion instead.");
}
static FName NAME_USaveInterface_SaveRebellion = FName(TEXT("SaveRebellion"));
void ISaveInterface::Execute_SaveRebellion(UObject* O, TArray<FRebellion> const& DataToSave, bool IsAsync)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveInterface::StaticClass()));
	SaveInterface_eventSaveRebellion_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveInterface_SaveRebellion);
	if (Func)
	{
		Parms.DataToSave=DataToSave;
		Parms.IsAsync=IsAsync;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveInterface*)(O->GetNativeInterfaceAddress(USaveInterface::StaticClass())))
	{
		I->SaveRebellion_Implementation(DataToSave,IsAsync);
	}
}
struct Z_Construct_UFunction_USaveInterface_SaveRebellion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveSystem" },
		{ "ModuleRelativePath", "Public/SaveInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataToSave_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataToSave;
	static void NewProp_IsAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveInterface_SaveRebellion_Statics::NewProp_DataToSave_Inner = { "DataToSave", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRebellion, METADATA_PARAMS(0, nullptr) }; // 842799746
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveInterface_SaveRebellion_Statics::NewProp_DataToSave = { "DataToSave", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveInterface_eventSaveRebellion_Parms, DataToSave), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataToSave_MetaData), NewProp_DataToSave_MetaData) }; // 842799746
void Z_Construct_UFunction_USaveInterface_SaveRebellion_Statics::NewProp_IsAsync_SetBit(void* Obj)
{
	((SaveInterface_eventSaveRebellion_Parms*)Obj)->IsAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveInterface_SaveRebellion_Statics::NewProp_IsAsync = { "IsAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveInterface_eventSaveRebellion_Parms), &Z_Construct_UFunction_USaveInterface_SaveRebellion_Statics::NewProp_IsAsync_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveInterface_SaveRebellion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveRebellion_Statics::NewProp_DataToSave_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveRebellion_Statics::NewProp_DataToSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveRebellion_Statics::NewProp_IsAsync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveRebellion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveInterface_SaveRebellion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveInterface, nullptr, "SaveRebellion", nullptr, nullptr, Z_Construct_UFunction_USaveInterface_SaveRebellion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveRebellion_Statics::PropPointers), sizeof(SaveInterface_eventSaveRebellion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveRebellion_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveInterface_SaveRebellion_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveInterface_eventSaveRebellion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveInterface_SaveRebellion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveInterface_SaveRebellion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveInterface::execSaveRebellion)
{
	P_GET_TARRAY_REF(FRebellion,Z_Param_Out_DataToSave);
	P_GET_UBOOL(Z_Param_IsAsync);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveRebellion_Implementation(Z_Param_Out_DataToSave,Z_Param_IsAsync);
	P_NATIVE_END;
}
// End Interface USaveInterface Function SaveRebellion

// Begin Interface USaveInterface Function SaveResearchProducts
struct SaveInterface_eventSaveResearchProducts_Parms
{
	TArray<FResearchItems> DataToSave;
	bool IsAsync;
};
void ISaveInterface::SaveResearchProducts(TArray<FResearchItems> const& DataToSave, bool IsAsync)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SaveResearchProducts instead.");
}
static FName NAME_USaveInterface_SaveResearchProducts = FName(TEXT("SaveResearchProducts"));
void ISaveInterface::Execute_SaveResearchProducts(UObject* O, TArray<FResearchItems> const& DataToSave, bool IsAsync)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveInterface::StaticClass()));
	SaveInterface_eventSaveResearchProducts_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveInterface_SaveResearchProducts);
	if (Func)
	{
		Parms.DataToSave=DataToSave;
		Parms.IsAsync=IsAsync;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveInterface*)(O->GetNativeInterfaceAddress(USaveInterface::StaticClass())))
	{
		I->SaveResearchProducts_Implementation(DataToSave,IsAsync);
	}
}
struct Z_Construct_UFunction_USaveInterface_SaveResearchProducts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveSystem" },
		{ "ModuleRelativePath", "Public/SaveInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataToSave_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataToSave;
	static void NewProp_IsAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveInterface_SaveResearchProducts_Statics::NewProp_DataToSave_Inner = { "DataToSave", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FResearchItems, METADATA_PARAMS(0, nullptr) }; // 1047416769
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveInterface_SaveResearchProducts_Statics::NewProp_DataToSave = { "DataToSave", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveInterface_eventSaveResearchProducts_Parms, DataToSave), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataToSave_MetaData), NewProp_DataToSave_MetaData) }; // 1047416769
void Z_Construct_UFunction_USaveInterface_SaveResearchProducts_Statics::NewProp_IsAsync_SetBit(void* Obj)
{
	((SaveInterface_eventSaveResearchProducts_Parms*)Obj)->IsAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveInterface_SaveResearchProducts_Statics::NewProp_IsAsync = { "IsAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveInterface_eventSaveResearchProducts_Parms), &Z_Construct_UFunction_USaveInterface_SaveResearchProducts_Statics::NewProp_IsAsync_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveInterface_SaveResearchProducts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveResearchProducts_Statics::NewProp_DataToSave_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveResearchProducts_Statics::NewProp_DataToSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveResearchProducts_Statics::NewProp_IsAsync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveResearchProducts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveInterface_SaveResearchProducts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveInterface, nullptr, "SaveResearchProducts", nullptr, nullptr, Z_Construct_UFunction_USaveInterface_SaveResearchProducts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveResearchProducts_Statics::PropPointers), sizeof(SaveInterface_eventSaveResearchProducts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveResearchProducts_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveInterface_SaveResearchProducts_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveInterface_eventSaveResearchProducts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveInterface_SaveResearchProducts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveInterface_SaveResearchProducts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveInterface::execSaveResearchProducts)
{
	P_GET_TARRAY_REF(FResearchItems,Z_Param_Out_DataToSave);
	P_GET_UBOOL(Z_Param_IsAsync);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveResearchProducts_Implementation(Z_Param_Out_DataToSave,Z_Param_IsAsync);
	P_NATIVE_END;
}
// End Interface USaveInterface Function SaveResearchProducts

// Begin Interface USaveInterface Function SaveSlots
struct SaveInterface_eventSaveSlots_Parms
{
	bool IsAsync;
};
void ISaveInterface::SaveSlots(bool IsAsync)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SaveSlots instead.");
}
static FName NAME_USaveInterface_SaveSlots = FName(TEXT("SaveSlots"));
void ISaveInterface::Execute_SaveSlots(UObject* O, bool IsAsync)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveInterface::StaticClass()));
	SaveInterface_eventSaveSlots_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveInterface_SaveSlots);
	if (Func)
	{
		Parms.IsAsync=IsAsync;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveInterface*)(O->GetNativeInterfaceAddress(USaveInterface::StaticClass())))
	{
		I->SaveSlots_Implementation(IsAsync);
	}
}
struct Z_Construct_UFunction_USaveInterface_SaveSlots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveSystem" },
		{ "ModuleRelativePath", "Public/SaveInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USaveInterface_SaveSlots_Statics::NewProp_IsAsync_SetBit(void* Obj)
{
	((SaveInterface_eventSaveSlots_Parms*)Obj)->IsAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveInterface_SaveSlots_Statics::NewProp_IsAsync = { "IsAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveInterface_eventSaveSlots_Parms), &Z_Construct_UFunction_USaveInterface_SaveSlots_Statics::NewProp_IsAsync_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveInterface_SaveSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveSlots_Statics::NewProp_IsAsync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveInterface_SaveSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveInterface, nullptr, "SaveSlots", nullptr, nullptr, Z_Construct_UFunction_USaveInterface_SaveSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveSlots_Statics::PropPointers), sizeof(SaveInterface_eventSaveSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveInterface_SaveSlots_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveInterface_eventSaveSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveInterface_SaveSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveInterface_SaveSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveInterface::execSaveSlots)
{
	P_GET_UBOOL(Z_Param_IsAsync);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveSlots_Implementation(Z_Param_IsAsync);
	P_NATIVE_END;
}
// End Interface USaveInterface Function SaveSlots

// Begin Interface USaveInterface Function SaveWars
struct SaveInterface_eventSaveWars_Parms
{
	TArray<FCurrentWars> DataToSave;
	bool IsAsync;
};
void ISaveInterface::SaveWars(TArray<FCurrentWars> const& DataToSave, bool IsAsync)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SaveWars instead.");
}
static FName NAME_USaveInterface_SaveWars = FName(TEXT("SaveWars"));
void ISaveInterface::Execute_SaveWars(UObject* O, TArray<FCurrentWars> const& DataToSave, bool IsAsync)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveInterface::StaticClass()));
	SaveInterface_eventSaveWars_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveInterface_SaveWars);
	if (Func)
	{
		Parms.DataToSave=DataToSave;
		Parms.IsAsync=IsAsync;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveInterface*)(O->GetNativeInterfaceAddress(USaveInterface::StaticClass())))
	{
		I->SaveWars_Implementation(DataToSave,IsAsync);
	}
}
struct Z_Construct_UFunction_USaveInterface_SaveWars_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveSystem" },
		{ "ModuleRelativePath", "Public/SaveInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataToSave_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataToSave;
	static void NewProp_IsAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveInterface_SaveWars_Statics::NewProp_DataToSave_Inner = { "DataToSave", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCurrentWars, METADATA_PARAMS(0, nullptr) }; // 849588056
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveInterface_SaveWars_Statics::NewProp_DataToSave = { "DataToSave", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveInterface_eventSaveWars_Parms, DataToSave), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataToSave_MetaData), NewProp_DataToSave_MetaData) }; // 849588056
void Z_Construct_UFunction_USaveInterface_SaveWars_Statics::NewProp_IsAsync_SetBit(void* Obj)
{
	((SaveInterface_eventSaveWars_Parms*)Obj)->IsAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveInterface_SaveWars_Statics::NewProp_IsAsync = { "IsAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveInterface_eventSaveWars_Parms), &Z_Construct_UFunction_USaveInterface_SaveWars_Statics::NewProp_IsAsync_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveInterface_SaveWars_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveWars_Statics::NewProp_DataToSave_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveWars_Statics::NewProp_DataToSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_SaveWars_Statics::NewProp_IsAsync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveWars_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveInterface_SaveWars_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveInterface, nullptr, "SaveWars", nullptr, nullptr, Z_Construct_UFunction_USaveInterface_SaveWars_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveWars_Statics::PropPointers), sizeof(SaveInterface_eventSaveWars_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_SaveWars_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveInterface_SaveWars_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveInterface_eventSaveWars_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveInterface_SaveWars()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveInterface_SaveWars_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveInterface::execSaveWars)
{
	P_GET_TARRAY_REF(FCurrentWars,Z_Param_Out_DataToSave);
	P_GET_UBOOL(Z_Param_IsAsync);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveWars_Implementation(Z_Param_Out_DataToSave,Z_Param_IsAsync);
	P_NATIVE_END;
}
// End Interface USaveInterface Function SaveWars

// Begin Interface USaveInterface
void USaveInterface::StaticRegisterNativesUSaveInterface()
{
	UClass* Class = USaveInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckLastSavedSlots", &ISaveInterface::execCheckLastSavedSlots },
		{ "GetGameData", &ISaveInterface::execGetGameData },
		{ "LoadSavedGameData", &ISaveInterface::execLoadSavedGameData },
		{ "SaveContract", &ISaveInterface::execSaveContract },
		{ "SaveCountrys", &ISaveInterface::execSaveCountrys },
		{ "SaveDesignedProducts", &ISaveInterface::execSaveDesignedProducts },
		{ "SaveGameDatas", &ISaveInterface::execSaveGameDatas },
		{ "SaveGeneralData", &ISaveInterface::execSaveGeneralData },
		{ "SaveGlobalFactory", &ISaveInterface::execSaveGlobalFactory },
		{ "SaveLastSlots", &ISaveInterface::execSaveLastSlots },
		{ "SaveMyFactorysData", &ISaveInterface::execSaveMyFactorysData },
		{ "SaveNew", &ISaveInterface::execSaveNew },
		{ "SaveRebellion", &ISaveInterface::execSaveRebellion },
		{ "SaveResearchProducts", &ISaveInterface::execSaveResearchProducts },
		{ "SaveSlots", &ISaveInterface::execSaveSlots },
		{ "SaveWars", &ISaveInterface::execSaveWars },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveInterface);
UClass* Z_Construct_UClass_USaveInterface_NoRegister()
{
	return USaveInterface::StaticClass();
}
struct Z_Construct_UClass_USaveInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveInterface_CheckLastSavedSlots, "CheckLastSavedSlots" }, // 2726771892
		{ &Z_Construct_UFunction_USaveInterface_GetGameData, "GetGameData" }, // 1753472743
		{ &Z_Construct_UFunction_USaveInterface_LoadSavedGameData, "LoadSavedGameData" }, // 3723086465
		{ &Z_Construct_UFunction_USaveInterface_SaveContract, "SaveContract" }, // 1712358948
		{ &Z_Construct_UFunction_USaveInterface_SaveCountrys, "SaveCountrys" }, // 2897598851
		{ &Z_Construct_UFunction_USaveInterface_SaveDesignedProducts, "SaveDesignedProducts" }, // 2376391068
		{ &Z_Construct_UFunction_USaveInterface_SaveGameDatas, "SaveGameDatas" }, // 415340370
		{ &Z_Construct_UFunction_USaveInterface_SaveGeneralData, "SaveGeneralData" }, // 3973819426
		{ &Z_Construct_UFunction_USaveInterface_SaveGlobalFactory, "SaveGlobalFactory" }, // 3291209160
		{ &Z_Construct_UFunction_USaveInterface_SaveLastSlots, "SaveLastSlots" }, // 3231737680
		{ &Z_Construct_UFunction_USaveInterface_SaveMyFactorysData, "SaveMyFactorysData" }, // 2135816707
		{ &Z_Construct_UFunction_USaveInterface_SaveNew, "SaveNew" }, // 4177195678
		{ &Z_Construct_UFunction_USaveInterface_SaveRebellion, "SaveRebellion" }, // 2239596154
		{ &Z_Construct_UFunction_USaveInterface_SaveResearchProducts, "SaveResearchProducts" }, // 4101650824
		{ &Z_Construct_UFunction_USaveInterface_SaveSlots, "SaveSlots" }, // 3348537046
		{ &Z_Construct_UFunction_USaveInterface_SaveWars, "SaveWars" }, // 2127031667
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISaveInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USaveInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_WarIndustry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveInterface_Statics::ClassParams = {
	&USaveInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveInterface()
{
	if (!Z_Registration_Info_UClass_USaveInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveInterface.OuterSingleton, Z_Construct_UClass_USaveInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveInterface.OuterSingleton;
}
template<> WARINDUSTRY_API UClass* StaticClass<USaveInterface>()
{
	return USaveInterface::StaticClass();
}
USaveInterface::USaveInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveInterface);
USaveInterface::~USaveInterface() {}
// End Interface USaveInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_SaveInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveInterface, USaveInterface::StaticClass, TEXT("USaveInterface"), &Z_Registration_Info_UClass_USaveInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveInterface), 2271407248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_SaveInterface_h_3144189701(TEXT("/Script/WarIndustry"),
	Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_SaveInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alper_Documents_Unreal_Projects_WarIndustry_Source_WarIndustry_Public_SaveInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
