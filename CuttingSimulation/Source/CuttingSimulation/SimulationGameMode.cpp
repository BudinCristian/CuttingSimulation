// Fill out your copyright notice in the Description page of Project Settings.


#include "SimulationGameMode.h"
#include "IDesktopPlatform.h"
#include "DesktopPlatformModule.h"
#include "GenericPlatform/GenericPlatformFile.h"


void ASimulationGameMode::BeginPlay()
{
	Super::BeginPlay();
	bIsValid = false;
	ParseError = TEXT("");
}

bool ASimulationGameMode::OpenFiles()
{
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();

	FString Title = FString(TEXT("Open File Dialog"));
	FString DefaultPath = FString(TEXT("D:"));
	FString DefaultFile = FString(TEXT(""));
	FString FileTypes = FString(TEXT("Text Files (*.txt)|*.txt"));

	TArray<FString> OutOpenFilenames;

	bool bOpened = false;

	if (DesktopPlatform)
	{
		bOpened = DesktopPlatform->OpenFileDialog(
			GEngine->GameViewport->GetWindow()->GetNativeWindow()->GetOSWindowHandle(),
			Title,
			DefaultPath,
			DefaultFile,
			FileTypes,
			EFileDialogFlags::None,
			OutOpenFilenames
		);
	}

	if (bOpened)
	{
		EmptyData();
		if (OutOpenFilenames.Num() > 0)
		{
			FString SelectedFile = OutOpenFilenames[0];

			IFileManager& FileManager = IFileManager::Get();
			if (FileManager.FileExists(*SelectedFile))
			{
				FString FileContents;
				if (FFileHelper::LoadFileToString(FileContents, *SelectedFile))
				{
					ParseInputString(FileContents);
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("Could not read from file."));
				}
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("File does not exist."));
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("File dialog was canceled or encountered an error."));
	}

	if (bOpened && bIsValid)
	{
		GCodeData.ParseIntoGCode(PathCommands);
	}

	return bOpened && bIsValid;
}


void ASimulationGameMode::EmptyData()
{
	PathCommands.Empty();
	GCodeData.EmptyData();
}

void ASimulationGameMode::ParseInputString(const FString& InputString)
{
	ParseError = TEXT("");
	bIsValid = true;
	TArray<FString> Lines;
	InputString.ParseIntoArray(Lines, TEXT("\n"), true);
	int32 LineIndex = 0;

	for (const FString& Line : Lines)
	{
		
		if (Line.TrimStartAndEnd().IsEmpty())
		{
			continue;
		}

		TArray<FString> Tokens;
		Line.ParseIntoArray(Tokens, TEXT(" "), true);

		if (Tokens.Num() > 0)
		{
			FPathCommand Command;
			Command.CommandType = Tokens[0];

			if (Command.CommandType == "LINE" && Tokens.Num() == 4)
			{
				if (Tokens[1].IsNumeric() && Tokens[2].IsNumeric())
				{
					Command.EndPoint = FVector(FCString::Atof(*Tokens[1]), -FCString::Atof(*Tokens[2]), 0);
					if (FMath::Abs(Command.EndPoint.X) > 1000000.0f || FMath::Abs(Command.EndPoint.Y) > 1000000.0f)
					{
						bIsValid = false;
						ParseError = FString::Printf(TEXT("Error at line %d, numeric values \nfor LINE command are greater than 1 million."), LineIndex);
						return;
					}
				}
				else
				{
					bIsValid = false;
					ParseError = FString::Printf(TEXT("Error at line %d, invalid numeric values for LINE command."), LineIndex);
					return;
				}
				if (Tokens[3].TrimStartAndEnd().Compare(FString("0")) == 0)
				{
					Command.bIsCuttingIsClockwise = false;
				}
				else
				{
					Command.bIsCuttingIsClockwise = true;
				}
			}
			else if (Command.CommandType == "ARC" && Tokens.Num() == 6)
			{
				if (Tokens[1].IsNumeric() && Tokens[2].IsNumeric() && Tokens[3].IsNumeric() && Tokens[4].IsNumeric())
				{
					Command.EndPoint = FVector(FCString::Atof(*Tokens[1]), -FCString::Atof(*Tokens[2]), 0);
					Command.CircleCenter = FVector(FCString::Atof(*Tokens[3]), -FCString::Atof(*Tokens[4]), 0);

					if (FMath::Abs(Command.EndPoint.X) > 1000000.0f || FMath::Abs(Command.EndPoint.Y) > 1000000.0f ||
						FMath::Abs(Command.CircleCenter.X) > 1000000.0f || FMath::Abs(Command.CircleCenter.Y) > 1000000.0f)
					{
						bIsValid = false;
						ParseError = FString::Printf(TEXT("Error at line %d, numeric values \nfor ARC command are greater than 1 million."), LineIndex);
						return;
					}
				}
				else
				{
					bIsValid = false;
					ParseError = FString::Printf(TEXT("Error at line %d, invalid numeric values for ARC command."), LineIndex);
					return;
				}

				if (Tokens[5].TrimStartAndEnd().Compare(FString("0")) == 0)
				{
					Command.bIsCuttingIsClockwise = false;
				}
				else
				{
					Command.bIsCuttingIsClockwise = true;
				}
				if (FMath::Abs(FVector::Dist(Command.CircleCenter, Command.EndPoint) - FVector::Dist(Command.CircleCenter, PathCommands.Last().EndPoint)) > 0.5f)
				{
					bIsValid = false;
					ParseError = FString::Printf(TEXT("Error at line %d, arc endpoint \nis not on the circle."), LineIndex);
					return;
				}
			}
			else
			{
				bIsValid = false;
				ParseError = FString::Printf(TEXT("Error at line %d"), LineIndex);
				return;
			}

			PathCommands.Add(Command);
		}
		LineIndex++;
	}
}
