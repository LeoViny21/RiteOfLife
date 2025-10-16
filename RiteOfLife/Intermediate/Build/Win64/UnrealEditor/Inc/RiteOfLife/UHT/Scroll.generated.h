// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scroll.h"

#ifdef RITEOFLIFE_Scroll_generated_h
#error "Scroll.generated.h already included, missing '#pragma once' in Scroll.h"
#endif
#define RITEOFLIFE_Scroll_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AScroll ******************************************************************
RITEOFLIFE_API UClass* Z_Construct_UClass_AScroll_NoRegister();

#define FID_RiteOfLife_Source_RiteOfLife_Scroll_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScroll(); \
	friend struct Z_Construct_UClass_AScroll_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RITEOFLIFE_API UClass* Z_Construct_UClass_AScroll_NoRegister(); \
public: \
	DECLARE_CLASS2(AScroll, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RiteOfLife"), Z_Construct_UClass_AScroll_NoRegister) \
	DECLARE_SERIALIZER(AScroll)


#define FID_RiteOfLife_Source_RiteOfLife_Scroll_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AScroll(AScroll&&) = delete; \
	AScroll(const AScroll&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScroll); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScroll); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScroll) \
	NO_API virtual ~AScroll();


#define FID_RiteOfLife_Source_RiteOfLife_Scroll_h_9_PROLOG
#define FID_RiteOfLife_Source_RiteOfLife_Scroll_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RiteOfLife_Source_RiteOfLife_Scroll_h_12_INCLASS_NO_PURE_DECLS \
	FID_RiteOfLife_Source_RiteOfLife_Scroll_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AScroll;

// ********** End Class AScroll ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RiteOfLife_Source_RiteOfLife_Scroll_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
