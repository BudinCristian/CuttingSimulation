// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimulationGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUTTINGSIMULATION_SimulationGameMode_generated_h
#error "SimulationGameMode.generated.h already included, missing '#pragma once' in SimulationGameMode.h"
#endif
#define CUTTINGSIMULATION_SimulationGameMode_generated_h

#define FID_CuttingSimulation_Source_CuttingSimulation_SimulationGameMode_h_32_SPARSE_DATA
#define FID_CuttingSimulation_Source_CuttingSimulation_SimulationGameMode_h_32_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_CuttingSimulation_Source_CuttingSimulation_SimulationGameMode_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_CuttingSimulation_Source_CuttingSimulation_SimulationGameMode_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenFiles);


#define FID_CuttingSimulation_Source_CuttingSimulation_SimulationGameMode_h_32_ACCESSORS
#define FID_CuttingSimulation_Source_CuttingSimulation_SimulationGameMode_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASimulationGameMode(); \
	friend struct Z_Construct_UClass_ASimulationGameMode_Statics; \
public: \
	DECLARE_CLASS(ASimulationGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CuttingSimulation"), NO_API) \
	DECLARE_SERIALIZER(ASimulationGameMode)


#define FID_CuttingSimulation_Source_CuttingSimulation_SimulationGameMode_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASimulationGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASimulationGameMode(ASimulationGameMode&&); \
	NO_API ASimulationGameMode(const ASimulationGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimulationGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimulationGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASimulationGameMode) \
	NO_API virtual ~ASimulationGameMode();


#define FID_CuttingSimulation_Source_CuttingSimulation_SimulationGameMode_h_29_PROLOG
#define FID_CuttingSimulation_Source_CuttingSimulation_SimulationGameMode_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CuttingSimulation_Source_CuttingSimulation_SimulationGameMode_h_32_SPARSE_DATA \
	FID_CuttingSimulation_Source_CuttingSimulation_SimulationGameMode_h_32_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_CuttingSimulation_Source_CuttingSimulation_SimulationGameMode_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_CuttingSimulation_Source_CuttingSimulation_SimulationGameMode_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CuttingSimulation_Source_CuttingSimulation_SimulationGameMode_h_32_ACCESSORS \
	FID_CuttingSimulation_Source_CuttingSimulation_SimulationGameMode_h_32_INCLASS_NO_PURE_DECLS \
	FID_CuttingSimulation_Source_CuttingSimulation_SimulationGameMode_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUTTINGSIMULATION_API UClass* StaticClass<class ASimulationGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CuttingSimulation_Source_CuttingSimulation_SimulationGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
