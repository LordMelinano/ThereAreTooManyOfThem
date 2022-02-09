// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YOUNGLINGS_GameOver_generated_h
#error "GameOver.generated.h already included, missing '#pragma once' in GameOver.h"
#endif
#define YOUNGLINGS_GameOver_generated_h

#define Younglings_Source_Younglings_GameOver_h_17_SPARSE_DATA
#define Younglings_Source_Younglings_GameOver_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSaveScoreClick); \
	DECLARE_FUNCTION(execOnRestartClick); \
	DECLARE_FUNCTION(execOnMainMenuClick);


#define Younglings_Source_Younglings_GameOver_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSaveScoreClick); \
	DECLARE_FUNCTION(execOnRestartClick); \
	DECLARE_FUNCTION(execOnMainMenuClick);


#define Younglings_Source_Younglings_GameOver_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameOver(); \
	friend struct Z_Construct_UClass_UGameOver_Statics; \
public: \
	DECLARE_CLASS(UGameOver, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Younglings"), NO_API) \
	DECLARE_SERIALIZER(UGameOver)


#define Younglings_Source_Younglings_GameOver_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGameOver(); \
	friend struct Z_Construct_UClass_UGameOver_Statics; \
public: \
	DECLARE_CLASS(UGameOver, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Younglings"), NO_API) \
	DECLARE_SERIALIZER(UGameOver)


#define Younglings_Source_Younglings_GameOver_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameOver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameOver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameOver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameOver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameOver(UGameOver&&); \
	NO_API UGameOver(const UGameOver&); \
public:


#define Younglings_Source_Younglings_GameOver_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameOver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameOver(UGameOver&&); \
	NO_API UGameOver(const UGameOver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameOver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameOver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameOver)


#define Younglings_Source_Younglings_GameOver_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ScoreTableWidgetClass() { return STRUCT_OFFSET(UGameOver, ScoreTableWidgetClass); } \
	FORCEINLINE static uint32 __PPO__MainMenuBtn() { return STRUCT_OFFSET(UGameOver, MainMenuBtn); } \
	FORCEINLINE static uint32 __PPO__RestartBtn() { return STRUCT_OFFSET(UGameOver, RestartBtn); } \
	FORCEINLINE static uint32 __PPO__SaveScoreBtn() { return STRUCT_OFFSET(UGameOver, SaveScoreBtn); } \
	FORCEINLINE static uint32 __PPO__NameEditableTextBox() { return STRUCT_OFFSET(UGameOver, NameEditableTextBox); }


#define Younglings_Source_Younglings_GameOver_h_14_PROLOG
#define Younglings_Source_Younglings_GameOver_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Younglings_Source_Younglings_GameOver_h_17_PRIVATE_PROPERTY_OFFSET \
	Younglings_Source_Younglings_GameOver_h_17_SPARSE_DATA \
	Younglings_Source_Younglings_GameOver_h_17_RPC_WRAPPERS \
	Younglings_Source_Younglings_GameOver_h_17_INCLASS \
	Younglings_Source_Younglings_GameOver_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Younglings_Source_Younglings_GameOver_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Younglings_Source_Younglings_GameOver_h_17_PRIVATE_PROPERTY_OFFSET \
	Younglings_Source_Younglings_GameOver_h_17_SPARSE_DATA \
	Younglings_Source_Younglings_GameOver_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Younglings_Source_Younglings_GameOver_h_17_INCLASS_NO_PURE_DECLS \
	Younglings_Source_Younglings_GameOver_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOUNGLINGS_API UClass* StaticClass<class UGameOver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Younglings_Source_Younglings_GameOver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
