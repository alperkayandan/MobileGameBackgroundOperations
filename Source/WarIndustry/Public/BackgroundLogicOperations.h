// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AllStructs.h"

#include "BackgroundLogicOperations.generated.h"


UCLASS()
class WARINDUSTRY_API UBackgroundLogicOperations : public UObject
{
	GENERATED_BODY()

	public:

		UFUNCTION(BlueprintCallable, Category = "AsyncBackgroundLogic")
		static UBackgroundLogicOperations* CreateAsyncBackgroundLogicOperations();

		UFUNCTION(BlueprintCallable, Category = "AsyncBackgroundLogic")
		void DistributeProducedWeapons(UObject* WorldContextObject, TArray<FFactorys>& GlobalFactorysData);

	private:

		void ControlGlobalFactorysProducedWeapons(UObject* WorldContextObject, TArray<FFactorys>& GlobalFactorysData);

	
};
