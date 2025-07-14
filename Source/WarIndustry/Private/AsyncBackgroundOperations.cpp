#include "AsyncBackgroundOperations.h"
#include "Async/Async.h"
#include "Engine/Engine.h"
#include "AllStructs.h"
#include "C_GameInstance.h"
#include "HelperCalculationFunctions.h"

#include "Kismet/GameplayStatics.h"

UAsyncBackgroundOperations* UAsyncBackgroundOperations::CreateAsyncBackgroundOperations()
{
	return NewObject<UAsyncBackgroundOperations>();
}

void UAsyncBackgroundOperations::StartAsyncCreateRandomWeaponsData(UObject* WorldContextObject) {
       
        CountriesHasLocalProductions = Cast<UDataTable>(StaticLoadObject(UDataTable::StaticClass(), nullptr, TEXT("/Game/Datas/CountriesHasLocalProductions.CountriesHasLocalProductions")));
        UDataTable* AllFeaturesDataTable = Cast<UDataTable>(StaticLoadObject(UDataTable::StaticClass(), nullptr, TEXT("/Game/Datas/AllWeaponFeatures.AllWeaponFeatures")));
        
        Async(EAsyncExecution::Thread, [this, WorldContextObject, AllFeaturesDataTable]() {

            TArray<FNewDesignedProductsStruct> CreatedData;
            UC_GameInstance* GI = Cast<UC_GameInstance>(UGameplayStatics::GetGameInstance(WorldContextObject));
            GI->Implements<USaveInterface>();
            UC_SaveGame* LoadedSave;
            ISaveInterface::Execute_GetGameData(GI, LoadedSave);
           
            TArray<FFactorys> AllGlobalFactories = LoadedSave->Factorys;

            CreateRandomWeapon(AllFeaturesDataTable, CreatedData, AllGlobalFactories);

            ISaveInterface::Execute_SaveDesignedProducts(GI, CreatedData, false);
            ISaveInterface::Execute_SaveGlobalFactory(GI, AllGlobalFactories, false);

            AsyncTask(ENamedThreads::GameThread, [this]() {

                    DataCreateIsFinished.Broadcast();
                    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Merhaba, bu c++'ın bittiğini gösterir"));

                });

        });
        
}

void UAsyncBackgroundOperations::StartAsyncRandomWeaponsToCountries(UObject* WorldContextObject) {

    CountriesStartWeaponsDataTable = Cast<UDataTable>(StaticLoadObject(UDataTable::StaticClass(), nullptr, TEXT("/Game/Datas/CountryWeaponsStart.CountryWeaponsStart")));

    Async(EAsyncExecution::Thread, [this, WorldContextObject]() {
        
        RandomWeaponsToCountries(WorldContextObject);
        
        AsyncTask(ENamedThreads::GameThread, [this]() {


            RandomWeaponsToCountriesIsFinished.Broadcast();
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Merhaba, bu ülkelere rastgele silah verildiğini gösterir."));
            });

        });

}

