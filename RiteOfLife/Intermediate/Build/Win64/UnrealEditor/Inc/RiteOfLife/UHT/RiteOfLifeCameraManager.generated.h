// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RiteOfLifeCameraManager.h"

#ifdef RITEOFLIFE_RiteOfLifeCameraManager_generated_h
#error "RiteOfLifeCameraManager.generated.h already included, missing '#pragma once' in RiteOfLifeCameraManager.h"
#endif
#define RITEOFLIFE_RiteOfLifeCameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARiteOfLifeCameraManager *************************************************
RITEOFLIFE_API UClass* Z_Construct_UClass_ARiteOfLifeCameraManager_NoRegister();

#define FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeCameraManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARiteOfLifeCameraManager(); \
	friend struct Z_Construct_UClass_ARiteOfLifeCameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RITEOFLIFE_API UClass* Z_Construct_UClass_ARiteOfLifeCameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ARiteOfLifeCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RiteOfLife"), Z_Construct_UClass_ARiteOfLifeCameraManager_NoRegister) \
	DECLARE_SERIALIZER(ARiteOfLifeCameraManager)


#define FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeCameraManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARiteOfLifeCameraManager(ARiteOfLifeCameraManager&&) = delete; \
	ARiteOfLifeCameraManager(const ARiteOfLifeCameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARiteOfLifeCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARiteOfLifeCameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARiteOfLifeCameraManager) \
	NO_API virtual ~ARiteOfLifeCameraManager();


#define FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeCameraManager_h_13_PROLOG
#define FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeCameraManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeCameraManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeCameraManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARiteOfLifeCameraManager;

// ********** End Class ARiteOfLifeCameraManager ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RiteOfLife_Source_RiteOfLife_RiteOfLifeCameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
