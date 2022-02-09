// Fill out your copyright notice in the Description page of Project Settings.


#include "GameOver.h"

#include "ScoreTable.h"
#include "YounglingsGameModeBase.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UGameOver::NativeConstruct()
{
	if (MainMenuBtn)
	{
		MainMenuBtn->OnClicked.AddDynamic(this, &UGameOver::OnMainMenuClick);
	}

	if (RestartBtn)
	{
		RestartBtn->OnClicked.AddDynamic(this, &UGameOver::OnRestartClick);
	}

	if (SaveScoreBtn)
	{
		SaveScoreBtn->OnClicked.AddDynamic(this, &UGameOver::OnSaveScoreClick);
	}
}

void UGameOver::OnMainMenuClick()
{
	UWorld* World = GetWorld();

	if (World)
	{
		UGameplayStatics::OpenLevel(World, TEXT("MainMenu"));
	}
}

void UGameOver::OnRestartClick()
{
	UWorld* World = GetWorld();

	if (World)
	{
		UKismetSystemLibrary::ExecuteConsoleCommand(World, TEXT("RestartLevel"));
	}
}

void UGameOver::OnSaveScoreClick()
{
	RunGameMode = Cast<AYounglingsGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if (NameEditableTextBox)
	{
		if (!NameEditableTextBox->Text.IsEmpty())
		{
			RunGameMode->Name = NameEditableTextBox->Text;
		}
	}
	this->RemoveFromViewport();
	RunGameMode->ShowScoreTable();
}
