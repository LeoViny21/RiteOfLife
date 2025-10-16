// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RiteOfLifeGameMode.h"

#ifdef RITEOFLIFE_RiteOfLifeGameMode_generated_h
#error "RiteOfLifeGameMode.generated.h already included, missing '#pragma once' in RiteOfLifeGameMode.h"
#endif
#define RITEOFLIFE_RiteOfLifeGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARiteOfLifeGameMode ******************************************************
RITEOFLIFE_API UClass* Z_Construct_UClass_ARiteOfLifeGameMode_NoRegister();

#define FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARiteOfLifeGameMode(); \
	friend struct Z_Construct_UClass_ARiteOfLifeGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RITEOFLIFE_API UClass* Z_Construct_UClass_ARiteOfLifeGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ARiteOfLifeGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RiteOfLife"), Z_Construct_UClass_ARiteOfLifeGameMode_NoRegister) \
	DECLARE_SERIALIZER(ARiteOfLifeGameMode)


#define FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARiteOfLifeGameMode(ARiteOfLifeGameMode&&) = delete; \
	ARiteOfLifeGameMode(const ARiteOfLifeGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARiteOfLifeGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARiteOfLifeGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ARiteOfLifeGameMode) \
	NO_API virtual ~ARiteOfLifeGameMode();


#define FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeGameMode_h_12_PROLOG
#define FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARiteOfLifeGameMode;

// ********** End Class ARiteOfLifeGameMode ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
