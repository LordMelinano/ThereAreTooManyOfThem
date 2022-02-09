// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreTable.h"

#include "ScoreTableRow.h"
#include "YounglingsGameModeBase.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"


void UScoreTable::NativeConstruct()
{
	AYounglingsGameModeBase* RunGameMode = Cast<AYounglingsGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	
	
	
	if (IsValid(ScoreTableRowWidgetClass))
	{
		if (!RunGameMode->ScoreMap.empty())
		{
			for (const auto Score : RunGameMode->ScoreMap)
			{
				UUserWidget* Widget = CreateWidget(GetWorld(), ScoreTableRowWidgetClass);
				check(Widget);
				UScoreTableRow* TableRow = Cast<UScoreTableRow>(Widget);
				TableRow->InitializeTableRow(Score.first, Score.second);
				ValueScrollBox->AddChild(TableRow);
				Widget->Destruct();
				TableRow->Destruct();
			}
		}
		
		
	}
	
	if (MainMenuBtn)
	{
		MainMenuBtn->OnClicked.AddDynamic(this, &UScoreTable::OnMainMenuClick);
	}

	if (RestartBtn)
	{
		RestartBtn->OnClicked.AddDynamic(this, &UScoreTable::OnRestartClick);
	}
}

void UScoreTable::OnMainMenuClick()
{
	UWorld* World = GetWorld();

	if (World)
	{
		UGameplayStatics::OpenLevel(World, TEXT("MainMenu"));
	}
}

void UScoreTable::OnRestartClick()
{
	UWorld* World = GetWorld();

	if (World)
	{
		UKismetSystemLibrary::ExecuteConsoleCommand(World, TEXT("RestartLevel"));
	}
}

void UScoreTable::SetTextBlockText(FText YourName, FText YourScore)
{
	if (YourNameText)
	{
		YourNameText->Text = YourName;
	}

	if (YourScoreText)
	{
		YourScoreText->Text = YourScore;
	}
}
