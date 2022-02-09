// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Younglings/ScoreTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreTable() {}
// Cross Module References
	YOUNGLINGS_API UClass* Z_Construct_UClass_UScoreTable_NoRegister();
	YOUNGLINGS_API UClass* Z_Construct_UClass_UScoreTable();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Younglings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UScoreTable::execOnRestartClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRestartClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScoreTable::execOnMainMenuClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMainMenuClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScoreTable::execSetTextBlockText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_YourName);
		P_GET_PROPERTY(FTextProperty,Z_Param_YourScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextBlockText(Z_Param_YourName,Z_Param_YourScore);
		P_NATIVE_END;
	}
	void UScoreTable::StaticRegisterNativesUScoreTable()
	{
		UClass* Class = UScoreTable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMainMenuClick", &UScoreTable::execOnMainMenuClick },
			{ "OnRestartClick", &UScoreTable::execOnRestartClick },
			{ "SetTextBlockText", &UScoreTable::execSetTextBlockText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScoreTable_OnMainMenuClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScoreTable_OnMainMenuClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScoreTable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScoreTable_OnMainMenuClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScoreTable, nullptr, "OnMainMenuClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScoreTable_OnMainMenuClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreTable_OnMainMenuClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScoreTable_OnMainMenuClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScoreTable_OnMainMenuClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScoreTable_OnRestartClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScoreTable_OnRestartClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScoreTable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScoreTable_OnRestartClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScoreTable, nullptr, "OnRestartClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScoreTable_OnRestartClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreTable_OnRestartClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScoreTable_OnRestartClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScoreTable_OnRestartClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScoreTable_SetTextBlockText_Statics
	{
		struct ScoreTable_eventSetTextBlockText_Parms
		{
			FText YourName;
			FText YourScore;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_YourName;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_YourScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UScoreTable_SetTextBlockText_Statics::NewProp_YourName = { "YourName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScoreTable_eventSetTextBlockText_Parms, YourName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UScoreTable_SetTextBlockText_Statics::NewProp_YourScore = { "YourScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScoreTable_eventSetTextBlockText_Parms, YourScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScoreTable_SetTextBlockText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScoreTable_SetTextBlockText_Statics::NewProp_YourName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScoreTable_SetTextBlockText_Statics::NewProp_YourScore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScoreTable_SetTextBlockText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScoreTable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScoreTable_SetTextBlockText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScoreTable, nullptr, "SetTextBlockText", nullptr, nullptr, sizeof(ScoreTable_eventSetTextBlockText_Parms), Z_Construct_UFunction_UScoreTable_SetTextBlockText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreTable_SetTextBlockText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScoreTable_SetTextBlockText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreTable_SetTextBlockText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScoreTable_SetTextBlockText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScoreTable_SetTextBlockText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScoreTable_NoRegister()
	{
		return UScoreTable::StaticClass();
	}
	struct Z_Construct_UClass_UScoreTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreTableRowWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ScoreTableRowWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMenuBtn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestartBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RestartBtn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueScrollBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ValueScrollBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YourNameText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_YourNameText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YourScoreText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_YourScoreText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScoreTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Younglings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScoreTable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScoreTable_OnMainMenuClick, "OnMainMenuClick" }, // 261677019
		{ &Z_Construct_UFunction_UScoreTable_OnRestartClick, "OnRestartClick" }, // 3110870125
		{ &Z_Construct_UFunction_UScoreTable_SetTextBlockText, "SetTextBlockText" }, // 4285968795
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScoreTable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ScoreTable.h" },
		{ "ModuleRelativePath", "ScoreTable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScoreTable_Statics::NewProp_ScoreTableRowWidgetClass_MetaData[] = {
		{ "Category", "ScoreTable" },
		{ "ModuleRelativePath", "ScoreTable.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UScoreTable_Statics::NewProp_ScoreTableRowWidgetClass = { "ScoreTableRowWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScoreTable, ScoreTableRowWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UScoreTable_Statics::NewProp_ScoreTableRowWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScoreTable_Statics::NewProp_ScoreTableRowWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScoreTable_Statics::NewProp_MainMenuBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ScoreTable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ScoreTable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScoreTable_Statics::NewProp_MainMenuBtn = { "MainMenuBtn", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScoreTable, MainMenuBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScoreTable_Statics::NewProp_MainMenuBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScoreTable_Statics::NewProp_MainMenuBtn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScoreTable_Statics::NewProp_RestartBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ScoreTable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ScoreTable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScoreTable_Statics::NewProp_RestartBtn = { "RestartBtn", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScoreTable, RestartBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScoreTable_Statics::NewProp_RestartBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScoreTable_Statics::NewProp_RestartBtn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScoreTable_Statics::NewProp_ValueScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ScoreTable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ScoreTable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScoreTable_Statics::NewProp_ValueScrollBox = { "ValueScrollBox", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScoreTable, ValueScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScoreTable_Statics::NewProp_ValueScrollBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScoreTable_Statics::NewProp_ValueScrollBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScoreTable_Statics::NewProp_YourNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ScoreTable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ScoreTable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScoreTable_Statics::NewProp_YourNameText = { "YourNameText", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScoreTable, YourNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScoreTable_Statics::NewProp_YourNameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScoreTable_Statics::NewProp_YourNameText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScoreTable_Statics::NewProp_YourScoreText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ScoreTable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ScoreTable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScoreTable_Statics::NewProp_YourScoreText = { "YourScoreText", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScoreTable, YourScoreText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScoreTable_Statics::NewProp_YourScoreText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScoreTable_Statics::NewProp_YourScoreText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScoreTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScoreTable_Statics::NewProp_ScoreTableRowWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScoreTable_Statics::NewProp_MainMenuBtn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScoreTable_Statics::NewProp_RestartBtn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScoreTable_Statics::NewProp_ValueScrollBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScoreTable_Statics::NewProp_YourNameText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScoreTable_Statics::NewProp_YourScoreText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScoreTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScoreTable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScoreTable_Statics::ClassParams = {
		&UScoreTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScoreTable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UScoreTable_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScoreTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScoreTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScoreTable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScoreTable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScoreTable, 3953725644);
	template<> YOUNGLINGS_API UClass* StaticClass<UScoreTable>()
	{
		return UScoreTable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScoreTable(Z_Construct_UClass_UScoreTable, &UScoreTable::StaticClass, TEXT("/Script/Younglings"), TEXT("UScoreTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScoreTable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
