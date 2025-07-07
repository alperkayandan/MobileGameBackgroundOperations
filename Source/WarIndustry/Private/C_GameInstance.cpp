// Fill out your copyright notice in the Description page of Project Settings.


#include "C_GameInstance.h"
#include "Kismet/GameplayStatics.h"

TArray<FString> SaveSlotNames = {"GeneralData1", "GeneralData2", "GeneralData3"};
uint8 SelectedSaveIndex;

void UC_GameInstance::LoadSavedGameData_Implementation(bool IsAsync)
{
    if (UGameplayStatics::DoesSaveGameExist("GeneralData1", 0))
    {
        if (IsAsync) {

            Async(EAsyncExecution::ThreadPool, [this]()
                {
                    CurrentSaveData = Cast<UC_SaveGame>(UGameplayStatics::LoadGameFromSlot(TEXT("GeneralData1"), 0));
                });
            
        }
        else {
            CurrentSaveData = Cast<UC_SaveGame>(UGameplayStatics::LoadGameFromSlot(TEXT("GeneralData1"), 0));
        }
            
    }
    else {
            CurrentSaveData = Cast<UC_SaveGame>(UGameplayStatics::CreateSaveGameObject(UC_SaveGame::StaticClass()));
    }
}

void UC_GameInstance::SaveGameDatas_Implementation(bool IsAsync) {

    if (IsAsync) {

        Async(EAsyncExecution::Thread, [this]()
            {
                // Save iþlemi - bu threadde çalýþýyor
                bool bSuccess = UGameplayStatics::SaveGameToSlot(CurrentSaveData, TEXT("GeneralData1"), 0);

                // Log veya Main Thread iþlemi yapmak için main thread'e geri dön
                AsyncTask(ENamedThreads::GameThread, [bSuccess]()
                    {
                        if (bSuccess)
                        {
                            UE_LOG(LogTemp, Log, TEXT("Async save baþarýlý."));
                        }
                        else
                        {
                            UE_LOG(LogTemp, Error, TEXT("Async save baþarýsýz."));
                        }

                    });
               
            });
    }
    else {

        bool bSuccess = UGameplayStatics::SaveGameToSlot(CurrentSaveData, TEXT("GeneralData1"), 0);

        if (bSuccess)
        {
            UE_LOG(LogTemp, Log, TEXT("Save basarili."));
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Save basarisiz."));
        }
    }

}

void UC_GameInstance::GetGameData_Implementation(UC_SaveGame*& SaveGameData) {
    SaveGameData = CurrentSaveData;
}

/*void UC_GameInstance::SaveGame(UC_SaveGame* SaveGameObject, bool IsAsync) {

    if (IsAsync) {

        SaveGameObject->AddToRoot();

        Async(EAsyncExecution::Thread, [SaveGameObject]()
            {
                // Save iþlemi - bu threadde çalýþýyor
                bool bSuccess = UGameplayStatics::SaveGameToSlot(SaveGameObject, TEXT("GeneralData1"), 0);
               
                // Log veya Main Thread iþlemi yapmak için main thread'e geri dön
                AsyncTask(ENamedThreads::GameThread, [bSuccess]()
                {
                        if (bSuccess)
                        {
                            UE_LOG(LogTemp, Log, TEXT("Async save baþarýlý."));
                        }
                        else
                        {
                            UE_LOG(LogTemp, Error, TEXT("Async save baþarýsýz."));
                        }
                        
                });
                SaveGameObject->RemoveFromRoot();
        });
    }
    else {  
            bool bSuccess = UGameplayStatics::SaveGameToSlot(SaveGameObject, TEXT("GeneralData1"), 0);

                if (bSuccess)
                {
                    UE_LOG(LogTemp, Log, TEXT("Save basarili."));
                }
                else
                {
                    UE_LOG(LogTemp, Error, TEXT("Save basarisiz."));
                }
    }

}*/

void UC_GameInstance::SaveGeneralData_Implementation(const FGeneralDatas& SaveGeneralDatas, bool IsAsync) {
    //GameObject = Cast<UC_SaveGame>(UGameplayStatics::CreateSaveGameObject(UC_SaveGame::StaticClass()));
    CurrentSaveData->GeneralDatas = SaveGeneralDatas;
    SaveGameDatas_Implementation(IsAsync);

}

void UC_GameInstance::SaveCountrys_Implementation(const TArray<FCountrys>& SaveCountrys, bool IsAsync) {
    CurrentSaveData->Countrys = SaveCountrys;
    SaveGameDatas_Implementation(IsAsync);
}