void UAsyncBackgroundOperations::CreateRandomWeapon(UDataTable* AllFeaturesDataTable, TArray<FNewDesignedProductsStruct>& DesignedProductsArray, TArray<FFactorys>& AllGlobalFactories){
    
    
    int32 WeaponTypeCount = 31;
    FName WeaponClass;
    FName WeaponType;
    TArray <FName> CompatibleProducts;
    int32 TechRangeArrayRef;
    TMap<FString, int32> WeaponsFightingAgainstAndStrengthsMap;
    float Progress = 0;
    TArray<FName> AllCountiresHasLocalWeaponsRows = ReadCountriesLocalWeaponsData();
    FDateTime CurrentTime = FDateTime::UtcNow();
   
    for (int32 TypeIndex = 0;TypeIndex < WeaponTypeCount;TypeIndex++) {
        Progress = ((TypeIndex + 1) / 31.0f) / 3;
       
        AsyncTask(ENamedThreads::GameThread, [this, Progress]() {
            UE_LOG(LogTemp, Warning, TEXT("Progress: %f"), Progress);
            OnProgressUpdated.Broadcast(Progress);
        });

        CompatibleProducts.Empty();
        uint8 CreatedLowOverallWeaponsCount = 0, CreatedMediumOverallWeaponsCount = 0, CreatedHighOverallWeaponsCount = 0;
        TArray<int32> SelectedTypeMaxValues;
        TArray<int32> SelectedTypeMinValues;
        TArray<float> SelectedTypeMultiplierValues;
        TArray<float> SelectedFeatureValuesOfWeapon;
        SelectedFeatureValuesOfWeapon.SetNum(6);
        
        switch (TypeIndex)
        {
        case 0:
            WeaponClass = FName(TEXT("Long Range Rifles"));
            WeaponType = FName(TEXT("Assult Rifle"));
            TechRangeArrayRef = 0;
            break;
        case 1:
            WeaponClass = FName(TEXT("Long Range Rifles"));
            WeaponType = FName(TEXT("Sniper Rifle"));
            TechRangeArrayRef = 0;
            break;
        case 2:
            WeaponClass = FName(TEXT("Long Range Rifles"));
            WeaponType = FName(TEXT("Submachine Gun"));
            TechRangeArrayRef = 0;
            break;
        case 3:
            WeaponClass = FName(TEXT("Long Range Rifles"));
            WeaponType = FName(TEXT("Air Attack Machine Gun"));
            TechRangeArrayRef = 0;
            CompatibleProducts.Add("Landing Helicopter");
            CompatibleProducts.Add("Attack Helicopter");
            CompatibleProducts.Add("Cargo Helicopter");
            CompatibleProducts.Add("Marine Helicopter");
            break;
        case 4:
            WeaponClass = FName(TEXT("Long Range Rifles"));
            WeaponType = FName(TEXT("Coactional Machine Gun"));
            TechRangeArrayRef = 0;
            CompatibleProducts.Add("Light Tank");
            CompatibleProducts.Add("Main Battle Tank");
            CompatibleProducts.Add("Heavy Tank");
            CompatibleProducts.Add("Amphibious Tank");
            CompatibleProducts.Add("Tracked Armored Personnel Carrier");
            CompatibleProducts.Add("Armored Fighting Vehicle");
            CompatibleProducts.Add("Amphibious Tank");
            break;
        case 5:
            WeaponClass = FName(TEXT("Rockets"));
            WeaponType = FName(TEXT("Land To Air Missile"));
            TechRangeArrayRef = 1;
            CompatibleProducts.Add("Anti Drone System");
            CompatibleProducts.Add("Medium Range Air Defense System");
            CompatibleProducts.Add("Long Range Air Defense System");
            break;
        case 6:
            WeaponClass = FName(TEXT("Rockets"));
            WeaponType = FName(TEXT("Air To Land Missile"));
            TechRangeArrayRef = 1;
            CompatibleProducts.Add("Armed UAV");
            CompatibleProducts.Add("Unmanned Fighter Jet");
            CompatibleProducts.Add("Attack Helicopter");
            CompatibleProducts.Add("Marine Helicopter");
            CompatibleProducts.Add("Train Aircraft");
            CompatibleProducts.Add("Fighter Jet");
            CompatibleProducts.Add("Bomber Plane");
            CompatibleProducts.Add("Vertical TakeOff Jet");
            break;
        case 7:
            WeaponClass = FName(TEXT("Rockets"));
            WeaponType = FName(TEXT("Air To Air Missile"));
            TechRangeArrayRef = 1;
            CompatibleProducts.Add("Armed UAV");
            CompatibleProducts.Add("Unmanned Fighter Jet");
            CompatibleProducts.Add("Attack Helicopter");
            CompatibleProducts.Add("Marine Helicopter");
            CompatibleProducts.Add("Train Aircraft");
            CompatibleProducts.Add("Fighter Jet");
            CompatibleProducts.Add("Bomber Plane");
            CompatibleProducts.Add("Vertical TakeOff Jet");
            break;
        case 8:
            WeaponClass = FName(TEXT("Tanks"));
            WeaponType = FName(TEXT("Light Tank"));
            TechRangeArrayRef = 2;
            break;
        case 9:
            WeaponClass = FName(TEXT("Tanks"));
            WeaponType = FName(TEXT("Main Battle Tank"));
            TechRangeArrayRef = 2;
            break;
        case 10:
            WeaponClass = FName(TEXT("Tanks"));
            WeaponType = FName(TEXT("Heavy Tank"));
            TechRangeArrayRef = 2;
            break;
        case 11:
            WeaponClass = FName(TEXT("Tanks"));
            WeaponType = FName(TEXT("Amphibious Tank"));
            TechRangeArrayRef = 2;
            break;
        case 12:
            WeaponClass = FName(TEXT("Armored Vehicles"));
            WeaponType = FName(TEXT("Wheeled Armored Personnel Carrier"));
            TechRangeArrayRef = 3;
            break;
        case 13:
            WeaponClass = FName(TEXT("Armored Vehicles"));
            WeaponType = FName(TEXT("Tracked Armored Personnel Carrier"));
            TechRangeArrayRef = 3;
            break;
        case 14:
            WeaponClass = FName(TEXT("Armored Vehicles"));
            WeaponType = FName(TEXT("Armored Fighting Vehicle"));
            TechRangeArrayRef = 3;
            break;
        case 15:
            WeaponClass = FName(TEXT("Armored Vehicles"));
            WeaponType = FName(TEXT("Amphibious Armored Personnel Carrier"));
            TechRangeArrayRef = 3;
            break;
        case 16:
            WeaponClass = FName(TEXT("Unmanned Air Vehicles"));
            WeaponType = FName(TEXT("Unmanned Air Vehicle"));
            TechRangeArrayRef = 4;
            break;
        case 17:
            WeaponClass = FName(TEXT("Unmanned Air Vehicles"));
            WeaponType = FName(TEXT("Kamikaze UAV"));
            TechRangeArrayRef = 4;
            break;
        case 18:
            WeaponClass = FName(TEXT("Unmanned Air Vehicles"));
            WeaponType = FName(TEXT("Armed UAV"));
            TechRangeArrayRef = 4;
            break;
        case 19:
            WeaponClass = FName(TEXT("Unmanned Air Vehicles"));
            WeaponType = FName(TEXT("Unmanned Fighter Jet"));
            TechRangeArrayRef = 4;
            break;
        case 20:
            WeaponClass = FName(TEXT("Helicopters"));
            WeaponType = FName(TEXT("Landing Helicopter"));
            TechRangeArrayRef = 5;
            break;
        case 21:
            WeaponClass = FName(TEXT("Helicopters"));
            WeaponType = FName(TEXT("Attack Helicopter"));
            TechRangeArrayRef = 5;
            break;
        case 22:
            WeaponClass = FName(TEXT("Helicopters"));
            WeaponType = FName(TEXT("Cargo Helicopter"));
            TechRangeArrayRef = 5;
        case 23:
            WeaponClass = FName(TEXT("Helicopters"));
            WeaponType = FName(TEXT("Marine Helicopter"));
            TechRangeArrayRef = 5;
            break;
        case 24:
            WeaponClass = FName(TEXT("Fighter Jets"));
            WeaponType = FName(TEXT("Train Aircraft"));
            TechRangeArrayRef = 6;
            break;
        case 25:
            WeaponClass = FName(TEXT("Fighter Jets"));
            WeaponType = FName(TEXT("Fighter Jet"));
            TechRangeArrayRef = 6;
            break;
        case 26:
            WeaponClass = FName(TEXT("Fighter Jets"));
            WeaponType = FName(TEXT("Bomber Plane"));
            TechRangeArrayRef = 6;
            break;
        case 27:
            WeaponClass = FName(TEXT("Fighter Jets"));
            WeaponType = FName(TEXT("Vertical TakeOff Jet"));
            TechRangeArrayRef = 6;
            break;
        case 28:
            WeaponClass = FName(TEXT("Air Defense Systems"));
            WeaponType = FName(TEXT("Anti Drone System"));
            TechRangeArrayRef = 7;
            break;
        case 29:
            WeaponClass = FName(TEXT("Air Defense Systems"));
            WeaponType = FName(TEXT("Medium Range Air Defense System"));
            TechRangeArrayRef = 7;
            break;
        case 30:
            WeaponClass = FName(TEXT("Air Defense Systems"));
            WeaponType = FName(TEXT("Long Range Air Defense System"));
            TechRangeArrayRef = 7;
            break;
        default:
            break;
        }

        WeaponsFightingAgainstAndStrengthsMap = WeaponsFightingAgainstAndStrengths(WeaponType);
        WeaponsMaxAndMinValues(WeaponType,SelectedTypeMaxValues,SelectedTypeMinValues,SelectedTypeMultiplierValues);

        while (CreatedLowOverallWeaponsCount != 7 || CreatedMediumOverallWeaponsCount != 7 || CreatedHighOverallWeaponsCount != 7) {

            int32 DesignOverall;
            FNewDesignedProductsStruct DesignedProductsStruct;
            bool IsConditionsTrue = false;

            for (int32 i = 0; i <= 5;i++) {
                
                SelectedFeatureValuesOfWeapon[i] = FMath::RandRange(SelectedTypeMinValues[i], SelectedTypeMaxValues[i]);
                
            }

            DesignOverall = CalculateWeaponOverall(SelectedFeatureValuesOfWeapon,SelectedTypeMaxValues,SelectedTypeMinValues,SelectedTypeMultiplierValues);
            UE_LOG(LogTemp, Warning, TEXT("Oluşturulan Silahın Türü: %s, Oluşturulan Silahın Overallı: %d"), *WeaponClass.ToString(), DesignOverall);
           
            if (DesignOverall >= 10 && DesignOverall <= 40 && CreatedLowOverallWeaponsCount != 7) {
                IsConditionsTrue = true;
                
                CreatedLowOverallWeaponsCount++;
            }
            else if (DesignOverall >= 41 && DesignOverall <= 75 && CreatedMediumOverallWeaponsCount != 7) {
                IsConditionsTrue = true;
                
                CreatedMediumOverallWeaponsCount++;
            }
            else if (DesignOverall >= 76 && DesignOverall <= 100 && CreatedHighOverallWeaponsCount != 7) {
                IsConditionsTrue = true;
                
                CreatedHighOverallWeaponsCount++;

            }

            if (IsConditionsTrue) {

                bool IsCountryFound = false;
                FName RowName;

                while (!IsCountryFound) {

                        int32 RandomGlobalFactoryIndex = FMath::RandRange(0, AllGlobalFactories.Num() - 1);
                        

                        if (AllGlobalFactories[RandomGlobalFactoryIndex].CompanyMaxOverall >= DesignOverall) {
                            DesignedProductsStruct.Country = AllGlobalFactories[RandomGlobalFactoryIndex].Country.ToString();
                            AllGlobalFactories[RandomGlobalFactoryIndex].LastTimeCollectedProducts.Add(DesignedProductsArray.Num(),CurrentTime);
                            IsCountryFound = true;
                        }

                }

                DesignedProductsStruct.Class = WeaponClass;
                DesignedProductsStruct.Type = WeaponType;
                DesignedProductsStruct.CompatibleProducts = CompatibleProducts;
                DesignedProductsStruct.FirstProperty = SelectedFeatureValuesOfWeapon[0];
                DesignedProductsStruct.SecondProperty = SelectedFeatureValuesOfWeapon[1];
                DesignedProductsStruct.ThirdProperty = SelectedFeatureValuesOfWeapon[2];
                DesignedProductsStruct.FourthProperty = SelectedFeatureValuesOfWeapon[3];
                DesignedProductsStruct.FifthProperty = SelectedFeatureValuesOfWeapon[4];
                DesignedProductsStruct.SixthProperty = SelectedFeatureValuesOfWeapon[5];
                DesignedProductsStruct.Overall = DesignOverall;
                DesignedProductsStruct.FightingAgainstAndStrength = WeaponsFightingAgainstAndStrengthsMap;

                DesignedProductsStruct.ProductionTime = UHelperCalculationFunctions::CalculateWeaponProductionTime(DesignedProductsStruct);
                DesignedProductsStruct.FeaturesAndValues = UHelperCalculationFunctions::CalculateDesignWeaponFeatures(AllFeaturesDataTable, DesignedProductsStruct);

                DesignedProductsArray.Add(DesignedProductsStruct);
            }

        }

        
    }
   
}

