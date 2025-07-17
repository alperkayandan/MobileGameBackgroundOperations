// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/Texture2D.h"

#include "AllStructs.generated.h"

UENUM(BlueprintType)
enum class EWeaponCategory : uint8
{
	LongRangeRifles,
	Rockets,
	Tanks,
	ArmoredVehicles,
	Uavs,
	Helicopters,
	FighterJets,
	AirDefensseSystems,
	Default
};

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	Empty,
	AssultRifle,
	SniperRifle,
	SubmachineGun,
	AirAttackMachineGun,
	CoactionalMachineGun,
	LandToAirMissile,
	AirToLandMissile,
	AirToAirMissile,
	LightTank,
	MainBattleTank,
	HeavyTank,
	AmphibiousTank,
	WheeledArmoredPersonnelCarrier,
	TrackedArmoredPersonnelCarrier,
	ArmoredFightingVehicle,
	AmphibiousArmoredPersonnelCarrier,
	UAV,
	KamikazeUAV,
	ArmedUAV,
	UnmannedFighterJet,
	LandingHelicopter,
	AttackHelicopter,
	CargoHelicopter,
	MarineHelicopter,
	TrainAircraft,
	FighterJet,
	BomberPlane,
	VerticalTakeOffJets,
	AntiDroneSystems,
	MediumRangeAirDefenseSystems,
	LongRangeAirDefenseSystems
};

USTRUCT(BlueprintType)
struct FGeneralDatas 
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double TotalMoney;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CompanyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Country;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CeoName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> MyCountryFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double MyCompanyValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CompanyPopularity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double OldMyCompanyValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OldGrowthRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DebtCountryName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Debt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime LastDebtDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TotalDepositedMoney;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime DepositEarningTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StorageCapacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StorageOccupaidCapacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StorageLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StorageUpgradePrice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ResearchSlotCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ResearchAddSlotPrice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray <FString> ResearchingProduct;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 AcceptedCountryContracts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 AcceptedCompanyContracts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime LastEntrance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InstalledVersion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* ProfilePicture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime TenderLastTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AreWeAtWar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> AvailableDesigns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> MaxDesignCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> NewDesignSlotPrice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, float> WeaponDesignAverages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ResearchCenterLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ResearchCenterUpgradePrice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTimespan ResearchCenterUpgradeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime ResearchCenterUpgradeStartedTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ResearchCenterIsUpgrading;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MyPlacementInAllCompanies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime NextRebellionSupportTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDateTime> SpiesSentTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> SendedSpiesCountryIndexs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime NextTimeControlGlobalFactories;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime NextTimeControlContractOffer;

	FGeneralDatas()
		: TotalMoney(200000)
		, CompanyName("")
		, Country("")
		, CeoName("")
		, MyCountryFlag()
		, MyCompanyValue(200000)
		, CompanyPopularity(1)
		, OldMyCompanyValue(0)
		, OldGrowthRate(0)
		, DebtCountryName("")
		, LastDebtDate()
		, TotalDepositedMoney(0)
		, DepositEarningTime()
		, StorageCapacity(2500)
		, StorageOccupaidCapacity(0)
		, StorageLevel(1)
		, StorageUpgradePrice(250000)
		, ResearchSlotCount(2)
		, ResearchAddSlotPrice(50000)
		, ResearchingProduct()
		, AcceptedCountryContracts(0)
		, AcceptedCompanyContracts(0)
		, LastEntrance()
		, InstalledVersion("")
		, ProfilePicture()
		, TenderLastTime()
		, AreWeAtWar(false)
		, AvailableDesigns()
		, MaxDesignCount()
		, NewDesignSlotPrice()
		, WeaponDesignAverages()
		, ResearchCenterLevel(1)
		, ResearchCenterUpgradePrice(250000)
		, ResearchCenterUpgradeTime()
		, ResearchCenterUpgradeStartedTime()
		, ResearchCenterIsUpgrading(false)
		, MyPlacementInAllCompanies(0)
		, NextRebellionSupportTime()
		, SpiesSentTime()
		, SendedSpiesCountryIndexs()
		, NextTimeControlGlobalFactories()
		, NextTimeControlContractOffer()
	{
		AvailableDesigns.Init(0, 8);
		MaxDesignCount.Init(10, 8);
		NewDesignSlotPrice.Init(0, 8);
		SpiesSentTime.Init(0, 3);
		SendedSpiesCountryIndexs.Init(-1, 3);

	}
};

USTRUCT(BlueprintType)
struct FLastSlot 
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LastSavedSlot;

	FLastSlot()
		: LastSavedSlot(0)
	{
	}
};

