// Fill out your copyright notice in the Description page of Project Settings.


#include "BackgroundLogicOperations.h"
#include "C_GameInstance.h"

#include "Kismet/GameplayStatics.h"

UBackgroundLogicOperations* UBackgroundLogicOperations::CreateAsyncBackgroundLogicOperations() {
	return NewObject<UBackgroundLogicOperations>();
}

void UBackgroundLogicOperations::DistributeProducedWeapons(UObject* WorldContextObject, TArray<FFactorys>& GlobalFactorysData) {

	UC_GameInstance* GI = Cast<UC_GameInstance>(UGameplayStatics::GetGameInstance(WorldContextObject));
	GI->LoadSaveGame();
	FGeneralDatas& GeneralDatas = GI->GetCurrentSaveData()->GeneralDatas;
	GlobalFactorysData = GI->GetCurrentSaveData()->Factorys;

	if (FDateTime::UtcNow() >= GeneralDatas.NextTimeControlGlobalFactories) {

		ControlGlobalFactorysProducedWeapons(WorldContextObject, GlobalFactorysData);
		GeneralDatas.NextTimeControlGlobalFactories = FDateTime::UtcNow() + FTimespan::FromHours(FMath::RandRange(3, 12));
	}

}

void UBackgroundLogicOperations::ControlGlobalFactorysProducedWeapons(UObject* WorldContextObject, TArray<FFactorys>& GlobalFactorysData) {

	UC_GameInstance* GI = Cast<UC_GameInstance>(UGameplayStatics::GetGameInstance(WorldContextObject));
	GI->LoadSaveGame();
	TArray<FNewDesignedProductsStruct>& DesignedProductsData = GI->GetCurrentSaveData()->DesignedProducts;
	FDateTime CurrentTime = FDateTime::UtcNow();

	for (FFactorys& FactoryData : GlobalFactorysData) {

		TMap<int32, FDateTime>& ProductIndexsAndLastTimeCollected = FactoryData.LastTimeCollectedProducts;
		TArray<int32> AllProductIndexs;
		ProductIndexsAndLastTimeCollected.GetKeys(AllProductIndexs);
		float FactoryProductionSpeedMultiplier = FactoryData.ProductionSpeedMultiplier;

		for (int32 DesignedProductIndex : AllProductIndexs) {
			
			FDateTime* LastTimeProductCollected = ProductIndexsAndLastTimeCollected.Find(DesignedProductIndex);

			if (CurrentTime >= *LastTimeProductCollected + (DesignedProductsData[DesignedProductIndex].ProductionTime / FactoryProductionSpeedMultiplier)) {
				
				double SecondPassed = (CurrentTime - *LastTimeProductCollected).GetTotalSeconds();
				DesignedProductsData[DesignedProductIndex].ProducedUnits += FMath::FloorToInt((SecondPassed * ((DesignedProductsData[DesignedProductIndex].ProductionTime.GetTotalSeconds()) / FactoryProductionSpeedMultiplier)));
				ProductIndexsAndLastTimeCollected.Add(DesignedProductIndex, CurrentTime);

			}

		}

	}

}