// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FunctionalTest.h"
#include "UnitTest.generated.h"

/**
 * 
 */
UCLASS()
class CUTTINGSIMULATION_API AUnitTest : public AFunctionalTest
{
	GENERATED_BODY()

public:
	AUnitTest();

	virtual void PrepareTest() override;
};