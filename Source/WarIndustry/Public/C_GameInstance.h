// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "C_SaveGame.h"
#include "SaveInterface.h"

#include "C_GameInstance.generated.h"

/**
 * 
 */
UCLASS()
class WARINDUSTRY_API UC_GameInstance : public UGameInstance, public ISaveInterface
{
	GENERATED_BODY()


public:
	UPROPERTY(BlueprintReadWrite)
	UC_SaveGame* CurrentSaveData;
	
	/*UFUNCTION(BlueprintCallable)
	void LoadSaveGame();

	UFUNCTION(BlueprintCallable)
	void SaveGame(UC_SaveGame* SaveGameObject, bool Async);*/

	virtual void GetGameData_Implementation(UC_SaveGame*& SaveGameData) override;
	virtual void LoadSavedGameData_Implementation(bool IsAsync = false) override;
	virtual void SaveGameDatas_Implementation(bool IsAsync = false) override;
	virtual void SaveGeneralData_Implementation(const FGeneralDatas& SaveGeneralDatas, bool IsAsync = false) override;
	virtual void SaveCountrys_Implementation(const TArray<FCountrys>& SaveCountrys, bool IsAsync = false) override;
	virtual void SaveDesignedProducts_Implementation(const TArray<FNewDesignedProductsStruct>& SaveDesignedProducts, bool IsAsync = false) override;
	virtual void SaveGlobalFactory_Implementation(const TArray<FFactorys>& SaveGlobalFactorys, bool IsAsync = false) override;
	virtual void SaveMyFactorysData_Implementation(const TArray<FMyFactorys>& SaveMyFactorys, bool IsAsync = false) override;
	virtual void SaveResearchProducts_Implementation(const TArray<FResearchItems>& SaveResearchItems, bool IsAsync = false) override;
	virtual void SaveContract_Implementation(const TArray<FContracts>& SaveContracts, bool IsAsync = false) override;
	virtual void SaveRebellion_Implementation(const TArray<FRebellion>& SaveRebellions, bool IsAsync = false) override;
	virtual void SaveWars_Implementation(const TArray<FCurrentWars>& SaveWars, bool IsAsync = false) override;
	virtual void SaveNew_Implementation(const TArray<FNews>& SaveNews, bool IsAsync = false) override;
	virtual void CheckLastSavedSlots_Implementation(bool IsAsync = false) override;
	virtual void SaveSlots_Implementation(bool IsAsync = false) override;
	virtual void SaveLastSlots_Implementation(const FLastSlot& LastSlotParam, bool IsAsync = false) override;
};
