// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YOUNGLINGS_ScoreTable_generated_h
#error "ScoreTable.generated.h already included, missing '#pragma once' in ScoreTable.h"
#endif
#define YOUNGLINGS_ScoreTable_generated_h

#define Younglings_Source_Younglings_ScoreTable_h_18_SPARSE_DATA
#define Younglings_Source_Younglings_ScoreTable_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRestartClick); \
	DECLARE_FUNCTION(execOnMainMenuClick);


#define Younglings_Source_Younglings_ScoreTable_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRestartClick); \
	DECLARE_FUNCTION(execOnMainMenuClick);


#define Younglings_Source_Younglings_ScoreTable_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScoreTable(); \
	friend struct Z_Construct_UClass_UScoreTable_Statics; \
public: \
	DECLARE_CLASS(UScoreTable, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Younglings"), NO_API) \
	DECLARE_SERIALIZER(UScoreTable)


#define Younglings_Source_Younglings_ScoreTable_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUScoreTable(); \
	friend struct Z_Construct_UClass_UScoreTable_Statics; \
public: \
	DECLARE_CLASS(UScoreTable, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Younglings"), NO_API) \
	DECLARE_SERIALIZER(UScoreTable)


#define Younglings_Source_Younglings_ScoreTable_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScoreTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScoreTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScoreTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScoreTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScoreTable(UScoreTable&&); \
	NO_API UScoreTable(const UScoreTable&); \
public:


#define Younglings_Source_Younglings_ScoreTable_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScoreTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScoreTable(UScoreTable&&); \
	NO_API UScoreTable(const UScoreTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScoreTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScoreTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScoreTable)


#define Younglings_Source_Younglings_ScoreTable_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ScoreTableRowWidgetClass() { return STRUCT_OFFSET(UScoreTable, ScoreTableRowWidgetClass); } \
	FORCEINLINE static uint32 __PPO__MainMenuBtn() { return STRUCT_OFFSET(UScoreTable, MainMenuBtn); } \
	FORCEINLINE static uint32 __PPO__RestartBtn() { return STRUCT_OFFSET(UScoreTable, RestartBtn); } \
	FORCEINLINE static uint32 __PPO__ValueScrollBox() { return STRUCT_OFFSET(UScoreTable, ValueScrollBox); }


#define Younglings_Source_Younglings_ScoreTable_h_15_PROLOG
#define Younglings_Source_Younglings_ScoreTable_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Younglings_Source_Younglings_ScoreTable_h_18_PRIVATE_PROPERTY_OFFSET \
	Younglings_Source_Younglings_ScoreTable_h_18_SPARSE_DATA \
	Younglings_Source_Younglings_ScoreTable_h_18_RPC_WRAPPERS \
	Younglings_Source_Younglings_ScoreTable_h_18_INCLASS \
	Younglings_Source_Younglings_ScoreTable_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Younglings_Source_Younglings_ScoreTable_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Younglings_Source_Younglings_ScoreTable_h_18_PRIVATE_PROPERTY_OFFSET \
	Younglings_Source_Younglings_ScoreTable_h_18_SPARSE_DATA \
	Younglings_Source_Younglings_ScoreTable_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Younglings_Source_Younglings_ScoreTable_h_18_INCLASS_NO_PURE_DECLS \
	Younglings_Source_Younglings_ScoreTable_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOUNGLINGS_API UClass* StaticClass<class UScoreTable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Younglings_Source_Younglings_ScoreTable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
