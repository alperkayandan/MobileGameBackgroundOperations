// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AllStructs.h"
#include "Engine/DataTable.h"

#include "AsyncBackgroundOperations.generated.h"

USTRUCT(BlueprintType)
struct FCountriesThatCanProduceWeapons : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString Country;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<FString, FName> WeaponNamesData;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<int32> CategoriesTechRanges;
};

USTRUCT(BlueprintType)
struct FCountryWeaponsStartData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString CountryName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<int32> CountryWeaponCountsGoal;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<int32> CountryWeaponOverallsGoal;

};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAsyncProgressUpdated, float, Progress);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWeaponsCreated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRandomWeaponsToCountries);

UCLASS()
class WARINDUSTRY_API UAsyncBackgroundOperations : public UObject
{
	GENERATED_BODY()

public: 
	
	UFUNCTION(BlueprintCallable, Category = "Async")
	static UAsyncBackgroundOperations* CreateAsyncBackgroundOperations();
	
	UFUNCTION(BlueprintCallable, Category="Async")
	void StartAsyncCreateRandomWeaponsData(UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category="Async")
	void StartAsyncRandomWeaponsToCountries(UObject* WorldContextObject);

	UPROPERTY(BlueprintAssignable)
	FOnWeaponsCreated DataCreateIsFinished;

	UPROPERTY(BlueprintAssignable)
	FOnRandomWeaponsToCountries RandomWeaponsToCountriesIsFinished;

	UFUNCTION(BlueprintCallable, Category = "WeaponProperties")
	TMap<FString,int32> WeaponsFightingAgainstAndStrengths(FName WeaponType);

	UFUNCTION(BlueprintCallable,Category ="WeaponProperties")
	static void WeaponsMaxAndMinValues(FName WeaponType, TArray<int32>& MaxValues, TArray<int32>& MinValues, TArray<float>& WeightMultiplier);

	UFUNCTION(BlueprintCallable,Category ="WeaponProperties")
	int32 CalculateWeaponOverall(TArray<float> SelectedValues, TArray<int32> MaximumValues, TArray<int32> MinimumValues, TArray<float> WeightMultipliers);

	UPROPERTY(BlueprintAssignable)
	FOnAsyncProgressUpdated OnProgressUpdated;
	
private:

	TArray<FName> ReadCountriesLocalWeaponsData();
	TArray<FName> ReadCountriesStartWeaponsData();
	void CreateRandomWeapon(TArray<FNewDesignedProductsStruct>& DesignedProductsData, TArray<FFactorys>& AllGlobalFactories);
	UDataTable* CountriesHasLocalProductions;
	UDataTable* CountriesStartWeaponsDataTable;
	void RandomWeaponsToCountries(UObject* WorldContextObject);
	
};
