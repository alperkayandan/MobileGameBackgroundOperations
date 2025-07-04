// Fill out your copyright notice in the Description page of Project Settings.


#include "C_GameInstance.h"
#include "Kismet/GameplayStatics.h"

void UC_GameInstance::LoadSaveGame()
{
    if (UGameplayStatics::DoesSaveGameExist("GeneralData1", 0))
    {
        USaveGame* Loaded = UGameplayStatics::LoadGameFromSlot("GeneralData1", 0);
        CurrentSaveData = Cast<UC_SaveGame>(Loaded);

        if (CurrentSaveData && CurrentSaveData->DesignedProducts.Num() > 0)
        {
            UE_LOG(LogTemp, Warning, TEXT("alper :%s"), *CurrentSaveData->DesignedProducts[0].Type.ToString());
        }
            
    }
}

UC_SaveGame* UC_GameInstance::GetCurrentSaveData() const{
    return CurrentSaveData;
}
