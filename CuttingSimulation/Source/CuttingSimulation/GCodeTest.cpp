// Fill out your copyright notice in the Description page of Project Settings.


#include "GCodeTest.h"
#include "GCode.h"
#include "CuttingSimulation/SimulationGameMode.h"

AGCodeTest::AGCodeTest()
{

}

void AGCodeTest::PrepareTest()
{
	Super::PrepareTest();

	FPathCommand PathCommand0 = { "LINE", FVector(5, 5, 0), FVector(0, 0, 0),true };
	FPathCommand PathCommand1 = { "LINE", FVector(1, 1, 0), FVector(0, 0, 0),false };
	FPathCommand PathCommand2 = { "ARC", FVector(2, 2, 0), FVector(3, 3, 0), true };
	FPathCommand PathCommand3 = { "ARC", FVector(0, 0, 0), FVector(1, 1, 0), false };

	GCode GCodeParser;

	TArray<FPathCommand> PathCommands;

	PathCommands.Add(PathCommand0);
	PathCommands.Add(PathCommand1);
	PathCommands.Add(PathCommand2);
	PathCommands.Add(PathCommand3);



	GCodeParser.ParseIntoGCode(PathCommands);

	AssertTrue(GCodeParser.GCodeCommands[0].CommandType == EGCodeCommandType::G01, TEXT("CommandType for G00"), this);
	AssertEqual_Float(GCodeParser.GCodeCommands[0].EndPoint.X, 5.0f, TEXT("EndPoint.X for G01"), KINDA_SMALL_NUMBER, this);
	AssertEqual_Float(GCodeParser.GCodeCommands[0].EndPoint.Y, 5.0f, TEXT("EndPoint.Y for G01"), KINDA_SMALL_NUMBER, this);
	AssertEqual_Float(GCodeParser.GCodeCommands[0].Z, -1.0f, TEXT("Z for G01"), KINDA_SMALL_NUMBER, this);

	AssertTrue(GCodeParser.GCodeCommands[1].CommandType == EGCodeCommandType::G00, TEXT("CommandType for G00"), this);
	AssertEqual_Float(GCodeParser.GCodeCommands[1].EndPoint.X, 1.0f, TEXT("EndPoint.X for G00"), KINDA_SMALL_NUMBER, this);
	AssertEqual_Float(GCodeParser.GCodeCommands[1].EndPoint.Y, 1.0f, TEXT("EndPoint.Y for G00"), KINDA_SMALL_NUMBER, this);
	AssertEqual_Float(GCodeParser.GCodeCommands[1].Z, 0.0f, TEXT("Z for G00"), KINDA_SMALL_NUMBER, this);

	AssertTrue(GCodeParser.GCodeCommands[2].CommandType == EGCodeCommandType::G02, TEXT("CommandType for G00"), this);
	AssertEqual_Float(GCodeParser.GCodeCommands[2].EndPoint.X, 2.0f, TEXT("EndPoint.X for G02"), KINDA_SMALL_NUMBER, this);
	AssertEqual_Float(GCodeParser.GCodeCommands[2].EndPoint.Y, 2.0f, TEXT("EndPoint.Y for G02"), KINDA_SMALL_NUMBER, this);
	AssertEqual_Float(GCodeParser.GCodeCommands[2].CircleCenter.X, 2.0f, TEXT("CircleCenter.X relative for G02"), KINDA_SMALL_NUMBER, this);
	AssertEqual_Float(GCodeParser.GCodeCommands[2].CircleCenter.Y, 2.0f, TEXT("CircleCenter.Y relative for G02"), KINDA_SMALL_NUMBER, this);
	AssertEqual_Float(GCodeParser.GCodeCommands[2].Z, -1.0f, TEXT("Z for G02"), KINDA_SMALL_NUMBER, this);

	AssertTrue(GCodeParser.GCodeCommands[3].CommandType == EGCodeCommandType::G03, TEXT("CommandType for G00"), this);
	AssertEqual_Float(GCodeParser.GCodeCommands[3].EndPoint.X, 0.0f, TEXT("EndPoint.X for G03"), KINDA_SMALL_NUMBER, this);
	AssertEqual_Float(GCodeParser.GCodeCommands[3].EndPoint.Y, 0.0f, TEXT("EndPoint.Y for G03"), KINDA_SMALL_NUMBER, this);
	AssertEqual_Float(GCodeParser.GCodeCommands[3].CircleCenter.X, -1.0f, TEXT("CircleCenter.X relative for G03"), KINDA_SMALL_NUMBER, this);
	AssertEqual_Float(GCodeParser.GCodeCommands[3].CircleCenter.Y, -1.0f, TEXT("CircleCenter.Y relative for G03"), KINDA_SMALL_NUMBER, this);
	AssertEqual_Float(GCodeParser.GCodeCommands[3].Z, -1.0f, TEXT("Z for G03"), KINDA_SMALL_NUMBER, this);

	FinishTest(EFunctionalTestResult::Succeeded, TEXT("GCode Test"));
}
