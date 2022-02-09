#include "GameDatabase.h"

#include <string>

GameDatabase::GameDatabase(FString Path, ESQLiteDatabaseOpenMode OpenMode)
{
	// OpenModes's:
	// ESQLiteDatabaseOpenMode::ReadOnly (Many connections can read one database)
	// ESQLiteDatabaseOpenMode::ReadWrite (Only one connection can write to database)
	// ESQLiteDatabaseOpenMode::ReadWriteCreate (Only one connection can write and create new tables to database)
	// A connection already opened with ReadWrite/ReadWriteCreate will block other connections with the same OpenMode
	
	Database = new FSQLiteDatabase();
	
	if (!Database ->Open(*Path, OpenMode) || !Database->IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to open database: %s"), *Database->GetLastError());
	}
	std::string name = "Bantha";
	int32 score = 42;
	const TCHAR* SaveQuery = TEXT("INSERT INTO Highscores(Name, Score) VALUES($Name, $Score)");
	SaveStatement.Create(*Database, SaveQuery, ESQLitePreparedStatementFlags::Persistent);
	
	const TCHAR* LoadQuery = TEXT("SELECT * FROM Highscores ORDER BY Score DESC");
	SaveStatement.Create(*Database, LoadQuery, ESQLitePreparedStatementFlags::Persistent);
	
}

GameDatabase::~GameDatabase()
{
	SaveStatement.Destroy();
	LoadStatement.Destroy();
	
	if (!Database->Close())
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to close database: %s"), *Database->GetLastError());
	}
	else
	{
		delete Database;
	}
}

bool GameDatabase::SaveHighscore(FText Name, int32 Score)
{
	if (Database->IsValid() && SaveStatement.IsValid())
	{
		SaveStatement.Reset();

		bool bBindingSuccess = true;
		bBindingSuccess = bBindingSuccess && SaveStatement.SetBindingValueByName(TEXT("$Name"), Name);
		bBindingSuccess = bBindingSuccess && SaveStatement.SetBindingValueByName(TEXT("$Score"), Score);

		if (!bBindingSuccess || !SaveStatement.Execute())
		{
			return false;
		}
	}

	return true;
}

std::map<FString, int32> GameDatabase::LoadHighscores()
{
	std::map<FString, int32> ScoreMap;
	ScoreMap.insert(std::make_pair(FString(" "), -1));

	if (Database->IsValid() && LoadStatement.IsValid())
	{
		LoadStatement.Reset();


		if(LoadStatement.Execute()&&LoadStatement.Step()==ESQLitePreparedStatementStepResult::Row)
		{
			FString Name;
			int32 Score;
			LoadStatement.GetColumnValueByName(TEXT("Name"), Name);
			LoadStatement.GetColumnValueByName(TEXT("Score"), Score);
			
			ScoreMap.insert(std::make_pair(Name, Score));
			
		}
	}
	return ScoreMap;
}
