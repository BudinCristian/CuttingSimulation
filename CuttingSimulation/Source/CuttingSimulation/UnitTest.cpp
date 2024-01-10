// Fill out your copyright notice in the Description page of Project Settings.


#include "UnitTest.h"
#include "SimulationGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Tests/AutomationEditorCommon.h"
#include "FunctionalTest.h"


AUnitTest::AUnitTest()
{
	// This test will be executed as part of the automated functional test suite
	bIsEnabled = true;
}

void AUnitTest::PrepareTest()
{
	Super::PrepareTest();

	FString TestStringOk = TEXT(
		"LINE 100 500 0\n"
		"LINE 500 500 1\n"
		"ARC 0 500 250 500 0"
	);

	FString TestStringSpaces = TEXT(
		"LINE 100 500     0\n"
		"LINE 500 500 0\n\n"
		"ARC 0 500 250 500 0"
	);

	FString TestStringTooManyArgs = TEXT(
		"LINE 100 500 0 0\n"
		"LINE 500 500 0\n"
		"ARC 0 500 250 500 0"
	);

	FString TestStringWrongCommands = TEXT(
		"LINES 100 500 0\n"
		"LINE 500 500 0\n"
		"CIRCLE 0 500 250 500 0"
	);

	FString TestStringWrongInput = TEXT(
		"LINE 100a 500 0\n"
		"LINE 500sf 500 0\n"
		"ARC 0 500 250 500 0"
	);


	// Create an instance of the game mode
	AGameModeBase* GameMode = UGameplayStatics::GetGameMode(GetWorld());

	// Ensure the game mode is of the expected type
	ASimulationGameMode* SimulationGameMode = Cast<ASimulationGameMode>(GameMode);
	if (SimulationGameMode)
	{
		SimulationGameMode->ParseInputString(TestStringOk);

		AssertTrue(SimulationGameMode->bIsValid == true, TEXT("Is valid"), this);

		SimulationGameMode->ParseInputString(TestStringSpaces);

		AssertTrue(SimulationGameMode->bIsValid == true, TEXT("Is valid with spaces"), this);

		SimulationGameMode->ParseInputString(TestStringTooManyArgs);

		AssertTrue(SimulationGameMode->bIsValid == false, TEXT("Invalid with too many args"), this);

		SimulationGameMode->ParseInputString(TestStringWrongCommands);

		AssertTrue(SimulationGameMode->bIsValid == false, TEXT("Invalid with wrong commands"), this);

		SimulationGameMode->ParseInputString(TestStringWrongInput);

		AssertTrue(SimulationGameMode->bIsValid == false, TEXT("Invalid with wrong input"), this);

		FinishTest(EFunctionalTestResult::Succeeded, TEXT("Input Test"));
	}
	else
	{
		// Fail the test if the game mode is not of the expected type
		UE_LOG(LogTemp, Error, TEXT("Invalid game mode type for functional test."));
	}
}
