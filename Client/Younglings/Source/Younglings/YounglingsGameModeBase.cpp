// Copyright Epic Games, Inc. All Rights Reserved.


#include "YounglingsGameModeBase.h"

#include "FloorTile.h"
#include "GameHud.h"
#include "Kismet/GameplayStatics.h"

void AYounglingsGameModeBase::BeginPlay()
{
	UGameplayStatics::GetPlayerController(GetWorld(),0)->bShowMouseCursor = true;

	GameHud = Cast<UGameHud>(CreateWidget(GetWorld(), GameHudClass));
	check(GameHud);

	GameHud->InitializeHUD(this);
	GameHud->AddToViewport();

	NumberOfLives = MaxLives;
	
	CreateInitialFloorTiles();
}

void AYounglingsGameModeBase::CreateInitialFloorTiles()
{
	AFloorTile* Tile = AddFloorTile(false);
	if (Tile)
	{
		LaneSwitchValues.Add(Tile->LeftLane->GetComponentLocation().Y);
		LaneSwitchValues.Add(Tile->CenterLane->GetComponentLocation().Y);
		LaneSwitchValues.Add(Tile->RightLane->GetComponentLocation().Y);
	}

	/*for (float Val : LaneSwitchValues)
	{
		UE_LOG(LogTemp, Warning, TEXT("LANE VALUE: %f"), Val); 
	}*/
	AddFloorTile(false);
	AddFloorTile(false);
	
	for (int i = 0; i<NumInitialFloorTiles; i++)
	{
		AddFloorTile(true);
	}
}

AFloorTile* AYounglingsGameModeBase::AddFloorTile(const bool bSpawnItems)
{
	UWorld* World = GetWorld();

	if (World)
	{
		AFloorTile* Tile = GetWorld()->SpawnActor<AFloorTile>(FloorTileClass, NextSpawnPoint);

		if (Tile)
		{
			FloorTiles.Add(Tile);
			
			if (bSpawnItems)
			{
				Tile->SpawnItems();
			}
			
			NextSpawnPoint = Tile->GetAttachTransform();
		}

		return Tile;
	}
	return nullptr;
}

void AYounglingsGameModeBase::AddCoin()
{
	TotalCoins += 1;

	OnCoinsCountChanged.Broadcast(TotalCoins);
}

void AYounglingsGameModeBase::PlayerDied()
{
	NumberOfLives -= 1;
	OnLivesCountChanged.Broadcast(NumberOfLives);
	if (NumberOfLives > 0)
	{
		// iterate all FloorTiles and call DestroyFloorTiles

		for (auto Tile : FloorTiles)
		{
			Tile->DestroyFloorTile();
		}
		
		//Empty our array
		FloorTiles.Empty();

		//NextSpawnPoint to initial value
		NextSpawnPoint = FTransform();

		//Create out Initial floor tiles
		CreateInitialFloorTiles();

		//Broadcast level reset event
		OnLevelReset.Broadcast();
	}
	else
	{
		GameOver();
	}
}

void AYounglingsGameModeBase::RemoveTile(AFloorTile* Tile)
{
	FloorTiles.Remove(Tile);
}

void AYounglingsGameModeBase::GameOver()
{
	if (IsValid(GameOverScreenClass))
	{
		UUserWidget* Widget = CreateWidget(GetWorld(), GameOverScreenClass);

		if (Widget)
		{
			Widget->AddToViewport();
		}
	}
	
	/*if (IsValid(GameOverScreenClass))
	{
		UUserWidget* Widget = CreateWidget(GetWorld(), GameOverScreenClass);

		if (Widget)
		{
			Widget->AddToViewport();
		}
	}*/
}