USTRUCT(BlueprintType)
struct FCountrys : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CountryName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> CountryFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TotalArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName MostPowerfulTechnologies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> LandBorders;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> WaterBorders;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<bool> PowersUnknown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 SpiesSent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, int32> Relationships;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor DynamicColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CustomStencilValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, int32> WeaponsIndexsAndCountsInStorage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 SupportingRebellionCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OldPlacement;

	FCountrys()
		: CountryName("")
		, CountryFlag()
		, TotalArea(0)
		, MostPowerfulTechnologies()
		, LandBorders()
		, WaterBorders()
		, PowersUnknown()
		, SpiesSent(0)
		, Relationships()
		, DynamicColor()
		, CustomStencilValue(0)
		, WeaponsIndexsAndCountsInStorage()
		, SupportingRebellionCount(0)
		, OldPlacement(0)
	{
		PowersUnknown.Init(false, 8);

	}

};

USTRUCT(BlueprintType)
struct FFactorys : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CompanyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Country;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double CompanyValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double OldCompanyValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OldGrowthRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Products;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> ProductionCategories;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FTimespan> DailyProductionLimitByCategories;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, FDateTime> LastTimeCollectedProducts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProductionSpeedMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CompanyMinOverall;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CompanyMaxOverall;

	FFactorys()
		: CompanyName()
		, Country()
		, CompanyValue(0)
		, OldCompanyValue(0)
		, OldGrowthRate(0)
		, Products()
		, ProductionCategories()
		, DailyProductionLimitByCategories()
		, LastTimeCollectedProducts()
		, ProductionSpeedMultiplier(0.25f)
		, CompanyMinOverall(10)
		, CompanyMaxOverall(150)
	{}

};

USTRUCT(BlueprintType)
struct FMyFactorys : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName FactoryName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ProductionClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OpenedSlots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BuildPrice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsBuilded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Building;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime BuildStartedTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTimespan BuildTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FactoryLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<uint8, int32> ProductionSlotAndItemIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NewSlotPrice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<bool> ProductSelected;

	FMyFactorys()
		: FactoryName()
		, ProductionClass()
		, OpenedSlots(2)
		, BuildPrice(0)
		, IsBuilded(false)
		, Building(false)
		, BuildStartedTime()
		, BuildTime()
		, FactoryLevel(0)
		, ProductionSlotAndItemIndex()
		, NewSlotPrice(0)
		, ProductSelected()
	{}

};

USTRUCT(BlueprintType)
struct FResearchItems : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MaterialName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CategoryName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Country;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Material;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WeightChange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SpecialAbility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 AbilityOpenLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName BulletType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString FuelType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ExplosiveType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GuidanceType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString IgnationType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool TargetTracking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> TargetIdectification;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ResearchCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Cost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTimespan ResearchTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTimespan ProductTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> Image;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> MaterialUseVehicles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsLocal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 LevelCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Locked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime MaterialResearchStartTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ResearchSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsResearching;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsResearchCompleted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, int32> IntValuesMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, float> FloatValuesMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, int32> IntValuesChanges;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, float> FloatValuesChanges;

	FResearchItems()
		: MaterialName("")
		, CategoryName("")
		, Country("")
		, Material("")
		, Weight(0)
		, WeightChange(0)
		, SpecialAbility("")
		, AbilityOpenLevel(0)
		, BulletType()
		, FuelType("")
		, ExplosiveType("")
		, GuidanceType("")
		, IgnationType("")
		, TargetTracking(false)
		, TargetIdectification()
		, ResearchCost(0)
		, Cost(0)
		, ResearchTime()
		, ProductTime()
		, Image()
		, MaterialUseVehicles()
		, IsLocal(false)
		, Level(0)
		, LevelCategory(0)
		, Locked(true)
		, MaterialResearchStartTime()
		, ResearchSlot(-1)
		, IsResearching(false)
		, IsResearchCompleted(false)
		, IntValuesMap()
		, FloatValuesMap()
		, IntValuesChanges()
		, FloatValuesChanges()

	{}

};

USTRUCT(BlueprintType)
struct FContracts 
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ProductName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName WeaponType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GivenCountry;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GivenCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Relationship;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TakenMoney;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime ContractLastDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> Image;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsCountryContract;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsSellContract;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> SelectedGains;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> SelectedFeatureValues;

	FContracts()
		: ProductName("")
		, WeaponType()
		, GivenCountry("")
		, GivenCount(0)
		, Relationship(0)
		, TakenMoney(0)
		, ContractLastDate()
		, Image()
		, IsCountryContract(false)
		, IsSellContract(false)
		, SelectedGains()
		, SelectedFeatureValues()
	{}

};

USTRUCT(BlueprintType)
struct FRebellion
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SupportedRebellionCountryIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SupportedCountryName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PossibilityOfRebellion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TotalMoneyOfRebellions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime RebellionStartTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsRebellionStarted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsSupportingByMe;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, FDateTime> SupportingByCountryIndexAndLastTimeTheySoldWeaponsToRebellions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, int32> AllWeaponsIndexsAndCount;

	FRebellion()
		: SupportedRebellionCountryIndex(-1)
		, SupportedCountryName("")
		, PossibilityOfRebellion(0)
		, TotalMoneyOfRebellions(0)
		, RebellionStartTime()
		, IsRebellionStarted(false)
		, IsSupportingByMe(false)
		, SupportingByCountryIndexAndLastTimeTheySoldWeaponsToRebellions()
		, AllWeaponsIndexsAndCount()
	{}

};

