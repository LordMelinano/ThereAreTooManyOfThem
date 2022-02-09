#pragma once

// for the API
#include <cpprest/http_listener.h>
#include <cpprest/json.h>
#include <nlohmann/json.hpp>

using namespace web::http;
using namespace web::http::experimental::listener;

// standardlib
#include <iostream>
#include <map>
#include <set>
#include <string> 

// database
#include "database.h"

#define TRACE(msg)            std::wcout << msg
#define TRACE_ACTION(a, k, v) std::wcout << a << L" (" << k << L", " << v << L")\n"

std::string _name;
int _score;
std::map<std::string, int> dictionary;

void display_json(web::json::value const& jvalue, utility::string_t const& prefix)
{
    std::wcout << prefix << jvalue.serialize() << std::endl;
}

void getTable(http_request request)
{
    TRACE(L"\nGet Table request\n");
    dictionary.clear();
    

    // filling the dictionary with database data
    dictionary = database::getTable();


    // converting the standardlib string to the necessery utility string_t in a new map
    std::map<utility::string_t, int> convertedDictionary;
    for ( auto &x:dictionary)
    {
        convertedDictionary.emplace(utility::conversions::to_string_t(x.first), x.second);
    }


    // creating the sendable json object
    web::json::value obj;
    for (auto const& p : convertedDictionary)
    {
        obj[p.first] = web::json::value::number(p.second);
    }
    // response to client
    request.reply(status_codes::OK, obj);
}

void handle_request(http_request request, std::function<void(web::json::value const&, web::json::value&)> action)
{
    auto answer = web::json::value::object();

    request
        .extract_json()
        .then([&answer, &action](pplx::task<web::json::value> task) {
        try
        {
            auto const& jvalue = task.get();
            display_json(jvalue, L"R: ");

            if (!jvalue.is_null())
            {
                action(jvalue, answer);
            }
        }
        catch (http_exception const& e)
        {
            std::wcout << e.what() << std::endl;
        }
            })
        .wait();

            request.reply(status_codes::OK, answer);
}

void insertScore(http_request request)
{
    TRACE("\nInsert Score request\n");

    handle_request(
        request,
        [](web::json::value const& jvalue, web::json::value& answer)
        {
            auto arr = jvalue.as_array();
            auto name = arr[0].as_string();
            auto score = arr[1].as_number();

            _name = utility::conversions::to_utf8string(name);
            _score = score.to_int32();

            database::insertScoreInDB(_name, _score);
        });
}

int main()
{
    database datab;
    datab.connectToDB();

    http_listener listener(L"http://localhost/younglings");

    listener.support(methods::GET, getTable);
    listener.support(methods::POST, insertScore);

    try
    {
        listener
            .open()
            .then([&listener]() {TRACE(L"\nstarting to listen\n"); })
            .wait();

        while (true);
    }
    catch (std::exception const& e)
    {
        std::wcout << e.what() << std::endl;
    }
    sqlite3_close(database::db);
    return 0;
}