TArray<FName> UAsyncBackgroundOperations::ReadCountriesLocalWeaponsData() {
    
    
    TArray<FName> AllRows;

	if(!CountriesHasLocalProductions){

		UE_LOG(LogTemp, Error, TEXT("WeaponDataTable not assigned."));
		return AllRows;

    }
    else {
         AllRows = CountriesHasLocalProductions->GetRowNames();
        
    }
    return AllRows;
    
}

TMap<FString, int32> UAsyncBackgroundOperations::WeaponsFightingAgainstAndStrengths(FName WeaponType) {

    TMap<FString, int32> WeaponFightingAgainstAndStrengths;

    switch (UAllStructs::ConvertWeaponTypeToEnum(WeaponType))
    {
    case EWeaponType::AssultRifle:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Rockets"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;

    case EWeaponType::SniperRifle:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Rockets"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;

    case EWeaponType::SubmachineGun:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Rockets"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;
    
    case EWeaponType::AirAttackMachineGun:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Rockets"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;
    
    case EWeaponType::CoactionalMachineGun:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Rockets"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;
    
    case EWeaponType::LandToAirMissile:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Fighter Jets"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;

    case EWeaponType::AirToLandMissile:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Fighter Jets"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;
    
    case EWeaponType::AirToAirMissile:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Fighter Jets"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;

    case EWeaponType::LightTank:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;

    case EWeaponType::MainBattleTank:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;

    case EWeaponType::HeavyTank:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;

    case EWeaponType::AmphibiousTank:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;
        
    case EWeaponType::WheeledArmoredPersonnelCarrier:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        break;

    case EWeaponType::TrackedArmoredPersonnelCarrier:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;
    
    case EWeaponType::ArmoredFightingVehicle:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;

    case EWeaponType::AmphibiousArmoredPersonnelCarrier:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;

    case EWeaponType::UAV:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;

    case EWeaponType::KamikazeUAV:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;

    case EWeaponType::ArmedUAV:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Fighter Jets"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;

    case EWeaponType::UnmannedFighterJet:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Fighter Jets"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;

    case EWeaponType::LandingHelicopter:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Fighter Jets"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;
    
    case EWeaponType::AttackHelicopter:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Fighter Jets"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;

    case EWeaponType::CargoHelicopter:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        break;

    case EWeaponType::MarineHelicopter:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Fighter Jets"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;

    case EWeaponType::TrainAircraft:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        break;

    case EWeaponType::FighterJet:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Rockets"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Fighter Jets"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;

    case EWeaponType::BomberPlane:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;

    case EWeaponType::VerticalTakeOffJets:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Long Range Rifles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Rockets"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Tanks"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Armored Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Fighter Jets"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Air Defense Systems"), 0));
        break;

    case EWeaponType::AntiDroneSystems:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Rockets"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        break;

    case EWeaponType::MediumRangeAirDefenseSystems:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Rockets"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Unmanned Air Vehicles"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Fighter Jets"), 0));
        break;

    case EWeaponType::LongRangeAirDefenseSystems:
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Rockets"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Helicopters"), 0));
        WeaponFightingAgainstAndStrengths.Add(FString(TEXT("Fighter Jets"), 0));
        break;

    default:
        break;

        
    }
    return WeaponFightingAgainstAndStrengths;
}

