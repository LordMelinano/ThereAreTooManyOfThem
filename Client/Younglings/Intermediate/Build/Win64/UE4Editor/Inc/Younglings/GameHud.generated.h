// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AYounglingsGameModeBase;
#ifdef YOUNGLINGS_GameHud_generated_h
#error "GameHud.generated.h already included, missing '#pragma once' in GameHud.h"
#endif
#define YOUNGLINGS_GameHud_generated_h

#define Younglings_Source_Younglings_GameHud_h_16_SPARSE_DATA
#define Younglings_Source_Younglings_GameHud_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLivesCount); \
	DECLARE_FUNCTION(execSetCoinsCount); \
	DECLARE_FUNCTION(execInitializeHUD); \
	DECLARE_FUNCTION(execOnPauseClick);


#define Younglings_Source_Younglings_GameHud_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLivesCount); \
	DECLARE_FUNCTION(execSetCoinsCount); \
	DECLARE_FUNCTION(execInitializeHUD); \
	DECLARE_FUNCTION(execOnPauseClick);


#define Younglings_Source_Younglings_GameHud_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameHud(); \
	friend struct Z_Construct_UClass_UGameHud_Statics; \
public: \
	DECLARE_CLASS(UGameHud, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Younglings"), NO_API) \
	DECLARE_SERIALIZER(UGameHud)


#define Younglings_Source_Younglings_GameHud_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGameHud(); \
	friend struct Z_Construct_UClass_UGameHud_Statics; \
public: \
	DECLARE_CLASS(UGameHud, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Younglings"), NO_API) \
	DECLARE_SERIALIZER(UGameHud)


#define Younglings_Source_Younglings_GameHud_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameHud(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameHud) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameHud); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameHud); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameHud(UGameHud&&); \
	NO_API UGameHud(const UGameHud&); \
public:


#define Younglings_Source_Younglings_GameHud_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameHud(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameHud(UGameHud&&); \
	NO_API UGameHud(const UGameHud&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameHud); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameHud); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameHud)


#define Younglings_Source_Younglings_GameHud_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PauseMenuWidgetClass() { return STRUCT_OFFSET(UGameHud, PauseMenuWidgetClass); } \
	FORCEINLINE static uint32 __PPO__CoinsCount() { return STRUCT_OFFSET(UGameHud, CoinsCount); } \
	FORCEINLINE static uint32 __PPO__LivesCount() { return STRUCT_OFFSET(UGameHud, LivesCount); } \
	FORCEINLINE static uint32 __PPO__PauseBtn() { return STRUCT_OFFSET(UGameHud, PauseBtn); }


#define Younglings_Source_Younglings_GameHud_h_13_PROLOG
#define Younglings_Source_Younglings_GameHud_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Younglings_Source_Younglings_GameHud_h_16_PRIVATE_PROPERTY_OFFSET \
	Younglings_Source_Younglings_GameHud_h_16_SPARSE_DATA \
	Younglings_Source_Younglings_GameHud_h_16_RPC_WRAPPERS \
	Younglings_Source_Younglings_GameHud_h_16_INCLASS \
	Younglings_Source_Younglings_GameHud_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Younglings_Source_Younglings_GameHud_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Younglings_Source_Younglings_GameHud_h_16_PRIVATE_PROPERTY_OFFSET \
	Younglings_Source_Younglings_GameHud_h_16_SPARSE_DATA \
	Younglings_Source_Younglings_GameHud_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Younglings_Source_Younglings_GameHud_h_16_INCLASS_NO_PURE_DECLS \
	Younglings_Source_Younglings_GameHud_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOUNGLINGS_API UClass* StaticClass<class UGameHud>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Younglings_Source_Younglings_GameHud_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