void UC_GameInstance::SaveDesignedProducts_Implementation(const TArray<FNewDesignedProductsStruct>& SaveDesignedProducts, bool IsAsync) {
    CurrentSaveData->DesignedProducts = SaveDesignedProducts;
    SaveGameDatas_Implementation(IsAsync);
}

void UC_GameInstance::SaveGlobalFactory_Implementation(const TArray<FFactorys>& SaveGlobalFactorys, bool IsAsync) {
    CurrentSaveData->Factorys = SaveGlobalFactorys;
    SaveGameDatas_Implementation(IsAsync);
}

void UC_GameInstance::SaveMyFactorysData_Implementation(const TArray<FMyFactorys>& SaveMyFactorys, bool IsAsync) {
    CurrentSaveData->MyFactorys = SaveMyFactorys;
    SaveGameDatas_Implementation(IsAsync);
}

void UC_GameInstance::SaveResearchProducts_Implementation(const TArray<FResearchItems>& SaveResearchItems, bool IsAsync){
    CurrentSaveData->ResearchTimes = SaveResearchItems;
    SaveGameDatas_Implementation(IsAsync);
}

void UC_GameInstance::SaveContract_Implementation(const TArray<FContracts>& SaveContracts, bool IsAsync) {
    CurrentSaveData->Contracts = SaveContracts;
    SaveGameDatas_Implementation(IsAsync);
}

void UC_GameInstance::SaveRebellion_Implementation(const TArray<FRebellion>& SaveRebellions, bool IsAsync) {
    CurrentSaveData->Rebellion = SaveRebellions;
    SaveGameDatas_Implementation(IsAsync);
}

void UC_GameInstance::SaveWars_Implementation(const TArray<FCurrentWars>& SaveWars, bool IsAsync) {
    CurrentSaveData->War = SaveWars;
    SaveGameDatas_Implementation(IsAsync);
}

void UC_GameInstance::SaveNew_Implementation(const TArray<FNews>& SaveNews, bool IsAsync) {
    CurrentSaveData->AllNews = SaveNews;
    SaveGameDatas_Implementation(IsAsync);
}

void UC_GameInstance::CheckLastSavedSlots_Implementation(bool IsAsync)
{
    if (UGameplayStatics::DoesSaveGameExist("LastSavedSlot", 0))
    {
        if (IsAsync) {

            Async(EAsyncExecution::ThreadPool, [this]()
                {
                    CurrentSaveData = Cast<UC_SaveGame>(UGameplayStatics::LoadGameFromSlot(TEXT("LastSavedSlot"), 0));
                });

        }
        else {
            CurrentSaveData = Cast<UC_SaveGame>(UGameplayStatics::LoadGameFromSlot(TEXT("LastSavedSlot"), 0));
        }

    }
    else {
        CurrentSaveData = Cast<UC_SaveGame>(UGameplayStatics::CreateSaveGameObject(UC_SaveGame::StaticClass()));
    }

}

void UC_GameInstance::SaveSlots_Implementation(bool IsAsync) {

    if (IsAsync) {

        Async(EAsyncExecution::Thread, [this]()
            {
                // Save iþlemi - bu threadde çalýþýyor
                bool bSuccess = UGameplayStatics::SaveGameToSlot(CurrentSaveData, TEXT("LastSavedSlot"), 0);

                // Log veya Main Thread iþlemi yapmak için main thread'e geri dön
                AsyncTask(ENamedThreads::GameThread, [bSuccess]()
                    {
                        if (bSuccess)
                        {
                            UE_LOG(LogTemp, Log, TEXT("Async save baþarýlý."));
                        }
                        else
                        {
                            UE_LOG(LogTemp, Error, TEXT("Async save baþarýsýz."));
                        }

                    });

            });
    }
    else {

        bool bSuccess = UGameplayStatics::SaveGameToSlot(CurrentSaveData, TEXT("LastSavedSlot"), 0);

        if (bSuccess)
        {
            UE_LOG(LogTemp, Log, TEXT("Save basarili."));
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Save basarisiz."));
        }
    }


}

void UC_GameInstance::SaveLastSlots_Implementation(const FLastSlot& LastSlotParam, bool IsAsync) {
    CurrentSaveData->LastSlot = LastSlotParam;
    SaveSlots_Implementation(IsAsync);
}