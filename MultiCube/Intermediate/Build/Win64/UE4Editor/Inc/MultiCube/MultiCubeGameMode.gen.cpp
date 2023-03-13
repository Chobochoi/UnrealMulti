// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiCube/MultiCubeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiCubeGameMode() {}
// Cross Module References
	MULTICUBE_API UClass* Z_Construct_UClass_AMultiCubeGameMode_NoRegister();
	MULTICUBE_API UClass* Z_Construct_UClass_AMultiCubeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MultiCube();
// End Cross Module References
	void AMultiCubeGameMode::StaticRegisterNativesAMultiCubeGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMultiCubeGameMode_NoRegister()
	{
		return AMultiCubeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMultiCubeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiCubeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiCube,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiCubeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MultiCubeGameMode.h" },
		{ "ModuleRelativePath", "MultiCubeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiCubeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiCubeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMultiCubeGameMode_Statics::ClassParams = {
		&AMultiCubeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMultiCubeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiCubeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMultiCubeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMultiCubeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMultiCubeGameMode, 1030996352);
	template<> MULTICUBE_API UClass* StaticClass<AMultiCubeGameMode>()
	{
		return AMultiCubeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMultiCubeGameMode(Z_Construct_UClass_AMultiCubeGameMode, &AMultiCubeGameMode::StaticClass, TEXT("/Script/MultiCube"), TEXT("AMultiCubeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiCubeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
