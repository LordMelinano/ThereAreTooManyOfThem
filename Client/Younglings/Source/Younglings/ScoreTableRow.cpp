// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreTableRow.h"

#include "Components/TextBlock.h"

void UScoreTableRow::InitializeTableRow(FString Name,  int32 Score)
{
	NameText->SetText(FText::FromString(Name));
	ScoreText->SetText(FText::AsNumber(Score));
}
