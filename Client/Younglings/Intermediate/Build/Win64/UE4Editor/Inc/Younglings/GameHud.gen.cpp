// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Younglings/GameHud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameHud() {}
// Cross Module References
	YOUNGLINGS_API UClass* Z_Construct_UClass_UGameHud_NoRegister();
	YOUNGLINGS_API UClass* Z_Construct_UClass_UGameHud();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Younglings();
	YOUNGLINGS_API UClass* Z_Construct_UClass_AYounglingsGameModeBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGameHud::execSetLivesCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLivesCount(Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameHud::execSetCoinsCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCoinsCount(Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameHud::execInitializeHUD)
	{
		P_GET_OBJECT(AYounglingsGameModeBase,Z_Param_RunGameMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeHUD(Z_Param_RunGameMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameHud::execOnPauseClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPauseClick();
		P_NATIVE_END;
	}
	void UGameHud::StaticRegisterNativesUGameHud()
	{
		UClass* Class = UGameHud::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeHUD", &UGameHud::execInitializeHUD },
			{ "OnPauseClick", &UGameHud::execOnPauseClick },
			{ "SetCoinsCount", &UGameHud::execSetCoinsCount },
			{ "SetLivesCount", &UGameHud::execSetLivesCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameHud_InitializeHUD_Statics
	{
		struct GameHud_eventInitializeHUD_Parms
		{
			AYounglingsGameModeBase* RunGameMode;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunGameMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameHud_InitializeHUD_Statics::NewProp_RunGameMode = { "RunGameMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameHud_eventInitializeHUD_Parms, RunGameMode), Z_Construct_UClass_AYounglingsGameModeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameHud_InitializeHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameHud_InitializeHUD_Statics::NewProp_RunGameMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHud_InitializeHUD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHud_InitializeHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHud, nullptr, "InitializeHUD", nullptr, nullptr, sizeof(GameHud_eventInitializeHUD_Parms), Z_Construct_UFunction_UGameHud_InitializeHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHud_InitializeHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameHud_InitializeHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHud_InitializeHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameHud_InitializeHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameHud_InitializeHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameHud_OnPauseClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHud_OnPauseClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHud_OnPauseClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHud, nullptr, "OnPauseClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameHud_OnPauseClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHud_OnPauseClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameHud_OnPauseClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameHud_OnPauseClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics
	{
		struct GameHud_eventSetCoinsCount_Parms
		{
			int32 Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameHud_eventSetCoinsCount_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHud, nullptr, "SetCoinsCount", nullptr, nullptr, sizeof(GameHud_eventSetCoinsCount_Parms), Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameHud_SetCoinsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameHud_SetLivesCount_Statics
	{
		struct GameHud_eventSetLivesCount_Parms
		{
			int32 Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameHud_SetLivesCount_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameHud_eventSetLivesCount_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameHud_SetLivesCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameHud_SetLivesCount_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHud_SetLivesCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHud_SetLivesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHud, nullptr, "SetLivesCount", nullptr, nullptr, sizeof(GameHud_eventSetLivesCount_Parms), Z_Construct_UFunction_UGameHud_SetLivesCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHud_SetLivesCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameHud_SetLivesCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHud_SetLivesCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameHud_SetLivesCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameHud_SetLivesCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameHud_NoRegister()
	{
		return UGameHud::StaticClass();
	}
	struct Z_Construct_UClass_UGameHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseMenuWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PauseMenuWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoinsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoinsCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LivesCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LivesCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PauseBtn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Younglings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameHud_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameHud_InitializeHUD, "InitializeHUD" }, // 4270828699
		{ &Z_Construct_UFunction_UGameHud_OnPauseClick, "OnPauseClick" }, // 3546495211
		{ &Z_Construct_UFunction_UGameHud_SetCoinsCount, "SetCoinsCount" }, // 3178612905
		{ &Z_Construct_UFunction_UGameHud_SetLivesCount, "SetLivesCount" }, // 3357784169
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHud_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameHud.h" },
		{ "ModuleRelativePath", "GameHud.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHud_Statics::NewProp_PauseMenuWidgetClass_MetaData[] = {
		{ "Category", "GameHud" },
		{ "ModuleRelativePath", "GameHud.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameHud_Statics::NewProp_PauseMenuWidgetClass = { "PauseMenuWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameHud, PauseMenuWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGameHud_Statics::NewProp_PauseMenuWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHud_Statics::NewProp_PauseMenuWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHud_Statics::NewProp_CoinsCount_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameHud_Statics::NewProp_CoinsCount = { "CoinsCount", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameHud, CoinsCount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameHud_Statics::NewProp_CoinsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHud_Statics::NewProp_CoinsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHud_Statics::NewProp_LivesCount_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameHud_Statics::NewProp_LivesCount = { "LivesCount", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameHud, LivesCount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameHud_Statics::NewProp_LivesCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHud_Statics::NewProp_LivesCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHud_Statics::NewProp_PauseBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameHud_Statics::NewProp_PauseBtn = { "PauseBtn", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameHud, PauseBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameHud_Statics::NewProp_PauseBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHud_Statics::NewProp_PauseBtn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameHud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHud_Statics::NewProp_PauseMenuWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHud_Statics::NewProp_CoinsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHud_Statics::NewProp_LivesCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHud_Statics::NewProp_PauseBtn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameHud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameHud_Statics::ClassParams = {
		&UGameHud::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameHud_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameHud_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameHud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameHud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameHud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameHud, 3428762128);
	template<> YOUNGLINGS_API UClass* StaticClass<UGameHud>()
	{
		return UGameHud::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameHud(Z_Construct_UClass_UGameHud, &UGameHud::StaticClass, TEXT("/Script/Younglings"), TEXT("UGameHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
