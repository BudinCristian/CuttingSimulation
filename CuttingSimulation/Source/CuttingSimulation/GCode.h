// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

enum class EGCodeCommandType
{
	G00, // Rapid Positioning
	G01, // Linear Interpolation
	G02, // Circular Interpolation Clockwise
	G03  // Circular Interpolation Counterclockwise
};

struct FGCodeCommand
{
	EGCodeCommandType CommandType;
	FVector2D EndPoint;
	FVector2D CircleCenter;
	float Z;
};

/**
 * 
 */
class CUTTINGSIMULATION_API GCode
{
public:
	GCode();
	~GCode();


	void EmptyData();

	void FileOutputGCode();

	void ParseIntoGCode(const TArray<struct FPathCommand>& PathCommands);
	TArray<FGCodeCommand> GCodeCommands;

private:
	void ParsePathCommandToGCode(const struct FPathCommand& PathCommand);
};

