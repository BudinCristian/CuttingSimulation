// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GCode.h"
#include "SimulationGameMode.generated.h"

/**
 * 
 */
struct FPathCommand
{
	FString CommandType;
	FVector EndPoint;
	FVector CircleCenter;
	bool bIsCuttingIsClockwise = false;

	FPathCommand() = default;

	FPathCommand(FString CommandType, FVector EndPoint, FVector CircleCenter, bool bIsCuttingIsClockwise)
		: CommandType{ CommandType }, EndPoint{ EndPoint }, CircleCenter{ CircleCenter }, bIsCuttingIsClockwise{ bIsCuttingIsClockwise }
	{

	}
};

UCLASS()
class CUTTINGSIMULATION_API ASimulationGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	TArray<FPathCommand> PathCommands;

	bool bIsValid;
	

	UFUNCTION(BlueprintCallable, Category = "OnClick")
	bool OpenFiles();
	void EmptyData();

	UPROPERTY(BlueprintReadOnly)
	FString ParseError;

	GCode GCodeData;

	void ParseInputString(const FString& InputString);
};
