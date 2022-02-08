// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YOUNGLINGS_RunCharacter_generated_h
#error "RunCharacter.generated.h already included, missing '#pragma once' in RunCharacter.h"
#endif
#define YOUNGLINGS_RunCharacter_generated_h

#define Younglings_Source_Younglings_RunCharacter_h_12_SPARSE_DATA
#define Younglings_Source_Younglings_RunCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDeath); \
	DECLARE_FUNCTION(execMoveDown); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveLeft); \
	DECLARE_FUNCTION(execResetLevel); \
	DECLARE_FUNCTION(execAddCoin); \
	DECLARE_FUNCTION(execDeath); \
	DECLARE_FUNCTION(execChangeLaneFinished); \
	DECLARE_FUNCTION(execChangeLaneUpdate);


#define Younglings_Source_Younglings_RunCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDeath); \
	DECLARE_FUNCTION(execMoveDown); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveLeft); \
	DECLARE_FUNCTION(execResetLevel); \
	DECLARE_FUNCTION(execAddCoin); \
	DECLARE_FUNCTION(execDeath); \
	DECLARE_FUNCTION(execChangeLaneFinished); \
	DECLARE_FUNCTION(execChangeLaneUpdate);


#define Younglings_Source_Younglings_RunCharacter_h_12_EVENT_PARMS
#define Younglings_Source_Younglings_RunCharacter_h_12_CALLBACK_WRAPPERS
#define Younglings_Source_Younglings_RunCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARunCharacter(); \
	friend struct Z_Construct_UClass_ARunCharacter_Statics; \
public: \
	DECLARE_CLASS(ARunCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Younglings"), NO_API) \
	DECLARE_SERIALIZER(ARunCharacter)


#define Younglings_Source_Younglings_RunCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARunCharacter(); \
	friend struct Z_Construct_UClass_ARunCharacter_Statics; \
public: \
	DECLARE_CLASS(ARunCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Younglings"), NO_API) \
	DECLARE_SERIALIZER(ARunCharacter)


#define Younglings_Source_Younglings_RunCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARunCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARunCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunCharacter(ARunCharacter&&); \
	NO_API ARunCharacter(const ARunCharacter&); \
public:


#define Younglings_Source_Younglings_RunCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunCharacter(ARunCharacter&&); \
	NO_API ARunCharacter(const ARunCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARunCharacter)


#define Younglings_Source_Younglings_RunCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraArm() { return STRUCT_OFFSET(ARunCharacter, CameraArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ARunCharacter, Camera); } \
	FORCEINLINE static uint32 __PPO__RunGameMode() { return STRUCT_OFFSET(ARunCharacter, RunGameMode); } \
	FORCEINLINE static uint32 __PPO__RestartTimerHandle() { return STRUCT_OFFSET(ARunCharacter, RestartTimerHandle); } \
	FORCEINLINE static uint32 __PPO__bIsDead() { return STRUCT_OFFSET(ARunCharacter, bIsDead); } \
	FORCEINLINE static uint32 __PPO__PlayerStart() { return STRUCT_OFFSET(ARunCharacter, PlayerStart); }


#define Younglings_Source_Younglings_RunCharacter_h_9_PROLOG \
	Younglings_Source_Younglings_RunCharacter_h_12_EVENT_PARMS


#define Younglings_Source_Younglings_RunCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Younglings_Source_Younglings_RunCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Younglings_Source_Younglings_RunCharacter_h_12_SPARSE_DATA \
	Younglings_Source_Younglings_RunCharacter_h_12_RPC_WRAPPERS \
	Younglings_Source_Younglings_RunCharacter_h_12_CALLBACK_WRAPPERS \
	Younglings_Source_Younglings_RunCharacter_h_12_INCLASS \
	Younglings_Source_Younglings_RunCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Younglings_Source_Younglings_RunCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Younglings_Source_Younglings_RunCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Younglings_Source_Younglings_RunCharacter_h_12_SPARSE_DATA \
	Younglings_Source_Younglings_RunCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Younglings_Source_Younglings_RunCharacter_h_12_CALLBACK_WRAPPERS \
	Younglings_Source_Younglings_RunCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Younglings_Source_Younglings_RunCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOUNGLINGS_API UClass* StaticClass<class ARunCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Younglings_Source_Younglings_RunCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
