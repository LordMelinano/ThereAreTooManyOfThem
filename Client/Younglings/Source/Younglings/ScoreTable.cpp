// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreTable.h"

#include "ScoreTableRow.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"


void UScoreTable::NativeConstruct()
{
	ScoreMap.insert(std::make_pair(FString("It's over Anakin"), 67));
	ScoreMap.insert(std::make_pair(FString("I have the"), 68));
	ScoreMap.insert(std::make_pair(FString("High Ground"), 69));
	ScoreMap.insert(std::make_pair(FString("The Senate"), 66));
	ScoreMap.insert(std::make_pair(FString("Like a Bantha"), 5));
	ScoreMap.insert(std::make_pair(FString("Bantha"), 54));
	
	if (IsValid(ScoreTableRowWidgetClass))
	{
		if (!ScoreMap.empty())
		{
			for (const auto Score : ScoreMap)
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
