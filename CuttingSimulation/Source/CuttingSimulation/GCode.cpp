// Fill out your copyright notice in the Description page of Project Settings.


#include "GCode.h"
#include "SimulationGameMode.h"

GCode::GCode()
{
}

void GCode::ParsePathCommandToGCode(const FPathCommand& PathCommand)
{
	FGCodeCommand GCodeCommand;

	if (PathCommand.CommandType == TEXT("LINE"))
	{
		if (PathCommand.bIsCuttingIsClockwise)
		{
			GCodeCommand.CommandType = EGCodeCommandType::G01;
			GCodeCommand.Z = -1;
		}
		else
		{
			GCodeCommand.CommandType = EGCodeCommandType::G00;
			GCodeCommand.Z = 0;
		}
		GCodeCommand.EndPoint = FVector2D(PathCommand.EndPoint);
		GCodeCommand.CircleCenter = FVector2D::ZeroVector;
	}
	else if (PathCommand.CommandType == TEXT("ARC"))
	{
		if (PathCommand.bIsCuttingIsClockwise)
		{
			GCodeCommand.CommandType = EGCodeCommandType::G02;
		}
		else
		{
			GCodeCommand.CommandType = EGCodeCommandType::G03;
		}
		FVector2D PreviousLocation = FVector2D::ZeroVector;
		if (GCodeCommands.Num()>0)
		{
			PreviousLocation = GCodeCommands.Last().EndPoint;
		}
		GCodeCommand.EndPoint = FVector2D(PathCommand.EndPoint);
		GCodeCommand.CircleCenter = FVector2D(PathCommand.CircleCenter) - PreviousLocation;
		GCodeCommand.Z = -1;
	}

	GCodeCommands.Add(GCodeCommand);
}

void GCode::ParseIntoGCode(const TArray<FPathCommand>& PathCommands)
{
	for (const FPathCommand& PathCommand : PathCommands)
	{
		ParsePathCommandToGCode(PathCommand);
	}
}

GCode::~GCode()
{
}

void GCode::EmptyData()
{
	GCodeCommands.Empty();
}

void GCode::FileOutputGCode()
{
	IFileManager& FileManager = IFileManager::Get();
	FString FilePath = TEXT("D:\\Out.txt");  // Assuming you want to write to "Out.txt" on the D: drive

	// Open the file for writing
	FArchive* FileArchive = FileManager.CreateFileWriter(*FilePath);
	if (FileArchive)
	{
		for (const FGCodeCommand& GCodeCommand : GCodeCommands)
		{
			// Convert GCodeCommand to a string and write it to the file
			FString CommandString;
			switch (GCodeCommand.CommandType)
			{
			case EGCodeCommandType::G00:
				CommandString = FString::Printf(TEXT("G00 X%.2f Y%.2f Z%.2f"), GCodeCommand.EndPoint.X, GCodeCommand.EndPoint.Y, GCodeCommand.Z);
				break;

			case EGCodeCommandType::G01:
				CommandString = FString::Printf(TEXT("G01 X%.2f Y%.2f Z%.2f"), GCodeCommand.EndPoint.X, GCodeCommand.EndPoint.Y, GCodeCommand.Z);
				break;

			case EGCodeCommandType::G02:
				CommandString = FString::Printf(TEXT("G02 X%.2f Y%.2f I%.2f J%.2f Z%.2f"), GCodeCommand.EndPoint.X, GCodeCommand.EndPoint.Y, GCodeCommand.CircleCenter.X, GCodeCommand.CircleCenter.Y, GCodeCommand.Z);
				break;

			case EGCodeCommandType::G03:
				CommandString = FString::Printf(TEXT("G03 X%.2f Y%.2f I%.2f J%.2f Z%.2f"), GCodeCommand.EndPoint.X, GCodeCommand.EndPoint.Y, GCodeCommand.CircleCenter.X, GCodeCommand.CircleCenter.Y, GCodeCommand.Z);
				break;
			}

			// Write the command string to the file
			FileArchive->Serialize((void*)TCHAR_TO_ANSI(*CommandString), CommandString.Len());
			FileArchive->Serialize((void*)"\r\n", 2);  // Add a newline after each command
		}

		// Close the file
		delete FileArchive;

		UE_LOG(LogTemp, Warning, TEXT("File successfully saved."));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to save file. Error: %s"), *FPaths::GetProjectFilePath());
	}
}

