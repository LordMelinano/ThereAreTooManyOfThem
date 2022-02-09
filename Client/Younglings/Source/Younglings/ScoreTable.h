// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

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

	UFUNCTION()
	void SetTextBlockText(FText YourName, FText YourScore);
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<class UUserWidget> ScoreTableRowWidgetClass;

	UPROPERTY(BlueprintReadWrite, meta =(BindWidget))
	class UButton* MainMenuBtn;

	UPROPERTY(BlueprintReadWrite, meta =(BindWidget))
	class UButton* RestartBtn;

	UPROPERTY(BlueprintReadWrite, meta =(BindWidget))
	class UScrollBox* ValueScrollBox;
	
	UPROPERTY(BlueprintReadWrite, meta =(BindWidget))
	class UTextBlock* YourNameText;
	
	UPROPERTY(BlueprintReadWrite, meta =(BindWidget))
	class UTextBlock* YourScoreText;
	
	virtual void NativeConstruct() override;

	UFUNCTION()
	void OnMainMenuClick();

	UFUNCTION()
	void OnRestartClick();

	
};
