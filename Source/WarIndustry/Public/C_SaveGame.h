// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "AllStructs.h"

#include "C_SaveGame.generated.h"

/**
 * 
 */
UCLASS()
class WARINDUSTRY_API UC_SaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	FGeneralDatas GeneralDatas;

	UPROPERTY(BlueprintReadWrite)
	FLastSlot LastSlot;

	UPROPERTY(BlueprintReadWrite)
	TArray<FCountrys> Countrys;

	UPROPERTY(BlueprintReadWrite)
	TArray<FFactorys> Factorys;

	UPROPERTY(BlueprintReadWrite)
	TArray<FMyFactorys> MyFactorys;

	UPROPERTY(BlueprintReadWrite)
	TArray<FResearchItems> ResearchTimes;

	UPROPERTY(BlueprintReadWrite)
	TArray<FContracts> Contracts;

	UPROPERTY(BlueprintReadWrite)
	TArray<FRebellion> Rebellion;

	UPROPERTY(BlueprintReadWrite)
	TArray<FCurrentWars> War;

	UPROPERTY(BlueprintReadWrite)
	TArray<FNews> AllNews;

	UPROPERTY(BlueprintReadWrite)
	TArray<FNewDesignedProductsStruct> DesignedProducts;

};
