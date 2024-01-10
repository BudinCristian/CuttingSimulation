// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CuttingSimulation/CuttingTip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCuttingTip() {}
// Cross Module References
	CUTTINGSIMULATION_API UClass* Z_Construct_UClass_ACuttingTip();
	CUTTINGSIMULATION_API UClass* Z_Construct_UClass_ACuttingTip_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CuttingSimulation();
// End Cross Module References
	DEFINE_FUNCTION(ACuttingTip::execStartSimulation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSimulation();
		P_NATIVE_END;
	}
	void ACuttingTip::StaticRegisterNativesACuttingTip()
	{
		UClass* Class = ACuttingTip::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartSimulation", &ACuttingTip::execStartSimulation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACuttingTip_StartSimulation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACuttingTip_StartSimulation_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnClick" },
		{ "ModuleRelativePath", "CuttingTip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACuttingTip_StartSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACuttingTip, nullptr, "StartSimulation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACuttingTip_StartSimulation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACuttingTip_StartSimulation_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACuttingTip_StartSimulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACuttingTip_StartSimulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACuttingTip);
	UClass* Z_Construct_UClass_ACuttingTip_NoRegister()
	{
		return ACuttingTip::StaticClass();
	}
	struct Z_Construct_UClass_ACuttingTip_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACuttingTip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CuttingSimulation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACuttingTip_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACuttingTip_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACuttingTip_StartSimulation, "StartSimulation" }, // 2861980555
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACuttingTip_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACuttingTip_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CuttingTip.h" },
		{ "ModuleRelativePath", "CuttingTip.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACuttingTip_Statics::NewProp_LineThickness_MetaData[] = {
		{ "Category", "CuttingTip" },
		{ "ModuleRelativePath", "CuttingTip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACuttingTip_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACuttingTip, LineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACuttingTip_Statics::NewProp_LineThickness_MetaData), Z_Construct_UClass_ACuttingTip_Statics::NewProp_LineThickness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACuttingTip_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CuttingTip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACuttingTip_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACuttingTip, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACuttingTip_Statics::NewProp_StaticMeshComponent_MetaData), Z_Construct_UClass_ACuttingTip_Statics::NewProp_StaticMeshComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACuttingTip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACuttingTip_Statics::NewProp_LineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACuttingTip_Statics::NewProp_StaticMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACuttingTip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACuttingTip>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACuttingTip_Statics::ClassParams = {
		&ACuttingTip::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACuttingTip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACuttingTip_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACuttingTip_Statics::Class_MetaDataParams), Z_Construct_UClass_ACuttingTip_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACuttingTip_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACuttingTip()
	{
		if (!Z_Registration_Info_UClass_ACuttingTip.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACuttingTip.OuterSingleton, Z_Construct_UClass_ACuttingTip_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACuttingTip.OuterSingleton;
	}
	template<> CUTTINGSIMULATION_API UClass* StaticClass<ACuttingTip>()
	{
		return ACuttingTip::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACuttingTip);
	ACuttingTip::~ACuttingTip() {}
	struct Z_CompiledInDeferFile_FID_CuttingSimulation_Source_CuttingSimulation_CuttingTip_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CuttingSimulation_Source_CuttingSimulation_CuttingTip_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACuttingTip, ACuttingTip::StaticClass, TEXT("ACuttingTip"), &Z_Registration_Info_UClass_ACuttingTip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACuttingTip), 631768389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CuttingSimulation_Source_CuttingSimulation_CuttingTip_h_3930010148(TEXT("/Script/CuttingSimulation"),
		Z_CompiledInDeferFile_FID_CuttingSimulation_Source_CuttingSimulation_CuttingTip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CuttingSimulation_Source_CuttingSimulation_CuttingTip_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
