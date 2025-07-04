// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "C_SaveGame.h"

#include "C_GameInstance.generated.h"

/**
 * 
 */
UCLASS()
class WARINDUSTRY_API UC_GameInstance : public UGameInstance
{
	GENERATED_BODY()


public:
	UPROPERTY(BlueprintReadWrite)
	UC_SaveGame* CurrentSaveData;
	
	UFUNCTION(BlueprintCallable)
	void LoadSaveGame();

	UFUNCTION(BlueprintCallable)
	UC_SaveGame* GetCurrentSaveData() const;
};
