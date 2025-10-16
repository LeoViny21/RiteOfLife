// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Scroll.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeScroll() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
RITEOFLIFE_API UClass* Z_Construct_UClass_AScroll();
RITEOFLIFE_API UClass* Z_Construct_UClass_AScroll_NoRegister();
UPackage* Z_Construct_UPackage__Script_RiteOfLife();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AScroll ******************************************************************
void AScroll::StaticRegisterNativesAScroll()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AScroll;
UClass* AScroll::GetPrivateStaticClass()
{
	using TClass = AScroll;
	if (!Z_Registration_Info_UClass_AScroll.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Scroll"),
			Z_Registration_Info_UClass_AScroll.InnerSingleton,
			StaticRegisterNativesAScroll,
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
	return Z_Registration_Info_UClass_AScroll.InnerSingleton;
}
UClass* Z_Construct_UClass_AScroll_NoRegister()
{
	return AScroll::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AScroll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Scroll.h" },
		{ "ModuleRelativePath", "Scroll.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScroll>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AScroll_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RiteOfLife,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScroll_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AScroll_Statics::ClassParams = {
	&AScroll::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScroll_Statics::Class_MetaDataParams), Z_Construct_UClass_AScroll_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AScroll()
{
	if (!Z_Registration_Info_UClass_AScroll.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScroll.OuterSingleton, Z_Construct_UClass_AScroll_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AScroll.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AScroll);
AScroll::~AScroll() {}
// ********** End Class AScroll ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RiteOfLife_Source_RiteOfLife_Scroll_h__Script_RiteOfLife_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AScroll, AScroll::StaticClass, TEXT("AScroll"), &Z_Registration_Info_UClass_AScroll, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScroll), 845768292U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RiteOfLife_Source_RiteOfLife_Scroll_h__Script_RiteOfLife_2663147483(TEXT("/Script/RiteOfLife"),
	Z_CompiledInDeferFile_FID_RiteOfLife_Source_RiteOfLife_Scroll_h__Script_RiteOfLife_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RiteOfLife_Source_RiteOfLife_Scroll_h__Script_RiteOfLife_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
