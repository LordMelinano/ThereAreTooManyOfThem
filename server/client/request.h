#pragma once
#include <cpprest/http_client.h>
#include <cpprest/json.h>
#include "nlohmann/json.hpp"

#include <iostream>
#include <map>
#include <string>

using namespace web;
using namespace web::http;
using namespace web::http::client;

/**
* This class makes request to the databaseserver for inserting data or
* get data from the database
* 
* @brief Class as an interface for serverrequests
* @author Justus Saringer
*/
class request
{
private:
    static http_client client;

    /**
    * @brief displays the json data in the console
    * @param jvalue is the data in json format
    * @param prefix is the string which is displayed before the json data in the console
    */
	void display_json(json::value const& jvalue, utility::string_t const& prefix);

    pplx::task<http_response> make_task_request(method mtd, json::value const& jvalue);

public:
    /**
    * @brief makes a get request to the server to get every score and user name
    * @param mtd the method with which the request is sent
    * @param jvalue is the data in json format
    * @return a map with username as key(string) and score as value(int)
    */
    std::map<std::string, int> make_get_request(method mtd, json::value const& jvalue);

    /**
    * @brief makes a post request to insert data in the database of the server
    * @param mtd the method with which the request is sent
    * @param jvalue is the data in json format
    */
    void make_post_request(method mtd, json::value const& jvalue);

    /**
    * @brief makes a post request to insert data in the database of the server but
    * converts the given data to the right format
    * @param name users name
    * @param score user reached score
    */
    void make_post_request_with_valCon(std::string name, int score);
};