#pragma once

#include <map>
#include <string>

#include "SQLiteDatabase.h"

class GameDatabase
{
public:
	GameDatabase(FString Path, ESQLiteDatabaseOpenMode OpenMode);
	~GameDatabase();

	bool SaveHighscore(FText Name, int32 Score);
	std::map<FString, int32> LoadHighscores();

private:
	FSQLiteDatabase* Database;

	FSQLitePreparedStatement SaveStatement;
	FSQLitePreparedStatement LoadStatement;
};