void UAsyncBackgroundOperations::WeaponsMaxAndMinValues(FName WeaponType,TArray<int32>& MaxValues, TArray<int32>& MinValues, TArray<float>& WeightMultiplier){
    MaxValues.SetNum(6);
    MinValues.SetNum(6);
    WeightMultiplier.SetNum(6);

    switch (UAllStructs::ConvertWeaponTypeToEnum(WeaponType)) {
    case EWeaponType::AssultRifle:
        UE_LOG(LogTemp, Warning, TEXT("AssultRiflea girdi."));
        MinValues[0] = 600;
        MaxValues[0] = 1200;
        MinValues[1] = 2700;
        MaxValues[1] = 6000;
        MinValues[2] = 50;
        MaxValues[2] = 150;
        MinValues[3] = 20;
        MaxValues[3] = 60;
        MinValues[4] = 3;
        MaxValues[4] = 20;
        MinValues[5] = 300;
        MaxValues[5] = 1200;
        WeightMultiplier[0] = 0.25f;
        WeightMultiplier[1] = -0.15f;
        WeightMultiplier[2] = 0.3f;
        WeightMultiplier[3] = 0.1f;
        WeightMultiplier[4] = -0.2f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::SniperRifle:
        MinValues[0] = 800;
        MaxValues[0] = 1500;
        MinValues[1] = 5000;
        MaxValues[1] = 15000;
        MinValues[2] = 120;
        MaxValues[2] = 250;
        MinValues[3] = 5;
        MaxValues[3] = 20;
        MinValues[4] = 15;
        MaxValues[4] = 80;
        MinValues[5] = 800;
        MaxValues[5] = 5000;
        WeightMultiplier[0] = 0.25f;
        WeightMultiplier[1] = -0.15f;
        WeightMultiplier[2] = 0.3f;
        WeightMultiplier[3] = 0.1f;
        WeightMultiplier[4] = -0.2f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::SubmachineGun:
        MinValues[0] = 600;
        MaxValues[0] = 1200;
        MinValues[1] = 7000;
        MaxValues[1] = 15000;
        MinValues[2] = 80;
        MaxValues[2] = 180;
        MinValues[3] = 50;
        MaxValues[3] = 300;
        MinValues[4] = 300;
        MaxValues[4] = 2000;
        MinValues[5] = 500;
        MaxValues[5] = 2000;
        WeightMultiplier[0] = 0.25f;
        WeightMultiplier[1] = -0.15f;
        WeightMultiplier[2] = 0.3f;
        WeightMultiplier[3] = 0.1f;
        WeightMultiplier[4] = -0.2f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::AirAttackMachineGun:
        MinValues[0] = 800;
        MaxValues[0] = 1400;
        MinValues[1] = 10000;
        MaxValues[1] = 25000;
        MinValues[2] = 100;
        MaxValues[2] = 220;
        MinValues[3] = 100;
        MaxValues[3] = 1000;
        MinValues[4] = 2000;
        MaxValues[4] = 8000;
        MinValues[5] = 1000;
        MaxValues[5] = 5000;
        WeightMultiplier[0] = 0.25f;
        WeightMultiplier[1] = -0.15f;
        WeightMultiplier[2] = 0.3f;
        WeightMultiplier[3] = 0.1f;
        WeightMultiplier[4] = -0.2f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::CoactionalMachineGun:
        MinValues[0] = 700;
        MaxValues[0] = 1500;
        MinValues[1] = 10000;
        MaxValues[1] = 25000;
        MinValues[2] = 100;
        MaxValues[2] = 200;
        MinValues[3] = 100;
        MaxValues[3] = 500;
        MinValues[4] = 2000;
        MaxValues[4] = 10000;
        MinValues[5] = 800;
        MaxValues[5] = 4000;
        WeightMultiplier[0] = 0.25f;
        WeightMultiplier[1] = -0.15f;
        WeightMultiplier[2] = 0.3f;
        WeightMultiplier[3] = 0.1f;
        WeightMultiplier[4] = -0.2f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::LandToAirMissile:
        MinValues[0] = 500;
        MaxValues[0] = 1500;
        MinValues[1] = 50;
        MaxValues[1] = 500;
        MinValues[2] = 200;
        MaxValues[2] = 800;
        MinValues[3] = 50;
        MaxValues[3] = 130;
        MinValues[4] = 5;
        MaxValues[4] = 120;
        MinValues[5] = 50;
        MaxValues[5] = 95;
        WeightMultiplier[0] = 0.2f;
        WeightMultiplier[1] = -0.15f;
        WeightMultiplier[2] = 0.3f;
        WeightMultiplier[3] = 0.25f;
        WeightMultiplier[4] = 0.15f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::AirToLandMissile:
        MinValues[0] = 400;
        MaxValues[0] = 1200;
        MinValues[1] = 100;
        MaxValues[1] = 1000;
        MinValues[2] = 400;
        MaxValues[2] = 1000;
        MinValues[3] = 30;
        MaxValues[3] = 100;
        MinValues[4] = 5;
        MaxValues[4] = 300;
        MinValues[5] = 40;
        MaxValues[5] = 90;
        WeightMultiplier[0] = 0.2f;
        WeightMultiplier[1] = -0.15f;
        WeightMultiplier[2] = 0.3f;
        WeightMultiplier[3] = 0.25f;
        WeightMultiplier[4] = 0.15f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::AirToAirMissile:
        MinValues[0] = 800;
        MaxValues[0] = 2500;
        MinValues[1] = 30;
        MaxValues[1] = 300;
        MinValues[2] = 150;
        MaxValues[2] = 600;
        MinValues[3] = 70;
        MaxValues[3] = 150;
        MinValues[4] = 10;
        MaxValues[4] = 200;
        MinValues[5] = 60;
        MaxValues[5] = 98;
        WeightMultiplier[0] = 0.2f;
        WeightMultiplier[1] = -0.15f;
        WeightMultiplier[2] = 0.3f;
        WeightMultiplier[3] = 0.25f;
        WeightMultiplier[4] = 0.15f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::LightTank:
        MinValues[0] = 40;
        MaxValues[0] = 90;
        MinValues[1] = 10;
        MaxValues[1] = 35;
        MinValues[2] = 20;
        MaxValues[2] = 180;
        MinValues[3] = 100;
        MaxValues[3] = 600;
        MinValues[4] = 200;
        MaxValues[4] = 600;
        MinValues[5] = 50;
        MaxValues[5] = 150;
        WeightMultiplier[0] = 0.15f;
        WeightMultiplier[1] = -0.2f;
        WeightMultiplier[2] = 0.3f;
        WeightMultiplier[3] = 0.25f;
        WeightMultiplier[4] = 0.1f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::MainBattleTank:
        MinValues[0] = 30;
        MaxValues[0] = 75;
        MinValues[1] = 35;
        MaxValues[1] = 70;
        MinValues[2] = 100;
        MaxValues[2] = 250;
        MinValues[3] = 400;
        MaxValues[3] = 900;
        MinValues[4] = 300;
        MaxValues[4] = 800;
        MinValues[5] = 40;
        MaxValues[5] = 120;
        WeightMultiplier[0] = 0.15f;
        WeightMultiplier[1] = -0.2f;
        WeightMultiplier[2] = 0.3f;
        WeightMultiplier[3] = 0.25f;
        WeightMultiplier[4] = 0.1f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::HeavyTank:
        MinValues[0] = 25;
        MaxValues[0] = 55;
        MinValues[1] = 50;
        MaxValues[1] = 100;
        MinValues[2] = 120;
        MaxValues[2] = 300;
        MinValues[3] = 600;
        MaxValues[3] = 1000;
        MinValues[4] = 250;
        MaxValues[4] = 700;
        MinValues[5] = 30;
        MaxValues[5] = 100;
        WeightMultiplier[0] = 0.15f;
        WeightMultiplier[1] = -0.2f;
        WeightMultiplier[2] = 0.3f;
        WeightMultiplier[3] = 0.25f;
        WeightMultiplier[4] = 0.1f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::AmphibiousTank:
        MinValues[0] = 35;
        MaxValues[0] = 80;
        MinValues[1] = 15;
        MaxValues[1] = 50;
        MinValues[2] = 60;
        MaxValues[2] = 200;
        MinValues[3] = 200;
        MaxValues[3] = 700;
        MinValues[4] = 150;
        MaxValues[4] = 500;
        MinValues[5] = 40;
        MaxValues[5] = 130;
        WeightMultiplier[0] = 0.15f;
        WeightMultiplier[1] = -0.2f;
        WeightMultiplier[2] = 0.3f;
        WeightMultiplier[3] = 0.25f;
        WeightMultiplier[4] = 0.1f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::WheeledArmoredPersonnelCarrier:
        MinValues[0] = 60;
        MaxValues[0] = 120;
        MinValues[1] = 8;
        MaxValues[1] = 25;
        MinValues[2] = 200;
        MaxValues[2] = 800;
        MinValues[3] = 100;
        MaxValues[3] = 600;
        MinValues[4] = 300;
        MaxValues[4] = 900;
        MinValues[5] = 6;
        MaxValues[5] = 15;
        WeightMultiplier[0] = 0.15f;
        WeightMultiplier[1] = -0.2f;
        WeightMultiplier[2] = 0.25f;
        WeightMultiplier[3] = 0.25f;
        WeightMultiplier[4] = 0.1f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::TrackedArmoredPersonnelCarrier:
        MinValues[0] = 50;
        MaxValues[0] = 100;
        MinValues[1] = 10;
        MaxValues[1] = 30;
        MinValues[2] = 50;
        MaxValues[2] = 150;
        MinValues[3] = 200;
        MaxValues[3] = 800;
        MinValues[4] = 400;
        MaxValues[4] = 1000;
        MinValues[5] = 8;
        MaxValues[5] = 20;
        WeightMultiplier[0] = 0.15f;
        WeightMultiplier[1] = -0.2f;
        WeightMultiplier[2] = 0.25f;
        WeightMultiplier[3] = 0.25f;
        WeightMultiplier[4] = 0.1f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::ArmoredFightingVehicle:
        MinValues[0] = 55;
        MaxValues[0] = 110;
        MinValues[1] = 15;
        MaxValues[1] = 40;
        MinValues[2] = 80;
        MaxValues[2] = 200;
        MinValues[3] = 300;
        MaxValues[3] = 900;
        MinValues[4] = 400;
        MaxValues[4] = 1000;
        MinValues[5] = 6;
        MaxValues[5] = 12;
        WeightMultiplier[0] = 0.15f;
        WeightMultiplier[1] = -0.2f;
        WeightMultiplier[2] = 0.25f;
        WeightMultiplier[3] = 0.25f;
        WeightMultiplier[4] = 0.1f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::AmphibiousArmoredPersonnelCarrier:
        MinValues[0] = 45;
        MaxValues[0] = 95;
        MinValues[1] = 12;
        MaxValues[1] = 35;
        MinValues[2] = 60;
        MaxValues[2] = 150;
        MinValues[3] = 150;
        MaxValues[3] = 700;
        MinValues[4] = 350;
        MaxValues[4] = 900;
        MinValues[5] = 8;
        MaxValues[5] = 18;
        WeightMultiplier[0] = 0.15f;
        WeightMultiplier[1] = -0.2f;
        WeightMultiplier[2] = 0.25f;
        WeightMultiplier[3] = 0.25f;
        WeightMultiplier[4] = 0.1f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::UAV:
        MinValues[0] = 100;
        MaxValues[0] = 500;
        MinValues[1] = 50;
        MaxValues[1] = 500;
        MinValues[2] = 50;
        MaxValues[2] = 100;
        MinValues[3] = 60;
        MaxValues[3] = 140;
        MinValues[4] = 200;
        MaxValues[4] = 3000;
        MinValues[5] = 5;
        MaxValues[5] = 48;
        WeightMultiplier[0] = 0.15f;
        WeightMultiplier[1] = -0.2f;
        WeightMultiplier[2] = 0.2f;
        WeightMultiplier[3] = 0.3f;
        WeightMultiplier[4] = 0.2f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::KamikazeUAV:
        MinValues[0] = 150;
        MaxValues[0] = 600;
        MinValues[1] = 20;
        MaxValues[1] = 300;
        MinValues[2] = 40;
        MaxValues[2] = 100;
        MinValues[3] = 200;
        MaxValues[3] = 800;
        MinValues[4] = 50;
        MaxValues[4] = 500;
        MinValues[5] = 1;
        MaxValues[5] = 6;
        WeightMultiplier[0] = 0.15f;
        WeightMultiplier[1] = -0.2f;
        WeightMultiplier[2] = 0.2f;
        WeightMultiplier[3] = 0.3f;
        WeightMultiplier[4] = 0.2f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::ArmedUAV:
        MinValues[0] = 200;
        MaxValues[0] = 700;
        MinValues[1] = 500;
        MaxValues[1] = 3000;
        MinValues[2] = 60;
        MaxValues[2] = 100;
        MinValues[3] = 80;
        MaxValues[3] = 250;
        MinValues[4] = 500;
        MaxValues[4] = 5000;
        MinValues[5] = 6;
        MaxValues[5] = 40;
        WeightMultiplier[0] = 0.15f;
        WeightMultiplier[1] = -0.2f;
        WeightMultiplier[2] = 0.2f;
        WeightMultiplier[3] = 0.3f;
        WeightMultiplier[4] = 0.2f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::UnmannedFighterJet:
        MinValues[0] = 400;
        MaxValues[0] = 1200;
        MinValues[1] = 3000;
        MaxValues[1] = 10000;
        MinValues[2] = 70;
        MaxValues[2] = 100;
        MinValues[3] = 150;
        MaxValues[3] = 300;
        MinValues[4] = 1000;
        MaxValues[4] = 10000;
        MinValues[5] = 5;
        MaxValues[5] = 36;
        WeightMultiplier[0] = 0.15f;
        WeightMultiplier[1] = -0.2f;
        WeightMultiplier[2] = 0.2f;
        WeightMultiplier[3] = 0.3f;
        WeightMultiplier[4] = 0.2f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::LandingHelicopter:
        MinValues[0] = 200;
        MaxValues[0] = 350;
        MinValues[1] = 5;
        MaxValues[1] = 15;
        MinValues[2] = 50;
        MaxValues[2] = 150;
        MinValues[3] = 200;
        MaxValues[3] = 800;
        MinValues[4] = 30;
        MaxValues[4] = 80;
        MinValues[5] = 10;
        MaxValues[5] = 50;
        WeightMultiplier[0] = 0.15f;
        WeightMultiplier[1] = -0.2f;
        WeightMultiplier[2] = 0.3f;
        WeightMultiplier[3] = 0.25f;
        WeightMultiplier[4] = 0.2f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::AttackHelicopter:
        MinValues[0] = 250;
        MaxValues[0] = 400;
        MinValues[1] = 4;
        MaxValues[1] = 12;
        MinValues[2] = 150;
        MaxValues[2] = 300;
        MinValues[3] = 400;
        MaxValues[3] = 900;
        MinValues[4] = 40;
        MaxValues[4] = 90;
        MinValues[5] = 50;
        MaxValues[5] = 100;
        WeightMultiplier[0] = 0.15f;
        WeightMultiplier[1] = -0.2f;
        WeightMultiplier[2] = 0.3f;
        WeightMultiplier[3] = 0.25f;
        WeightMultiplier[4] = 0.2f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::CargoHelicopter:
        MinValues[0] = 150;
        MaxValues[0] = 300;
        MinValues[1] = 10;
        MaxValues[1] = 30;
        MinValues[2] = 0;
        MaxValues[2] = 50;
        MinValues[3] = 100;
        MaxValues[3] = 600;
        MinValues[4] = 20;
        MaxValues[4] = 70;
        MinValues[5] = 5;
        MaxValues[5] = 20;
        WeightMultiplier[0] = 0.15f;
        WeightMultiplier[1] = -0.2f;
        WeightMultiplier[2] = 0.3f;
        WeightMultiplier[3] = 0.25f;
        WeightMultiplier[4] = 0.2f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::MarineHelicopter:
        MinValues[0] = 200;
        MaxValues[0] = 370;
        MinValues[1] = 6;
        MaxValues[1] = 20;
        MinValues[2] = 80;
        MaxValues[2] = 200;
        MinValues[3] = 300;
        MaxValues[3] = 800;
        MinValues[4] = 30;
        MaxValues[4] = 85;
        MinValues[5] = 40;
        MaxValues[5] = 90;
        WeightMultiplier[0] = 0.15f;
        WeightMultiplier[1] = -0.2f;
        WeightMultiplier[2] = 0.3f;
        WeightMultiplier[3] = 0.25f;
        WeightMultiplier[4] = 0.2f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::TrainAircraft:
        MinValues[0] = 500;
        MaxValues[0] = 1200;
        MinValues[1] = 2;
        MaxValues[1] = 10;
        MinValues[2] = 50;
        MaxValues[2] = 400;
        MinValues[3] = 0;
        MaxValues[3] = 50;
        MinValues[4] = 60;
        MaxValues[4] = 100;
        MinValues[5] = 20;
        MaxValues[5] = 70;
        WeightMultiplier[0] = 0.2f;
        WeightMultiplier[1] = -0.15f;
        WeightMultiplier[2] = 0.25f;
        WeightMultiplier[3] = 0.3f;
        WeightMultiplier[4] = 0.25f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::FighterJet:
        MinValues[0] = 1200;
        MaxValues[0] = 3000;
        MinValues[1] = 8;
        MaxValues[1] = 25;
        MinValues[2] = 100;
        MaxValues[2] = 600;
        MinValues[3] = 100;
        MaxValues[3] = 300;
        MinValues[4] = 70;
        MaxValues[4] = 100;
        MinValues[5] = 40;
        MaxValues[5] = 90;
        WeightMultiplier[0] = 0.2f;
        WeightMultiplier[1] = -0.15f;
        WeightMultiplier[2] = 0.25f;
        WeightMultiplier[3] = 0.3f;
        WeightMultiplier[4] = 0.25f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::BomberPlane:
        MinValues[0] = 800;
        MaxValues[0] = 2000;
        MinValues[1] = 20;
        MaxValues[1] = 80;
        MinValues[2] = 200;
        MaxValues[2] = 900;
        MinValues[3] = 150;
        MaxValues[3] = 300;
        MinValues[4] = 40;
        MaxValues[4] = 80;
        MinValues[5] = 30;
        MaxValues[5] = 85;
        WeightMultiplier[0] = 0.2f;
        WeightMultiplier[1] = -0.15f;
        WeightMultiplier[2] = 0.25f;
        WeightMultiplier[3] = 0.3f;
        WeightMultiplier[4] = 0.25f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::VerticalTakeOffJets:
        MinValues[0] = 900;
        MaxValues[0] = 2500;
        MinValues[1] = 10;
        MaxValues[1] = 30;
        MinValues[2] = 150;
        MaxValues[2] = 700;
        MinValues[3] = 120;
        MaxValues[3] = 300;
        MinValues[4] = 80;
        MaxValues[4] = 100;
        MinValues[5] = 50;
        MaxValues[5] = 95;
        WeightMultiplier[0] = 0.2f;
        WeightMultiplier[1] = -0.15f;
        WeightMultiplier[2] = 0.25f;
        WeightMultiplier[3] = 0.3f;
        WeightMultiplier[4] = 0.25f;
        WeightMultiplier[5] = 0.2f;
        break;
    case EWeaponType::AntiDroneSystems:
        MinValues[0] = 50;
        MaxValues[0] = 140;
        MinValues[1] = 60;
        MaxValues[1] = 150;
        MinValues[2] = 50;
        MaxValues[2] = 100;
        MinValues[3] = 50;
        MaxValues[3] = 200;
        MinValues[4] = 1;
        MaxValues[4] = 50;
        MinValues[5] = 1;
        MaxValues[5] = 10;
        WeightMultiplier[0] = 0.2f;
        WeightMultiplier[1] = 0.15f;
        WeightMultiplier[2] = 0.1f;
        WeightMultiplier[3] = 0.2f;
        WeightMultiplier[4] = 0.2f;
        WeightMultiplier[5] = 0.15f;
        break;
    case EWeaponType::MediumRangeAirDefenseSystems:
        MinValues[0] = 80;
        MaxValues[0] = 150;
        MinValues[1] = 80;
        MaxValues[1] = 150;
        MinValues[2] = 60;
        MaxValues[2] = 100;
        MinValues[3] = 100;
        MaxValues[3] = 250;
        MinValues[4] = 10;
        MaxValues[4] = 150;
        MinValues[5] = 2;
        MaxValues[5] = 20;
        WeightMultiplier[0] = 0.2f;
        WeightMultiplier[1] = 0.15f;
        WeightMultiplier[2] = 0.1f;
        WeightMultiplier[3] = 0.2f;
        WeightMultiplier[4] = 0.2f;
        WeightMultiplier[5] = 0.15f;
        break;
    case EWeaponType::LongRangeAirDefenseSystems:
        MinValues[0] = 100;
        MaxValues[0] = 150;
        MinValues[1] = 100;
        MaxValues[1] = 150;
        MinValues[2] = 70;
        MaxValues[2] = 100;
        MinValues[3] = 150;
        MaxValues[3] = 300;
        MinValues[4] = 50;
        MaxValues[4] = 400;
        MinValues[5] = 5;
        MaxValues[5] = 50;
        WeightMultiplier[0] = 0.2f;
        WeightMultiplier[1] = 0.15f;
        WeightMultiplier[2] = 0.1f;
        WeightMultiplier[3] = 0.2f;
        WeightMultiplier[4] = 0.2f;
        WeightMultiplier[5] = 0.15f;
        break;
    default:
        UE_LOG(LogTemp, Warning, TEXT("Default Çalıştı: %s"), *WeaponType.ToString());
        break;
    }
}

