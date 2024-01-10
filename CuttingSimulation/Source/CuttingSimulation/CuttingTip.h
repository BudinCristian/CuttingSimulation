// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CuttingSimulation/SimulationGameMode.h"
#include "CuttingTip.generated.h"

UCLASS()
class CUTTINGSIMULATION_API ACuttingTip : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACuttingTip();
	UFUNCTION(BlueprintCallable, Category = "OnClick")
		void StartSimulation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LineThickness= 10.f;

private:
	UPROPERTY(EditAnywhere, Category = "Components")
		UStaticMeshComponent* StaticMeshComponent;
	bool bHasSimulationStarted;

	struct FLocationDraw
	{
		FVector Location;
		bool bShouldDraw;

		FLocationDraw(FVector Loc, bool bDraw)
		{
			Location = Loc;
			bShouldDraw = bDraw;
		}
	};

	ASimulationGameMode* GameMode;
	TArray<struct FGCodeCommand> GCodeCommands;

	TArray<FLocationDraw> PathPoints;
	FVector InitialLocation;

	bool bIsValid;

	void VisualizePath();
};
