// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Younglings/ScoreTableRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreTableRow() {}
// Cross Module References
	YOUNGLINGS_API UClass* Z_Construct_UClass_UScoreTableRow_NoRegister();
	YOUNGLINGS_API UClass* Z_Construct_UClass_UScoreTableRow();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Younglings();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UScoreTableRow::StaticRegisterNativesUScoreTableRow()
	{
	}
	UClass* Z_Construct_UClass_UScoreTableRow_NoRegister()
	{
		return UScoreTableRow::StaticClass();
	}
	struct Z_Construct_UClass_UScoreTableRow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NameText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScoreText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScoreTableRow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Younglings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScoreTableRow_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ScoreTableRow.h" },
		{ "ModuleRelativePath", "ScoreTableRow.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScoreTableRow_Statics::NewProp_NameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ScoreTableRow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ScoreTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScoreTableRow_Statics::NewProp_NameText = { "NameText", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScoreTableRow, NameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScoreTableRow_Statics::NewProp_NameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScoreTableRow_Statics::NewProp_NameText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScoreTableRow_Statics::NewProp_ScoreText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ScoreTableRow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ScoreTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScoreTableRow_Statics::NewProp_ScoreText = { "ScoreText", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScoreTableRow, ScoreText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScoreTableRow_Statics::NewProp_ScoreText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScoreTableRow_Statics::NewProp_ScoreText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScoreTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScoreTableRow_Statics::NewProp_NameText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScoreTableRow_Statics::NewProp_ScoreText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScoreTableRow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScoreTableRow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScoreTableRow_Statics::ClassParams = {
		&UScoreTableRow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UScoreTableRow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UScoreTableRow_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScoreTableRow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScoreTableRow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScoreTableRow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScoreTableRow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScoreTableRow, 1948585600);
	template<> YOUNGLINGS_API UClass* StaticClass<UScoreTableRow>()
	{
		return UScoreTableRow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScoreTableRow(Z_Construct_UClass_UScoreTableRow, &UScoreTableRow::StaticClass, TEXT("/Script/Younglings"), TEXT("UScoreTableRow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScoreTableRow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
