// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RiteOfLifePlayerController.h"

#ifdef RITEOFLIFE_RiteOfLifePlayerController_generated_h
#error "RiteOfLifePlayerController.generated.h already included, missing '#pragma once' in RiteOfLifePlayerController.h"
#endif
#define RITEOFLIFE_RiteOfLifePlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARiteOfLifePlayerController **********************************************
RITEOFLIFE_API UClass* Z_Construct_UClass_ARiteOfLifePlayerController_NoRegister();

#define FID_RiteOfLife_Source_RiteOfLife_RiteOfLifePlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARiteOfLifePlayerController(); \
	friend struct Z_Construct_UClass_ARiteOfLifePlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RITEOFLIFE_API UClass* Z_Construct_UClass_ARiteOfLifePlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ARiteOfLifePlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/RiteOfLife"), Z_Construct_UClass_ARiteOfLifePlayerController_NoRegister) \
	DECLARE_SERIALIZER(ARiteOfLifePlayerController)


#define FID_RiteOfLife_Source_RiteOfLife_RiteOfLifePlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARiteOfLifePlayerController(ARiteOfLifePlayerController&&) = delete; \
	ARiteOfLifePlayerController(const ARiteOfLifePlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARiteOfLifePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARiteOfLifePlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ARiteOfLifePlayerController) \
	NO_API virtual ~ARiteOfLifePlayerController();


#define FID_RiteOfLife_Source_RiteOfLife_RiteOfLifePlayerController_h_17_PROLOG
#define FID_RiteOfLife_Source_RiteOfLife_RiteOfLifePlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RiteOfLife_Source_RiteOfLife_RiteOfLifePlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_RiteOfLife_Source_RiteOfLife_RiteOfLifePlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARiteOfLifePlayerController;

// ********** End Class ARiteOfLifePlayerController ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RiteOfLife_Source_RiteOfLife_RiteOfLifePlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
