// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <map>

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ScrollBox.h"
#include "ScoreTable.generated.h"

/**
 * 
 */
UCLASS()
class YOUNGLINGS_API UScoreTable : public UUserWidget
{
	GENERATED_BODY()

public:
	std::map<FString, int32> ScoreMap; 
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<class UUserWidget> ScoreTableRowWidgetClass;

	UPROPERTY(BlueprintReadWrite, meta =(BindWidget))
	class UButton* MainMenuBtn;

	UPROPERTY(BlueprintReadWrite, meta =(BindWidget))
	class UButton* RestartBtn;

	UPROPERTY(BlueprintReadWrite, meta =(BindWidget))
	class UScrollBox* ValueScrollBox;

	virtual void NativeConstruct() override;

	UFUNCTION()
	void OnMainMenuClick();

	UFUNCTION()
	void OnRestartClick();
};
