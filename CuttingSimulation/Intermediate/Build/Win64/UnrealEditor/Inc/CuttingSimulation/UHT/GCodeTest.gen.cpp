// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CuttingSimulation/GCodeTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGCodeTest() {}
// Cross Module References
	CUTTINGSIMULATION_API UClass* Z_Construct_UClass_AGCodeTest();
	CUTTINGSIMULATION_API UClass* Z_Construct_UClass_AGCodeTest_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTest();
	UPackage* Z_Construct_UPackage__Script_CuttingSimulation();
// End Cross Module References
	void AGCodeTest::StaticRegisterNativesAGCodeTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGCodeTest);
	UClass* Z_Construct_UClass_AGCodeTest_NoRegister()
	{
		return AGCodeTest::StaticClass();
	}
	struct Z_Construct_UClass_AGCodeTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGCodeTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFunctionalTest,
		(UObject* (*)())Z_Construct_UPackage__Script_CuttingSimulation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGCodeTest_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGCodeTest_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Actor Input Rendering" },
		{ "IncludePath", "GCodeTest.h" },
		{ "ModuleRelativePath", "GCodeTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGCodeTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGCodeTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGCodeTest_Statics::ClassParams = {
		&AGCodeTest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGCodeTest_Statics::Class_MetaDataParams), Z_Construct_UClass_AGCodeTest_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGCodeTest()
	{
		if (!Z_Registration_Info_UClass_AGCodeTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGCodeTest.OuterSingleton, Z_Construct_UClass_AGCodeTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGCodeTest.OuterSingleton;
	}
	template<> CUTTINGSIMULATION_API UClass* StaticClass<AGCodeTest>()
	{
		return AGCodeTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGCodeTest);
	AGCodeTest::~AGCodeTest() {}
	struct Z_CompiledInDeferFile_FID_CuttingSimulation_Source_CuttingSimulation_GCodeTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CuttingSimulation_Source_CuttingSimulation_GCodeTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGCodeTest, AGCodeTest::StaticClass, TEXT("AGCodeTest"), &Z_Registration_Info_UClass_AGCodeTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGCodeTest), 2404700754U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CuttingSimulation_Source_CuttingSimulation_GCodeTest_h_1896239802(TEXT("/Script/CuttingSimulation"),
		Z_CompiledInDeferFile_FID_CuttingSimulation_Source_CuttingSimulation_GCodeTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CuttingSimulation_Source_CuttingSimulation_GCodeTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