int32 UAsyncBackgroundOperations::CalculateWeaponOverall(TArray<float> SelectedValues, TArray<int32> MaximumValues, TArray<int32> MinimumValues, TArray<float> WeightMultipliers) {
    int32 Overall;
    float NormalizedWeightSum = 0;

    for (int j = 0;j <= 5;j++) {
        NormalizedWeightSum = NormalizedWeightSum + ((SelectedValues[j] - MinimumValues[j]) / (MaximumValues[j] - MinimumValues[j]) * WeightMultipliers[j]);
    }
    
    
    return Overall = FMath::RoundToInt32((NormalizedWeightSum * 140.0f) + 10.0f);
}

void UAsyncBackgroundOperations::RandomWeaponsToCountries(UObject* WorldContextObject) {
    
    UC_GameInstance* GI = Cast<UC_GameInstance>(UGameplayStatics::GetGameInstance(WorldContextObject));
    GI->Implements<USaveInterface>();
    UC_SaveGame* LoadedSave;
    ISaveInterface::Execute_GetGameData(GI, LoadedSave);

    TArray<FNewDesignedProductsStruct> DesignedProducts = LoadedSave->DesignedProducts;
    TArray<FCountrys> AllCountrys = LoadedSave->Countrys;

    TArray<FName> AllCountriesWithStartWeaponData = ReadCountriesStartWeaponsData();
    TMap<int32, FString> LocalDesignedWeaponIndexAndCountry;
    TArray<FString> CountiresHasLocalWeapons;
    TArray<int32> LastIndexsOfCategories;
    float Progress = 0;
    struct FTempGivenWeapons {
            int32 GivenWeaponIndex;
            int32 GivenWeaponCount;
            int32 GivenWeaponOverall;
        };
    FName LastCategoryName = FName(TEXT("Long Range Rifles"));

    for (int32 i = 0; i < DesignedProducts.Num(); i++) {

        LocalDesignedWeaponIndexAndCountry.Add(i, DesignedProducts[i].Country);
        CountiresHasLocalWeapons.Add(DesignedProducts[i].Country);

        if (DesignedProducts[i].Class != LastCategoryName) {
            LastIndexsOfCategories.Add(i-1);
            LastCategoryName = DesignedProducts[i].Class;
        }

    }
    
    for (int32 i = 0; i < AllCountriesWithStartWeaponData.Num(); i++) {

        Progress = 0.3333f + ((i + 1) / AllCountriesWithStartWeaponData.Num());

        AsyncTask(ENamedThreads::GameThread, [this, Progress]() {
            UE_LOG(LogTemp, Warning, TEXT("Progress: %f"), Progress);
            OnProgressUpdated.Broadcast(Progress);
            });

        FName RowName = AllCountriesWithStartWeaponData[i];
        const FCountryWeaponsStartData* FoundedRow =  CountriesStartWeaponsDataTable->FindRow<FCountryWeaponsStartData>(RowName, TEXT("ReadCountriesStartWeaponsData"));
        FString CountryName = FoundedRow->CountryName;
        TArray<int32> WeaponCategoryCountGoal = FoundedRow->CountryWeaponCountsGoal;
        TArray<int32> WeaponCategoryOverallGoal = FoundedRow->CountryWeaponOverallsGoal;
        TArray<int32> TotalGivenWeaponCount;
        TArray<int32> AverageGivenWeaponOverall;
        TotalGivenWeaponCount.SetNum(8);
        AverageGivenWeaponOverall.SetNum(8);
        bool CountryHaveLocalWeapons = false;
        TArray<int32> GivenWeaponsIndexs;
        TArray<FTempGivenWeapons> GivenWeaponsData;
        FTempGivenWeapons GivenWeapon;

        if (CountiresHasLocalWeapons.Contains(CountryName)) {
            CountryHaveLocalWeapons = true;
        }

        for (int32 j = 0; j <= 7; j++) {
            
            FName WeaponCategory;
            
            if (WeaponCategoryCountGoal[j] > 0) {
               
                switch (j) {
                    case 0:
                        WeaponCategory = "Long Range Rifles";
                        break;
                    case 1:
                        WeaponCategory = "Rockets";
                        break;
                    case 2:
                        WeaponCategory = "Tanks";
                        break;
                    case 3:
                        WeaponCategory = "Armored Vehicles";
                        break;
                    case 4:
                        WeaponCategory = "Unmanned Air Vehicles";
                        break;
                    case 5:
                        WeaponCategory = "Helicopters";
                        break;
                    case 6: 
                        WeaponCategory = "Fighter Jets";
                        break;
                    case 7: 
                        WeaponCategory = "Air Defense Systems";
                        break;
                }

                if (CountryHaveLocalWeapons) {

                    TArray<int32> Keys;
                    LocalDesignedWeaponIndexAndCountry.GetKeys(Keys);

                    for (int LocalWeaponIndex : Keys)
                    {
                        GivenWeapon;
                        FString* Country = LocalDesignedWeaponIndexAndCountry.Find(LocalWeaponIndex);

                       if (**Country == CountryName && DesignedProducts[LocalWeaponIndex].Class == WeaponCategory) {
                           int32 RandomCountOfSelectedWeapon;

                           if (WeaponCategoryCountGoal[j] / 10 <= 10) {
                                RandomCountOfSelectedWeapon = FMath::RandRange(1, WeaponCategoryCountGoal[j]);
                           }
                           else {
                                RandomCountOfSelectedWeapon = FMath::RandRange(1, WeaponCategoryCountGoal[j] / 10);
                           }

                           GivenWeapon.GivenWeaponCount = RandomCountOfSelectedWeapon;
                           GivenWeapon.GivenWeaponIndex = LocalWeaponIndex;
                           GivenWeapon.GivenWeaponOverall = DesignedProducts[LocalWeaponIndex].Overall;
                           GivenWeaponsData.Add(GivenWeapon);
                           AverageGivenWeaponOverall[j] = (((TotalGivenWeaponCount[j] * AverageGivenWeaponOverall[j]) + (RandomCountOfSelectedWeapon * DesignedProducts[LocalWeaponIndex].Overall)) / (TotalGivenWeaponCount[j] + RandomCountOfSelectedWeapon));
                           TotalGivenWeaponCount[j] = TotalGivenWeaponCount[j] + RandomCountOfSelectedWeapon;
                           GivenWeaponsIndexs.Add(LocalWeaponIndex);
                           LocalDesignedWeaponIndexAndCountry.Remove(LocalWeaponIndex);
                       }

                    }

                }

                while (TotalGivenWeaponCount[j] <= WeaponCategoryCountGoal[j]) {

                    GivenWeapon;
                    int32 RandomSelectedWeaponIndex;
                    int32 RandomSelectedCount;

                    if (j == 0) {
                        RandomSelectedWeaponIndex = FMath::RandRange(0, LastIndexsOfCategories[j]);
                    }
                    else if (j == 7) {
                        RandomSelectedWeaponIndex = FMath::RandRange(LastIndexsOfCategories[j - 1], DesignedProducts.Num() - 1);
                    }
                    else {
                        RandomSelectedWeaponIndex = FMath::RandRange(LastIndexsOfCategories[j - 1], LastIndexsOfCategories[j]);
                    }

                    UE_LOG(LogTemp, Error, TEXT("Rastgele Seçilen Silah Indeksi : %d"), RandomSelectedWeaponIndex);

                    if (WeaponCategoryOverallGoal[j] - 20 <= DesignedProducts[RandomSelectedWeaponIndex].Overall && WeaponCategoryOverallGoal[j] + 20 >= DesignedProducts[RandomSelectedWeaponIndex].Overall) {

                        if (WeaponCategoryCountGoal[j]/10 <= 10) {
                           RandomSelectedCount = FMath::RandRange(1, WeaponCategoryCountGoal[j]);
                        }
                        else {
                            RandomSelectedCount = FMath::RandRange(1, WeaponCategoryCountGoal[j] / 10);
                        }
                        
                        if (GivenWeaponsIndexs.Num() != 0) {

                            int32 StructSaveIndex = GivenWeaponsIndexs.Find(RandomSelectedWeaponIndex);

                            if (StructSaveIndex != INDEX_NONE) {
                                GivenWeaponsData[StructSaveIndex].GivenWeaponCount = GivenWeaponsData[StructSaveIndex].GivenWeaponCount + RandomSelectedCount;
                            }
                            else {

                                GivenWeapon.GivenWeaponCount = RandomSelectedCount;
                                GivenWeapon.GivenWeaponIndex = RandomSelectedWeaponIndex;
                                GivenWeapon.GivenWeaponOverall = DesignedProducts[RandomSelectedWeaponIndex].Overall;
                                GivenWeaponsData.Add(GivenWeapon);
                                GivenWeaponsIndexs.Add(RandomSelectedWeaponIndex);

                            }
                          
                        }
                        else {

                            GivenWeapon.GivenWeaponCount = RandomSelectedCount;
                            GivenWeapon.GivenWeaponIndex = RandomSelectedWeaponIndex;
                            GivenWeapon.GivenWeaponOverall = DesignedProducts[RandomSelectedWeaponIndex].Overall;
                            GivenWeaponsData.Add(GivenWeapon);
                            GivenWeaponsIndexs.Add(RandomSelectedWeaponIndex);

                        }

                        AverageGivenWeaponOverall[j] = (((AverageGivenWeaponOverall[j] * TotalGivenWeaponCount[j]) + ((DesignedProducts[RandomSelectedWeaponIndex].Overall) * RandomSelectedCount)) / (TotalGivenWeaponCount[j] + RandomSelectedCount));
                        TotalGivenWeaponCount[j] = TotalGivenWeaponCount[j] + RandomSelectedCount;

                    }
                    
          
                
                }
                

            }
             

        }

        for (int countrySaveIndex = 0; countrySaveIndex < AllCountrys.Num(); countrySaveIndex++) {

            if (AllCountrys[countrySaveIndex].CountryName == CountryName) {
                
                for (FTempGivenWeapons WeaponData : GivenWeaponsData) {
                        AllCountrys[countrySaveIndex].WeaponsIndexsAndCountsInStorage.Add(WeaponData.GivenWeaponIndex, WeaponData.GivenWeaponCount);
                }
                break;
            }
        }
        

    }

    ISaveInterface::Execute_SaveCountrys(GI, AllCountrys, false);
    
}

TArray<FName> UAsyncBackgroundOperations::ReadCountriesStartWeaponsData() {
    TArray<FName> AllRows;

    if (!CountriesStartWeaponsDataTable) {

        UE_LOG(LogTemp, Error, TEXT("WeaponDataTable not assigned."));
        return AllRows;
    }
    else {
        AllRows = CountriesStartWeaponsDataTable->GetRowNames();
    }
        return AllRows;

}

