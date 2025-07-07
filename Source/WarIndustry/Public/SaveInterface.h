
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AllStructs.h"

#include "SaveInterface.generated.h" 

UINTERFACE(Blueprintable)
class WARINDUSTRY_API USaveInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class WARINDUSTRY_API ISaveInterface
{

	GENERATED_BODY()

	public:

		UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SaveSystem")
		void SaveGameDatas(bool IsAsync);

		UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SaveSystem")
		void LoadSavedGameData(bool IsAsync);

		UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SaveSystem")
		void GetGameData(UC_SaveGame*& SaveGameData);

		UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SaveSystem")
		void SaveGeneralData(const FGeneralDatas& DataToSave, bool IsAsync);

		UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SaveSystem")
		void SaveCountrys(const TArray<FCountrys>& DataToSave, bool IsAsync);

		UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SaveSystem")
		void SaveDesignedProducts(const TArray<FNewDesignedProductsStruct>& DataToSave, bool IsAsync);

		UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SaveSystem")
		void SaveGlobalFactory(const TArray<FFactorys>& DataToSave, bool IsAsync);

		UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SaveSystem")
		void SaveMyFactorysData(const TArray<FMyFactorys>& DataToSave, bool IsAsync);

		UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SaveSystem")
		void SaveResearchProducts(const TArray<FResearchItems>& DataToSave, bool IsAsync);

		UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SaveSystem")
		void SaveContract(const TArray<FContracts>& DataToSave, bool IsAsync);

		UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SaveSystem")
		void SaveRebellion(const TArray<FRebellion>& DataToSave, bool IsAsync);

		UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SaveSystem")
		void SaveWars(const TArray<FCurrentWars>& DataToSave, bool IsAsync);

		UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SaveSystem")
		void SaveNew(const TArray<FNews>& DataToSave, bool IsAsync);

		UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SaveSystem")
		void CheckLastSavedSlots(bool IsAsync);

		UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SaveSystem")
		void SaveSlots(bool IsAsync);

		UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SaveSystem")
		void SaveLastSlots(const FLastSlot& LastSlotParam, bool IsAsync);


};
