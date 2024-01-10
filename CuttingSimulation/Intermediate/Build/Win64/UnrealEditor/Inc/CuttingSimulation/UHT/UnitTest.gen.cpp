// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CuttingSimulation/UnitTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitTest() {}
// Cross Module References
	CUTTINGSIMULATION_API UClass* Z_Construct_UClass_AUnitTest();
	CUTTINGSIMULATION_API UClass* Z_Construct_UClass_AUnitTest_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTest();
	UPackage* Z_Construct_UPackage__Script_CuttingSimulation();
// End Cross Module References
	void AUnitTest::StaticRegisterNativesAUnitTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnitTest);
	UClass* Z_Construct_UClass_AUnitTest_NoRegister()
	{
		return AUnitTest::StaticClass();
	}
	struct Z_Construct_UClass_AUnitTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnitTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFunctionalTest,
		(UObject* (*)())Z_Construct_UPackage__Script_CuttingSimulation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnitTest_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnitTest_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Actor Input Rendering" },
		{ "IncludePath", "UnitTest.h" },
		{ "ModuleRelativePath", "UnitTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnitTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnitTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnitTest_Statics::ClassParams = {
		&AUnitTest::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnitTest_Statics::Class_MetaDataParams), Z_Construct_UClass_AUnitTest_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AUnitTest()
	{
		if (!Z_Registration_Info_UClass_AUnitTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnitTest.OuterSingleton, Z_Construct_UClass_AUnitTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnitTest.OuterSingleton;
	}
	template<> CUTTINGSIMULATION_API UClass* StaticClass<AUnitTest>()
	{
		return AUnitTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnitTest);
	AUnitTest::~AUnitTest() {}
	struct Z_CompiledInDeferFile_FID_CuttingSimulation_Source_CuttingSimulation_UnitTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CuttingSimulation_Source_CuttingSimulation_UnitTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnitTest, AUnitTest::StaticClass, TEXT("AUnitTest"), &Z_Registration_Info_UClass_AUnitTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnitTest), 4072033606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CuttingSimulation_Source_CuttingSimulation_UnitTest_h_1437039179(TEXT("/Script/CuttingSimulation"),
		Z_CompiledInDeferFile_FID_CuttingSimulation_Source_CuttingSimulation_UnitTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CuttingSimulation_Source_CuttingSimulation_UnitTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
