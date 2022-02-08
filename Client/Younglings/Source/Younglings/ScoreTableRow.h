// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <map>
#include <string>

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ScoreTableRow.generated.h"

/**
 * 
 */
UCLASS()
class YOUNGLINGS_API UScoreTableRow : public UUserWidget
{
	GENERATED_BODY()

protected:
	
	UPROPERTY(BlueprintReadWrite, meta =(BindWidget))
	class UTextBlock* NameText;

	UPROPERTY(BlueprintReadWrite, meta =(BindWidget))
	class UTextBlock* ScoreText;

public:
	void InitializeTableRow(FString Name, int32 Score);
};
