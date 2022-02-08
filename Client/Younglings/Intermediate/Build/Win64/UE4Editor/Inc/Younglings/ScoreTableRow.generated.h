// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YOUNGLINGS_ScoreTableRow_generated_h
#error "ScoreTableRow.generated.h already included, missing '#pragma once' in ScoreTableRow.h"
#endif
#define YOUNGLINGS_ScoreTableRow_generated_h

#define Younglings_Source_Younglings_ScoreTableRow_h_18_SPARSE_DATA
#define Younglings_Source_Younglings_ScoreTableRow_h_18_RPC_WRAPPERS
#define Younglings_Source_Younglings_ScoreTableRow_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Younglings_Source_Younglings_ScoreTableRow_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScoreTableRow(); \
	friend struct Z_Construct_UClass_UScoreTableRow_Statics; \
public: \
	DECLARE_CLASS(UScoreTableRow, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Younglings"), NO_API) \
	DECLARE_SERIALIZER(UScoreTableRow)


#define Younglings_Source_Younglings_ScoreTableRow_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUScoreTableRow(); \
	friend struct Z_Construct_UClass_UScoreTableRow_Statics; \
public: \
	DECLARE_CLASS(UScoreTableRow, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Younglings"), NO_API) \
	DECLARE_SERIALIZER(UScoreTableRow)


#define Younglings_Source_Younglings_ScoreTableRow_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScoreTableRow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScoreTableRow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScoreTableRow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScoreTableRow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScoreTableRow(UScoreTableRow&&); \
	NO_API UScoreTableRow(const UScoreTableRow&); \
public:


#define Younglings_Source_Younglings_ScoreTableRow_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScoreTableRow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScoreTableRow(UScoreTableRow&&); \
	NO_API UScoreTableRow(const UScoreTableRow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScoreTableRow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScoreTableRow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScoreTableRow)


#define Younglings_Source_Younglings_ScoreTableRow_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NameText() { return STRUCT_OFFSET(UScoreTableRow, NameText); } \
	FORCEINLINE static uint32 __PPO__ScoreText() { return STRUCT_OFFSET(UScoreTableRow, ScoreText); }


#define Younglings_Source_Younglings_ScoreTableRow_h_15_PROLOG
#define Younglings_Source_Younglings_ScoreTableRow_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Younglings_Source_Younglings_ScoreTableRow_h_18_PRIVATE_PROPERTY_OFFSET \
	Younglings_Source_Younglings_ScoreTableRow_h_18_SPARSE_DATA \
	Younglings_Source_Younglings_ScoreTableRow_h_18_RPC_WRAPPERS \
	Younglings_Source_Younglings_ScoreTableRow_h_18_INCLASS \
	Younglings_Source_Younglings_ScoreTableRow_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Younglings_Source_Younglings_ScoreTableRow_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Younglings_Source_Younglings_ScoreTableRow_h_18_PRIVATE_PROPERTY_OFFSET \
	Younglings_Source_Younglings_ScoreTableRow_h_18_SPARSE_DATA \
	Younglings_Source_Younglings_ScoreTableRow_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Younglings_Source_Younglings_ScoreTableRow_h_18_INCLASS_NO_PURE_DECLS \
	Younglings_Source_Younglings_ScoreTableRow_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOUNGLINGS_API UClass* StaticClass<class UScoreTableRow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Younglings_Source_Younglings_ScoreTableRow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
