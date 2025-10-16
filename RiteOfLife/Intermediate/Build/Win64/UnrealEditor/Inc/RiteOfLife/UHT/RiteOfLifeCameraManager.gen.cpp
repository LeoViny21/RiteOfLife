// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RiteOfLifeCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRiteOfLifeCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
RITEOFLIFE_API UClass* Z_Construct_UClass_ARiteOfLifeCameraManager();
RITEOFLIFE_API UClass* Z_Construct_UClass_ARiteOfLifeCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_RiteOfLife();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARiteOfLifeCameraManager *************************************************
void ARiteOfLifeCameraManager::StaticRegisterNativesARiteOfLifeCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARiteOfLifeCameraManager;
UClass* ARiteOfLifeCameraManager::GetPrivateStaticClass()
{
	using TClass = ARiteOfLifeCameraManager;
	if (!Z_Registration_Info_UClass_ARiteOfLifeCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RiteOfLifeCameraManager"),
			Z_Registration_Info_UClass_ARiteOfLifeCameraManager.InnerSingleton,
			StaticRegisterNativesARiteOfLifeCameraManager,
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
	return Z_Registration_Info_UClass_ARiteOfLifeCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ARiteOfLifeCameraManager_NoRegister()
{
	return ARiteOfLifeCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARiteOfLifeCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "RiteOfLifeCameraManager.h" },
		{ "ModuleRelativePath", "RiteOfLifeCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARiteOfLifeCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARiteOfLifeCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_RiteOfLife,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARiteOfLifeCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARiteOfLifeCameraManager_Statics::ClassParams = {
	&ARiteOfLifeCameraManager::StaticClass,
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
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARiteOfLifeCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ARiteOfLifeCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARiteOfLifeCameraManager()
{
	if (!Z_Registration_Info_UClass_ARiteOfLifeCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARiteOfLifeCameraManager.OuterSingleton, Z_Construct_UClass_ARiteOfLifeCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARiteOfLifeCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARiteOfLifeCameraManager);
ARiteOfLifeCameraManager::~ARiteOfLifeCameraManager() {}
// ********** End Class ARiteOfLifeCameraManager ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeCameraManager_h__Script_RiteOfLife_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARiteOfLifeCameraManager, ARiteOfLifeCameraManager::StaticClass, TEXT("ARiteOfLifeCameraManager"), &Z_Registration_Info_UClass_ARiteOfLifeCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARiteOfLifeCameraManager), 1795218583U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeCameraManager_h__Script_RiteOfLife_742917074(TEXT("/Script/RiteOfLife"),
	Z_CompiledInDeferFile_FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeCameraManager_h__Script_RiteOfLife_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeCameraManager_h__Script_RiteOfLife_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
