// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Younglings/GameOver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameOver() {}
// Cross Module References
	YOUNGLINGS_API UClass* Z_Construct_UClass_UGameOver_NoRegister();
	YOUNGLINGS_API UClass* Z_Construct_UClass_UGameOver();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Younglings();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGameOver::execOnRestartClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRestartClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameOver::execOnMainMenuClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMainMenuClick();
		P_NATIVE_END;
	}
	void UGameOver::StaticRegisterNativesUGameOver()
	{
		UClass* Class = UGameOver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMainMenuClick", &UGameOver::execOnMainMenuClick },
			{ "OnRestartClick", &UGameOver::execOnRestartClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameOver_OnMainMenuClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameOver_OnMainMenuClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameOver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameOver_OnMainMenuClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameOver, nullptr, "OnMainMenuClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameOver_OnMainMenuClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameOver_OnMainMenuClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameOver_OnMainMenuClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameOver_OnMainMenuClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameOver_OnRestartClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameOver_OnRestartClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameOver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameOver_OnRestartClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameOver, nullptr, "OnRestartClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameOver_OnRestartClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameOver_OnRestartClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameOver_OnRestartClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameOver_OnRestartClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameOver_NoRegister()
	{
		return UGameOver::StaticClass();
	}
	struct Z_Construct_UClass_UGameOver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMenuBtn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestartBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RestartBtn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameOver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Younglings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameOver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameOver_OnMainMenuClick, "OnMainMenuClick" }, // 999992425
		{ &Z_Construct_UFunction_UGameOver_OnRestartClick, "OnRestartClick" }, // 4291795780
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameOver.h" },
		{ "ModuleRelativePath", "GameOver.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOver_Statics::NewProp_MainMenuBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameOver" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameOver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameOver_Statics::NewProp_MainMenuBtn = { "MainMenuBtn", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameOver, MainMenuBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameOver_Statics::NewProp_MainMenuBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameOver_Statics::NewProp_MainMenuBtn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOver_Statics::NewProp_RestartBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameOver" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameOver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameOver_Statics::NewProp_RestartBtn = { "RestartBtn", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameOver, RestartBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameOver_Statics::NewProp_RestartBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameOver_Statics::NewProp_RestartBtn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameOver_Statics::NewProp_MainMenuBtn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameOver_Statics::NewProp_RestartBtn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameOver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameOver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameOver_Statics::ClassParams = {
		&UGameOver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameOver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameOver_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameOver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameOver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameOver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameOver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameOver, 2876336737);
	template<> YOUNGLINGS_API UClass* StaticClass<UGameOver>()
	{
		return UGameOver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameOver(Z_Construct_UClass_UGameOver, &UGameOver::StaticClass, TEXT("/Script/Younglings"), TEXT("UGameOver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameOver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
