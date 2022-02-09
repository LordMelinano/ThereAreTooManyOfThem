#include "database.h"
#include <vector>
sqlite3_stmt* database::statement;
sqlite3* database::db;
int database::stmt;
char* database::msg;
std::map<std::string, int> database::resultList;

int database::callback(void* data, int argc, char** argv, char** azColName)
{
	std::vector<char*> rawDataVec;
	// fills a vector with the raw data form the sqlite database request
	for (size_t itServerData = 0; itServerData < argc; itServerData++)
	{
		rawDataVec.push_back(argv[itServerData]);
	}

	// converts the data from char pointer to a map with key string as name and an int value as a score
	for (size_t itRawData = 0; itRawData < rawDataVec.size() - 1; itRawData+=2)
	{
		resultList[std::string(rawDataVec[itRawData])] = atoi(rawDataVec[itRawData + 1]);
	}

	return 0;
}


void database::connectToDB()
{
	// creates the database
	database::stmt = sqlite3_open("TooManyOfThemDB.db", &database::db);

	// opens database if it exists
	if (database::stmt)
	{
		std::cerr << "Error while opening database" << sqlite3_errmsg(database::db) << std::endl;
		sqlite3_close(database::db);
	}
	else
	{
		std::cout << "Opened database" << std::endl;
	}

	// creates table if it doesn't exist
	database::stmt = sqlite3_exec(database::db, "CREATE TABLE IF NOT EXISTS Younglings(NAME	CHAR(20) NOT NULL, SCORE	INT	NOT NULL);",
		NULL, NULL, &database::msg);
}


bool database::insertScoreInDB(std::string name, int score)
{
	// prüfen ob der Name schon vorhanden ist und dass der einzutragende Wert besser ist (alten Eintrag damit löschen!!!)
	std::ostringstream sqlInsert;
	sqlInsert << "SELECT * FROM Younglings WHERE NAME = '" << name << "';";

	// checks if there is already a record
	database::stmt = sqlite3_prepare_v2(database::db, (sqlInsert.str()).c_str(), -1, &database::statement, NULL); ///< checks if the name is already in the database 
		if (sqlite3_step(database::statement) == SQLITE_ROW)
		{
			// record is found and will be checked
			database::stmt = sqlite3_exec(database::db, (sqlInsert.str()).c_str(), database::callback, NULL, &database::msg); ///< checks if a record is already present

			if (database::stmt == SQLITE_OK)
			{
				std::map<std::string, int>::iterator it = database::resultList.begin();
				// checks if the score of the found record is lower than the new score
				if (it->second >= score)
				{
					std::cout << "there is already a record with higher score\n\n";
					database::resultList.clear();
					return false;
				}
				else
				{
					// updates the record
					sqlInsert << "UPDATE Younglings set SCORE = " << score << "WHERE NAME = '" << name << "';";
					database::stmt = sqlite3_exec(database::db, (sqlInsert.str()).c_str(), NULL, NULL, &database::msg);
					if (database::stmt != SQLITE_OK)
					{
						std::cout << "record updated\n\n" << std::endl;
						database::resultList.clear();
						return true;
					}
					else
					{
						std::cerr << "Error while updating data 	-	" << sqlite3_errmsg(database::db) << std::endl << std::endl;
						database::resultList.clear();
						return false;
					}
				}
			}
			else
			{
				std::cerr << "Error while inserting data" << sqlite3_errmsg(database::db) << std::endl;
				database::resultList.clear();
				return false;
			}
		}
		else
		{
			// no record found
			sqlInsert << "INSERT INTO Younglings (NAME, SCORE) VALUES ('" << name << "'," << score << ");";
			database::stmt = sqlite3_exec(database::db, (sqlInsert.str()).c_str(), NULL, NULL, &database::msg);

			if (database::stmt == SQLITE_OK)
			{
				database::resultList.clear();
				return true;
			}
			else
			{
				std::cerr << "Error while inserting data\n" << sqlite3_errmsg(database::db) << std::endl;
				database::resultList.clear();
				return false;
			}
		}
	sqlite3_finalize(database::statement);
	database::resultList.clear();
	return false;
}


std::map<std::string, int> database::getTable()
{
	database::stmt = sqlite3_exec(database::db, "SELECT * FROM Younglings ORDER BY SCORE DESC;", database::callback, NULL, &database::msg);

	if (database::stmt == SQLITE_OK)
	{
		return database::resultList;
	}
	else
	{
		std::cerr << "Error while getting tabledata\n" << sqlite3_errmsg(database::db) << std::endl;
		database::resultList.clear();
		return database::resultList;
	}
}