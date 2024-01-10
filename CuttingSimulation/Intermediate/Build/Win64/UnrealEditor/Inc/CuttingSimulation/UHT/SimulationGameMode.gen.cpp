// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CuttingSimulation/SimulationGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimulationGameMode() {}
// Cross Module References
	CUTTINGSIMULATION_API UClass* Z_Construct_UClass_ASimulationGameMode();
	CUTTINGSIMULATION_API UClass* Z_Construct_UClass_ASimulationGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CuttingSimulation();
// End Cross Module References
	DEFINE_FUNCTION(ASimulationGameMode::execOpenFiles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OpenFiles();
		P_NATIVE_END;
	}
	void ASimulationGameMode::StaticRegisterNativesASimulationGameMode()
	{
		UClass* Class = ASimulationGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenFiles", &ASimulationGameMode::execOpenFiles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASimulationGameMode_OpenFiles_Statics
	{
		struct SimulationGameMode_eventOpenFiles_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASimulationGameMode_OpenFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimulationGameMode_eventOpenFiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimulationGameMode_OpenFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimulationGameMode_eventOpenFiles_Parms), &Z_Construct_UFunction_ASimulationGameMode_OpenFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulationGameMode_OpenFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulationGameMode_OpenFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulationGameMode_OpenFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnClick" },
		{ "ModuleRelativePath", "SimulationGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulationGameMode_OpenFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulationGameMode, nullptr, "OpenFiles", nullptr, nullptr, Z_Construct_UFunction_ASimulationGameMode_OpenFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationGameMode_OpenFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASimulationGameMode_OpenFiles_Statics::SimulationGameMode_eventOpenFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationGameMode_OpenFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimulationGameMode_OpenFiles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationGameMode_OpenFiles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASimulationGameMode_OpenFiles_Statics::SimulationGameMode_eventOpenFiles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASimulationGameMode_OpenFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimulationGameMode_OpenFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASimulationGameMode);
	UClass* Z_Construct_UClass_ASimulationGameMode_NoRegister()
	{
		return ASimulationGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASimulationGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParseError_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParseError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASimulationGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CuttingSimulation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASimulationGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASimulationGameMode_OpenFiles, "OpenFiles" }, // 1286590355
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimulationGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SimulationGameMode.h" },
		{ "ModuleRelativePath", "SimulationGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimulationGameMode_Statics::NewProp_ParseError_MetaData[] = {
		{ "Category", "SimulationGameMode" },
		{ "ModuleRelativePath", "SimulationGameMode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASimulationGameMode_Statics::NewProp_ParseError = { "ParseError", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimulationGameMode, ParseError), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationGameMode_Statics::NewProp_ParseError_MetaData), Z_Construct_UClass_ASimulationGameMode_Statics::NewProp_ParseError_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASimulationGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulationGameMode_Statics::NewProp_ParseError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASimulationGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimulationGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASimulationGameMode_Statics::ClassParams = {
		&ASimulationGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASimulationGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASimulationGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationGameMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASimulationGameMode()
	{
		if (!Z_Registration_Info_UClass_ASimulationGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASimulationGameMode.OuterSingleton, Z_Construct_UClass_ASimulationGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASimulationGameMode.OuterSingleton;
	}
	template<> CUTTINGSIMULATION_API UClass* StaticClass<ASimulationGameMode>()
	{
		return ASimulationGameMode::StaticClass();
	}
	ASimulationGameMode::ASimulationGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimulationGameMode);
	ASimulationGameMode::~ASimulationGameMode() {}
	struct Z_CompiledInDeferFile_FID_CuttingSimulation_Source_CuttingSimulation_SimulationGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CuttingSimulation_Source_CuttingSimulation_SimulationGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASimulationGameMode, ASimulationGameMode::StaticClass, TEXT("ASimulationGameMode"), &Z_Registration_Info_UClass_ASimulationGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASimulationGameMode), 4232897808U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CuttingSimulation_Source_CuttingSimulation_SimulationGameMode_h_1665772060(TEXT("/Script/CuttingSimulation"),
		Z_CompiledInDeferFile_FID_CuttingSimulation_Source_CuttingSimulation_SimulationGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CuttingSimulation_Source_CuttingSimulation_SimulationGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
