// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Separated/SeparatedGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeparatedGameModeBase() {}
// Cross Module References
	SEPARATED_API UClass* Z_Construct_UClass_ASeparatedGameModeBase_NoRegister();
	SEPARATED_API UClass* Z_Construct_UClass_ASeparatedGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Separated();
// End Cross Module References
	void ASeparatedGameModeBase::StaticRegisterNativesASeparatedGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASeparatedGameModeBase_NoRegister()
	{
		return ASeparatedGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASeparatedGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASeparatedGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Separated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SeparatedGameModeBase.h" },
		{ "ModuleRelativePath", "SeparatedGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASeparatedGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASeparatedGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASeparatedGameModeBase_Statics::ClassParams = {
		&ASeparatedGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASeparatedGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASeparatedGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASeparatedGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASeparatedGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASeparatedGameModeBase, 1244573185);
	template<> SEPARATED_API UClass* StaticClass<ASeparatedGameModeBase>()
	{
		return ASeparatedGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASeparatedGameModeBase(Z_Construct_UClass_ASeparatedGameModeBase, &ASeparatedGameModeBase::StaticClass, TEXT("/Script/Separated"), TEXT("ASeparatedGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASeparatedGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
