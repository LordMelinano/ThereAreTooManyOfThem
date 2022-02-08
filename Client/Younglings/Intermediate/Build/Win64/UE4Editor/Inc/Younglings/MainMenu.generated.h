// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YOUNGLINGS_MainMenu_generated_h
#error "MainMenu.generated.h already included, missing '#pragma once' in MainMenu.h"
#endif
#define YOUNGLINGS_MainMenu_generated_h

#define Younglings_Source_Younglings_MainMenu_h_15_SPARSE_DATA
#define Younglings_Source_Younglings_MainMenu_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnQuitClick); \
	DECLARE_FUNCTION(execOnStartClick);


#define Younglings_Source_Younglings_MainMenu_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnQuitClick); \
	DECLARE_FUNCTION(execOnStartClick);


#define Younglings_Source_Younglings_MainMenu_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Younglings"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define Younglings_Source_Younglings_MainMenu_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Younglings"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define Younglings_Source_Younglings_MainMenu_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu(UMainMenu&&); \
	NO_API UMainMenu(const UMainMenu&); \
public:


#define Younglings_Source_Younglings_MainMenu_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu(UMainMenu&&); \
	NO_API UMainMenu(const UMainMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu)


#define Younglings_Source_Younglings_MainMenu_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartBtn() { return STRUCT_OFFSET(UMainMenu, StartBtn); } \
	FORCEINLINE static uint32 __PPO__QuitBtn() { return STRUCT_OFFSET(UMainMenu, QuitBtn); }


#define Younglings_Source_Younglings_MainMenu_h_12_PROLOG
#define Younglings_Source_Younglings_MainMenu_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Younglings_Source_Younglings_MainMenu_h_15_PRIVATE_PROPERTY_OFFSET \
	Younglings_Source_Younglings_MainMenu_h_15_SPARSE_DATA \
	Younglings_Source_Younglings_MainMenu_h_15_RPC_WRAPPERS \
	Younglings_Source_Younglings_MainMenu_h_15_INCLASS \
	Younglings_Source_Younglings_MainMenu_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Younglings_Source_Younglings_MainMenu_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Younglings_Source_Younglings_MainMenu_h_15_PRIVATE_PROPERTY_OFFSET \
	Younglings_Source_Younglings_MainMenu_h_15_SPARSE_DATA \
	Younglings_Source_Younglings_MainMenu_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Younglings_Source_Younglings_MainMenu_h_15_INCLASS_NO_PURE_DECLS \
	Younglings_Source_Younglings_MainMenu_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOUNGLINGS_API UClass* StaticClass<class UMainMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Younglings_Source_Younglings_MainMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
