// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mrpoopybutthole/JoyconOnePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoyconOnePlayerController() {}
// Cross Module References
	MRPOOPYBUTTHOLE_API UClass* Z_Construct_UClass_AJoyconOnePlayerController_NoRegister();
	MRPOOPYBUTTHOLE_API UClass* Z_Construct_UClass_AJoyconOnePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Mrpoopybutthole();
// End Cross Module References
	void AJoyconOnePlayerController::StaticRegisterNativesAJoyconOnePlayerController()
	{
	}
	UClass* Z_Construct_UClass_AJoyconOnePlayerController_NoRegister()
	{
		return AJoyconOnePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AJoyconOnePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJoyconOnePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Mrpoopybutthole,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJoyconOnePlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "JoyconOnePlayerController.h" },
		{ "ModuleRelativePath", "JoyconOnePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJoyconOnePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJoyconOnePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJoyconOnePlayerController_Statics::ClassParams = {
		&AJoyconOnePlayerController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AJoyconOnePlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AJoyconOnePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJoyconOnePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJoyconOnePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJoyconOnePlayerController, 3843858646);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJoyconOnePlayerController(Z_Construct_UClass_AJoyconOnePlayerController, &AJoyconOnePlayerController::StaticClass, TEXT("/Script/Mrpoopybutthole"), TEXT("AJoyconOnePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJoyconOnePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
