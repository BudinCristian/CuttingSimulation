// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FunctionalTest.h"
#include "GCodeTest.generated.h"

/**
 * 
 */
UCLASS()
class CUTTINGSIMULATION_API AGCodeTest : public AFunctionalTest
{
	GENERATED_BODY()
public:
	AGCodeTest();

	virtual void PrepareTest() override;
};
