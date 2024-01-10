// Fill out your copyright notice in the Description page of Project Settings.


#include "CuttingTip.h"
#include "Kismet/GameplayStatics.h"
#include "GCode.h"
// Sets default values
ACuttingTip::ACuttingTip()
{
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("Static Mesh");
	this->RootComponent = StaticMeshComponent;
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ACuttingTip::StartSimulation()
{
	if (GameMode->bIsValid)
	{
		GCodeCommands = GameMode->GCodeData.GCodeCommands;
		GameMode->GCodeData.FileOutputGCode();
		bHasSimulationStarted = true;
		InitialLocation = GetActorLocation();
		PathPoints.Empty();
		FlushPersistentDebugLines(this->GetWorld());
		SetActorLocation(FVector::ZeroVector);
		bIsValid = true;
	}
}

// Called when the game starts or when spawned
void ACuttingTip::BeginPlay()
{
	Super::BeginPlay();
	bHasSimulationStarted = false;
	GameMode = Cast<ASimulationGameMode>(UGameplayStatics::GetGameMode(this));
	bIsValid = false;
}

// Called every frame
void ACuttingTip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bHasSimulationStarted && bIsValid)
	{
		if (GCodeCommands.Num() > 0)
		{
			FGCodeCommand& CurrentCommand = GCodeCommands[0];

			if (CurrentCommand.CommandType == EGCodeCommandType::G00 || CurrentCommand.CommandType == EGCodeCommandType::G01)
			{
				if (CurrentCommand.Z == -1)
				{
					PathPoints.Add(FLocationDraw(GetActorLocation(), true));
				}
				else
				{
					PathPoints.Add(FLocationDraw(GetActorLocation(), false));
				}

				FVector CurrentLocation = GetActorLocation();
				FVector NewLocation = FMath::VInterpConstantTo(CurrentLocation, FVector(CurrentCommand.EndPoint, 0), DeltaTime, 500.f);


				SetActorLocation(NewLocation);

				if (CurrentLocation == FVector(CurrentCommand.EndPoint, 0))
				{
					InitialLocation = GetActorLocation();
					GCodeCommands.RemoveAt(0);
				}
			}
			else if (CurrentCommand.CommandType == EGCodeCommandType::G02 || CurrentCommand.CommandType == EGCodeCommandType::G03)
			{
				PathPoints.Add(FLocationDraw(GetActorLocation(), true));

				FVector CurrentLocation = GetActorLocation();

				FVector AbsoluteCenter = FVector(CurrentCommand.CircleCenter.X + InitialLocation.X, CurrentCommand.CircleCenter.Y + InitialLocation.Y, 0);

				// Calculate the current angle
				float CurrentAngle = FMath::Atan2(CurrentLocation.Y - AbsoluteCenter.Y, CurrentLocation.X - AbsoluteCenter.X);

				// Calculate the new angle for the next frame
				float AngularSpeed = FMath::DegreesToRadians(20); // You can adjust the speed as needed

				if (CurrentCommand.CommandType == EGCodeCommandType::G03)
				{
					AngularSpeed *= -1;
				}
				float NewAngle = CurrentAngle + AngularSpeed * DeltaTime;

				// Calculate the new position along the circle margin
				FVector NewLocation = AbsoluteCenter + FVector(FMath::Cos(NewAngle), FMath::Sin(NewAngle), 0) * (CurrentCommand.CircleCenter).Size();


				SetActorLocation(NewLocation);

				// Check if the object has reached the endpoint
				if (FVector::Dist(NewLocation, FVector(CurrentCommand.EndPoint, 0)) < 2.f)
				{
					SetActorLocation(FVector(CurrentCommand.EndPoint, 0));
					InitialLocation = GetActorLocation();
					GCodeCommands.RemoveAt(0);
				}
			}
		}
		else
		{
			bHasSimulationStarted = false;
			bIsValid = false;
		}

	}
	VisualizePath();
}

void ACuttingTip::VisualizePath()
{
	// FlushPersistentDebugLines(this->GetWorld());
	for (int32 i = 1; i < PathPoints.Num(); i++)
	{
		if (PathPoints[i - 1].bShouldDraw && PathPoints[i].bShouldDraw)
			DrawDebugLine(this->GetWorld(), PathPoints[i - 1].Location, PathPoints[i].Location, FColor::Black, true, -1.f, 1, LineThickness);
	}


}


