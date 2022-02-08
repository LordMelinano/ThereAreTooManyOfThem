// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YOUNGLINGS_PauseMenu_generated_h
#error "PauseMenu.generated.h already included, missing '#pragma once' in PauseMenu.h"
#endif
#define YOUNGLINGS_PauseMenu_generated_h

#define Younglings_Source_Younglings_PauseMenu_h_15_SPARSE_DATA
#define Younglings_Source_Younglings_PauseMenu_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRestartClick); \
	DECLARE_FUNCTION(execOnContinueClick);


#define Younglings_Source_Younglings_PauseMenu_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRestartClick); \
	DECLARE_FUNCTION(execOnContinueClick);


#define Younglings_Source_Younglings_PauseMenu_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPauseMenu(); \
	friend struct Z_Construct_UClass_UPauseMenu_Statics; \
public: \
	DECLARE_CLASS(UPauseMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Younglings"), NO_API) \
	DECLARE_SERIALIZER(UPauseMenu)


#define Younglings_Source_Younglings_PauseMenu_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPauseMenu(); \
	friend struct Z_Construct_UClass_UPauseMenu_Statics; \
public: \
	DECLARE_CLASS(UPauseMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Younglings"), NO_API) \
	DECLARE_SERIALIZER(UPauseMenu)


#define Younglings_Source_Younglings_PauseMenu_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPauseMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPauseMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPauseMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPauseMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPauseMenu(UPauseMenu&&); \
	NO_API UPauseMenu(const UPauseMenu&); \
public:


#define Younglings_Source_Younglings_PauseMenu_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPauseMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPauseMenu(UPauseMenu&&); \
	NO_API UPauseMenu(const UPauseMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPauseMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPauseMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPauseMenu)


#define Younglings_Source_Younglings_PauseMenu_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ContinueBtn() { return STRUCT_OFFSET(UPauseMenu, ContinueBtn); } \
	FORCEINLINE static uint32 __PPO__RestartBtn() { return STRUCT_OFFSET(UPauseMenu, RestartBtn); }


#define Younglings_Source_Younglings_PauseMenu_h_12_PROLOG
#define Younglings_Source_Younglings_PauseMenu_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Younglings_Source_Younglings_PauseMenu_h_15_PRIVATE_PROPERTY_OFFSET \
	Younglings_Source_Younglings_PauseMenu_h_15_SPARSE_DATA \
	Younglings_Source_Younglings_PauseMenu_h_15_RPC_WRAPPERS \
	Younglings_Source_Younglings_PauseMenu_h_15_INCLASS \
	Younglings_Source_Younglings_PauseMenu_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Younglings_Source_Younglings_PauseMenu_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Younglings_Source_Younglings_PauseMenu_h_15_PRIVATE_PROPERTY_OFFSET \
	Younglings_Source_Younglings_PauseMenu_h_15_SPARSE_DATA \
	Younglings_Source_Younglings_PauseMenu_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Younglings_Source_Younglings_PauseMenu_h_15_INCLASS_NO_PURE_DECLS \
	Younglings_Source_Younglings_PauseMenu_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOUNGLINGS_API UClass* StaticClass<class UPauseMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Younglings_Source_Younglings_PauseMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
