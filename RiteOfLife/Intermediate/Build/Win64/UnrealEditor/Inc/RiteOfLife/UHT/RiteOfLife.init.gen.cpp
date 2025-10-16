// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiteOfLife_init() {}
	RITEOFLIFE_API UFunction* Z_Construct_UDelegateFunction_RiteOfLife_BulletCountUpdatedDelegate__DelegateSignature();
	RITEOFLIFE_API UFunction* Z_Construct_UDelegateFunction_RiteOfLife_DamagedDelegate__DelegateSignature();
	RITEOFLIFE_API UFunction* Z_Construct_UDelegateFunction_RiteOfLife_PawnDeathDelegate__DelegateSignature();
	RITEOFLIFE_API UFunction* Z_Construct_UDelegateFunction_RiteOfLife_SprintStateChangedDelegate__DelegateSignature();
	RITEOFLIFE_API UFunction* Z_Construct_UDelegateFunction_RiteOfLife_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RiteOfLife;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RiteOfLife()
	{
		if (!Z_Registration_Info_UPackage__Script_RiteOfLife.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RiteOfLife_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RiteOfLife_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RiteOfLife_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RiteOfLife_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RiteOfLife_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RiteOfLife",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x13362821,
				0x633FFE14,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RiteOfLife.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RiteOfLife.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RiteOfLife(Z_Construct_UPackage__Script_RiteOfLife, TEXT("/Script/RiteOfLife"), Z_Registration_Info_UPackage__Script_RiteOfLife, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x13362821, 0x633FFE14));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
