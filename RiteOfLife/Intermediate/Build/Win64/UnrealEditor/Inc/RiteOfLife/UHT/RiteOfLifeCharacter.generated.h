// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RiteOfLifeCharacter.h"

#ifdef RITEOFLIFE_RiteOfLifeCharacter_generated_h
#error "RiteOfLifeCharacter.generated.h already included, missing '#pragma once' in RiteOfLifeCharacter.h"
#endif
#define RITEOFLIFE_RiteOfLifeCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARiteOfLifeCharacter *****************************************************
#define FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


RITEOFLIFE_API UClass* Z_Construct_UClass_ARiteOfLifeCharacter_NoRegister();

#define FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARiteOfLifeCharacter(); \
	friend struct Z_Construct_UClass_ARiteOfLifeCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RITEOFLIFE_API UClass* Z_Construct_UClass_ARiteOfLifeCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ARiteOfLifeCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/RiteOfLife"), Z_Construct_UClass_ARiteOfLifeCharacter_NoRegister) \
	DECLARE_SERIALIZER(ARiteOfLifeCharacter)


#define FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARiteOfLifeCharacter(ARiteOfLifeCharacter&&) = delete; \
	ARiteOfLifeCharacter(const ARiteOfLifeCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARiteOfLifeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARiteOfLifeCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ARiteOfLifeCharacter) \
	NO_API virtual ~ARiteOfLifeCharacter();


#define FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeCharacter_h_21_PROLOG
#define FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARiteOfLifeCharacter;

// ********** End Class ARiteOfLifeCharacter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
