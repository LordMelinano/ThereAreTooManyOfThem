// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/EditableTextBox.h"
#include "GameOver.generated.h"

class UButton;
/**
 * 
 */
UCLASS()
class YOUNGLINGS_API UGameOver : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleInstanceOnly)
	class AYounglingsGameModeBase* RunGameMode;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<class UUserWidget> ScoreTableWidgetClass;
	
	UPROPERTY(BlueprintReadWrite, meta =(BindWidget))
	UButton* MainMenuBtn;

	UPROPERTY(BlueprintReadWrite, meta =(BindWidget))
	UButton* RestartBtn;

	UPROPERTY(BlueprintReadWrite, meta =(BindWidget))
	UButton* SaveScoreBtn;

	UPROPERTY(BlueprintReadWrite, meta =(BindWidget))
	class UEditableTextBox* NameEditableTextBox;

	virtual void NativeConstruct() override;

	UFUNCTION()
	void OnMainMenuClick();

	UFUNCTION()
	void OnRestartClick();

	UFUNCTION()
	void OnSaveScoreClick();
};
