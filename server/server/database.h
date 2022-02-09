#pragma once
#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <sstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <map>

// for database
#include "sqlite/sqlite3.h"

/**
* This class builds a connection to in the code pre-defined database.
* This class inserts data in form of a name and a score to this database.
* It can also get all the data from the database.
* 
* @brief Class as an interface for database
* @author Justus Saringer
*/
// parameters which are not necessery for the users are not commented out
static class database
{
public:
	static int stmt; ///< result of the executed sqlite command as an integer
	static char* msg; ///< 
	static int callback(void* data, int argc, char** argv, char** azColName);
	static std::map<std::string, int> resultList;

	static sqlite3* db;
	static sqlite3_stmt* statement;

	/**
	* @brief connects to a pre-defined database
	*/
	static void connectToDB();

	/**
	* @brief Inserts a data pair of a name and a score to the database
	* @param name includes the players name
	* @param score includes the players reached score
	* @return bool if insertion was a success
	*/
	static bool insertScoreInDB(std::string name, int score);

	/**
	* @brief gets all records from the database
	* @return all records from the database in a map with string for name and int for the score
	*/
	static std::map<std::string, int> getTable();
};

#endif // !DATABASE_H