USTRUCT(BlueprintType)
struct FCurrentWars
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AttackingCountryIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, int32> AttackingCountryDestroyedWeaponsIndexsAndCounts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> SupportingCountriesForAttackSide;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> LastCheckTimeAttackingCountryWeaponsCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DefendingCountryIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, int32> DefendingCountryDestroyedWeaponsIndexsAndCounts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> SupportingCountriesForDefensseSide;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> LastCheckTimeDefendingCountryWeaponsCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime LastWeaponsCalculatedTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> VotesWarYesToWar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> VotesWarNoToWar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsMyCountrysWar;

	FCurrentWars()
		: AttackingCountryIndex(0)
		, AttackingCountryDestroyedWeaponsIndexsAndCounts()
		, SupportingCountriesForAttackSide()
		, LastCheckTimeAttackingCountryWeaponsCount()
		, DefendingCountryIndex(0)
		, DefendingCountryDestroyedWeaponsIndexsAndCounts()
		, SupportingCountriesForDefensseSide()
		, LastCheckTimeDefendingCountryWeaponsCount()
		, LastWeaponsCalculatedTime()
		, VotesWarYesToWar()
		, VotesWarNoToWar()
		, IsMyCountrysWar(false)
	{}

};

USTRUCT(BlueprintType)
struct FNews
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString NewsTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString NewsType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NewsDataSavedIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsNewsRead;

	FNews()
		: NewsTitle("")
		, NewsType("")
		, NewsDataSavedIndex(0)
		, IsNewsRead(false)
	{}


};

USTRUCT(BlueprintType)
struct FDesignedProductsProduction
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime ProductionStartTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ProductionFactoryIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RequestedNumber;

	FDesignedProductsProduction()
		: ProductionStartTime()
		, ProductionFactoryIndex(0)
		, RequestedNumber(0)
	{}
};

USTRUCT(BlueprintType)
struct FNewDesignedProductsStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Class;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Country;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ProducedCompany;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LocalityRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DefaultCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProductionCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> CompatibleProducts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FirstProperty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SecondProperty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThirdProperty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FourthProperty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FifthProperty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SixthProperty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Overall;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ProducedUnits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> ProductionImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> DesignSelectedParts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTimespan ProductionTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString,int32> FeaturesAndValues;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDesignedProductsProduction> Production;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, int32> FightingAgainstAndStrength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FString> UsingWeaponTypeAndName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsDesignedByMyCompany;

	FNewDesignedProductsStruct()
		: Name("")
		, Class("")
		, Type("")
		, Country("")
		, ProducedCompany("")
		, LocalityRate(0)
		, DefaultCost(0)
		, ProductionCost(0)
		, CompatibleProducts()
		, FirstProperty(0)
		, SecondProperty(0)
		, ThirdProperty(0)
		, FourthProperty(0)
		, FifthProperty(0)
		, SixthProperty(0)
		, Overall(0)
		, ProducedUnits(0)
		, ProductionImage()
		, DesignSelectedParts()
		, ProductionTime()
		, FeaturesAndValues()
		, Production()
		, FightingAgainstAndStrength()
		, UsingWeaponTypeAndName()
		, IsDesignedByMyCompany(false)
	{}


};

USTRUCT(BlueprintType)
struct FWeaponFeatures : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString FeatureName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsSpecialAbility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName WeaponCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<bool> ThisIndexsGoodToBeHigher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<bool> ThisIndexsGoodToBeLower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> CompatibleWeaponTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> StrongAgainstCategories;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StrongAgainstLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StrongAgainstTime;

	FWeaponFeatures() 
		: FeatureName("")
		, IsSpecialAbility(false)
		, WeaponCategory("")
		, CompatibleWeaponTypes()
		, StrongAgainstCategories()
		, StrongAgainstLocation(false)
		, StrongAgainstTime(false)

	{
		ThisIndexsGoodToBeHigher.Init(false, 6);
		ThisIndexsGoodToBeLower.Init(false, 6);
	}
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

UCLASS()
class WARINDUSTRY_API UAllStructs : public UObject

{
	GENERATED_BODY()

public:

	static EWeaponCategory ConvertWeaponCategoryToEnum(const FString& WeaponCategory);
	static EWeaponType ConvertWeaponTypeToEnum(const FName& WeaponType);
	static FName FindWeaponCategoryByType(const FName& WeaponType);
	
	static TArray<FName> AllWeaponCategories;
	static TArray<FName> AllWeaponTypes;
	

};

