// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L02/MuroDeProteccion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroDeProteccion() {}
// Cross Module References
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_AMuroDeProteccion_NoRegister();
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_AMuroDeProteccion();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L02();
// End Cross Module References
	void AMuroDeProteccion::StaticRegisterNativesAMuroDeProteccion()
	{
	}
	UClass* Z_Construct_UClass_AMuroDeProteccion_NoRegister()
	{
		return AMuroDeProteccion::StaticClass();
	}
	struct Z_Construct_UClass_AMuroDeProteccion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroDeProteccion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroDeProteccion_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MuroDeProteccion.h" },
		{ "ModuleRelativePath", "MuroDeProteccion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroDeProteccion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroDeProteccion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroDeProteccion_Statics::ClassParams = {
		&AMuroDeProteccion::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMuroDeProteccion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroDeProteccion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroDeProteccion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroDeProteccion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroDeProteccion, 1758304880);
	template<> GALAGA_USFX_L02_API UClass* StaticClass<AMuroDeProteccion>()
	{
		return AMuroDeProteccion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroDeProteccion(Z_Construct_UClass_AMuroDeProteccion, &AMuroDeProteccion::StaticClass, TEXT("/Script/Galaga_USFX_L02"), TEXT("AMuroDeProteccion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroDeProteccion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
