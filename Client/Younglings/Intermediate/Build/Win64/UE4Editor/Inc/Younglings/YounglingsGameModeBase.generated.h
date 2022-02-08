// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFloorTile;
#ifdef YOUNGLINGS_YounglingsGameModeBase_generated_h
#error "YounglingsGameModeBase.generated.h already included, missing '#pragma once' in YounglingsGameModeBase.h"
#endif
#define YOUNGLINGS_YounglingsGameModeBase_generated_h

#define Younglings_Source_Younglings_YounglingsGameModeBase_h_14_DELEGATE \
static inline void FOnLevelReset_DelegateWrapper(const FMulticastScriptDelegate& OnLevelReset) \
{ \
	OnLevelReset.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Younglings_Source_Younglings_YounglingsGameModeBase_h_13_DELEGATE \
struct _Script_Younglings_eventOnLivesCountChanged_Parms \
{ \
	int32 LivesCount; \
}; \
static inline void FOnLivesCountChanged_DelegateWrapper(const FMulticastScriptDelegate& OnLivesCountChanged, int32 LivesCount) \
{ \
	_Script_Younglings_eventOnLivesCountChanged_Parms Parms; \
	Parms.LivesCount=LivesCount; \
	OnLivesCountChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Younglings_Source_Younglings_YounglingsGameModeBase_h_12_DELEGATE \
struct _Script_Younglings_eventOnCoinsCountChanged_Parms \
{ \
	int32 CoinsCount; \
}; \
static inline void FOnCoinsCountChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCoinsCountChanged, int32 CoinsCount) \
{ \
	_Script_Younglings_eventOnCoinsCountChanged_Parms Parms; \
	Parms.CoinsCount=CoinsCount; \
	OnCoinsCountChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Younglings_Source_Younglings_YounglingsGameModeBase_h_21_SPARSE_DATA
#define Younglings_Source_Younglings_YounglingsGameModeBase_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveTile); \
	DECLARE_FUNCTION(execPlayerDied); \
	DECLARE_FUNCTION(execAddCoin); \
	DECLARE_FUNCTION(execGameOver); \
	DECLARE_FUNCTION(execAddFloorTile); \
	DECLARE_FUNCTION(execCreateInitialFloorTiles);


#define Younglings_Source_Younglings_YounglingsGameModeBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveTile); \
	DECLARE_FUNCTION(execPlayerDied); \
	DECLARE_FUNCTION(execAddCoin); \
	DECLARE_FUNCTION(execGameOver); \
	DECLARE_FUNCTION(execAddFloorTile); \
	DECLARE_FUNCTION(execCreateInitialFloorTiles);


#define Younglings_Source_Younglings_YounglingsGameModeBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAYounglingsGameModeBase(); \
	friend struct Z_Construct_UClass_AYounglingsGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AYounglingsGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Younglings"), NO_API) \
	DECLARE_SERIALIZER(AYounglingsGameModeBase)


#define Younglings_Source_Younglings_YounglingsGameModeBase_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAYounglingsGameModeBase(); \
	friend struct Z_Construct_UClass_AYounglingsGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AYounglingsGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Younglings"), NO_API) \
	DECLARE_SERIALIZER(AYounglingsGameModeBase)


#define Younglings_Source_Younglings_YounglingsGameModeBase_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AYounglingsGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AYounglingsGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AYounglingsGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AYounglingsGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AYounglingsGameModeBase(AYounglingsGameModeBase&&); \
	NO_API AYounglingsGameModeBase(const AYounglingsGameModeBase&); \
public:


#define Younglings_Source_Younglings_YounglingsGameModeBase_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AYounglingsGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AYounglingsGameModeBase(AYounglingsGameModeBase&&); \
	NO_API AYounglingsGameModeBase(const AYounglingsGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AYounglingsGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AYounglingsGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AYounglingsGameModeBase)


#define Younglings_Source_Younglings_YounglingsGameModeBase_h_21_PRIVATE_PROPERTY_OFFSET
#define Younglings_Source_Younglings_YounglingsGameModeBase_h_18_PROLOG
#define Younglings_Source_Younglings_YounglingsGameModeBase_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Younglings_Source_Younglings_YounglingsGameModeBase_h_21_PRIVATE_PROPERTY_OFFSET \
	Younglings_Source_Younglings_YounglingsGameModeBase_h_21_SPARSE_DATA \
	Younglings_Source_Younglings_YounglingsGameModeBase_h_21_RPC_WRAPPERS \
	Younglings_Source_Younglings_YounglingsGameModeBase_h_21_INCLASS \
	Younglings_Source_Younglings_YounglingsGameModeBase_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Younglings_Source_Younglings_YounglingsGameModeBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Younglings_Source_Younglings_YounglingsGameModeBase_h_21_PRIVATE_PROPERTY_OFFSET \
	Younglings_Source_Younglings_YounglingsGameModeBase_h_21_SPARSE_DATA \
	Younglings_Source_Younglings_YounglingsGameModeBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Younglings_Source_Younglings_YounglingsGameModeBase_h_21_INCLASS_NO_PURE_DECLS \
	Younglings_Source_Younglings_YounglingsGameModeBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOUNGLINGS_API UClass* StaticClass<class AYounglingsGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Younglings_Source_Younglings_YounglingsGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
