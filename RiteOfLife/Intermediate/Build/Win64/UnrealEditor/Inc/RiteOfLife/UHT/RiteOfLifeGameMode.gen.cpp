// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RiteOfLifeGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRiteOfLifeGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
RITEOFLIFE_API UClass* Z_Construct_UClass_ARiteOfLifeGameMode();
RITEOFLIFE_API UClass* Z_Construct_UClass_ARiteOfLifeGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_RiteOfLife();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARiteOfLifeGameMode ******************************************************
void ARiteOfLifeGameMode::StaticRegisterNativesARiteOfLifeGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARiteOfLifeGameMode;
UClass* ARiteOfLifeGameMode::GetPrivateStaticClass()
{
	using TClass = ARiteOfLifeGameMode;
	if (!Z_Registration_Info_UClass_ARiteOfLifeGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RiteOfLifeGameMode"),
			Z_Registration_Info_UClass_ARiteOfLifeGameMode.InnerSingleton,
			StaticRegisterNativesARiteOfLifeGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ARiteOfLifeGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ARiteOfLifeGameMode_NoRegister()
{
	return ARiteOfLifeGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARiteOfLifeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RiteOfLifeGameMode.h" },
		{ "ModuleRelativePath", "RiteOfLifeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARiteOfLifeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARiteOfLifeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RiteOfLife,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARiteOfLifeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARiteOfLifeGameMode_Statics::ClassParams = {
	&ARiteOfLifeGameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARiteOfLifeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARiteOfLifeGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARiteOfLifeGameMode()
{
	if (!Z_Registration_Info_UClass_ARiteOfLifeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARiteOfLifeGameMode.OuterSingleton, Z_Construct_UClass_ARiteOfLifeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARiteOfLifeGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARiteOfLifeGameMode);
ARiteOfLifeGameMode::~ARiteOfLifeGameMode() {}
// ********** End Class ARiteOfLifeGameMode ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeGameMode_h__Script_RiteOfLife_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARiteOfLifeGameMode, ARiteOfLifeGameMode::StaticClass, TEXT("ARiteOfLifeGameMode"), &Z_Registration_Info_UClass_ARiteOfLifeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARiteOfLifeGameMode), 718137544U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeGameMode_h__Script_RiteOfLife_692491730(TEXT("/Script/RiteOfLife"),
	Z_CompiledInDeferFile_FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeGameMode_h__Script_RiteOfLife_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeGameMode_h__Script_RiteOfLife_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
