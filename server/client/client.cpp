#include <cpprest/http_client.h>
#include <cpprest/json.h>
#include "nlohmann/json.hpp"

using namespace web;
using namespace web::http;
using namespace web::http::client;

#include <iostream>
#include <map>
#include <string>
#include <future>

std::map<std::string, int> scoretable;

void display_json(
    json::value const& jvalue,
    utility::string_t const& prefix)
{
    std::wcout << prefix << jvalue.serialize() << std::endl;
}

pplx::task<http_response> make_task_request(
    http_client& client,
    method mtd,
    json::value const& jvalue)
{
    return (mtd == methods::GET || mtd == methods::HEAD) ?
        client.request(mtd, L"/younglings") :
        client.request(mtd, L"/younglings", jvalue);
}

void make_post_request(
    http_client& client,
    method mtd,
    json::value const& jvalue)
{
    std::map<utility::string_t, int> responseData;

    make_task_request(client, mtd, jvalue)
        .then([](http_response response)
            {
                if (response.status_code() == status_codes::OK)
                {
                    return response.extract_json();
                }
                return pplx::task_from_result(json::value());
            })
        .then([](pplx::task<json::value> previousTask)
            {
                try
                {
                    //display_json(previousTask.get(), L"Result: ");
                }
                catch (http_exception const& e)
                {
                    std::wcout << e.what() << std::endl;
                }
            })
                .wait();
}




std::map<std::string, int> make_get_request(http_client& client, method mtd, json::value const& jvalue)
{
    pplx::task<web::http::http_response> resp = client.request(
        web::http::methods::GET);

    // attached a handler to be invoked when resp.is_done() is true
    pplx::task<json::value> jv = resp.then([=]
    (pplx::task<web::http::http_response> task) {
            web::http::http_response response = task.get();

            // Check the status code.
            if (response.status_code() != 200) {
                throw std::runtime_error("Returned " +
                    std::to_string(response.status_code()));
            }
            std::cout << "Returned " +
                std::to_string(response.status_code()) << std::endl;

            // Convert the response body to JSON object.
            pplx::task<json::value> jsonObject = response.extract_json();
            return jsonObject;
        });


    json::value jo = jv.get();
    std::map<std::string, int> tempScore;

    utility::string_t ergebnis = jo.serialize();
    std::string ergebnisUTF = utility::conversions::to_utf8string(ergebnis);
    nlohmann::json werte = nlohmann::json::parse(ergebnisUTF);

    //std::cout << ergebnisUTF << "\n\n";
    for (auto& elmnt : werte.items())
    {
        //scoretable.insert(std::make_pair(elmnt.key(), elmnt.value()));
        tempScore[elmnt.key()] = elmnt.value();
        std::cout << elmnt.key() << "    " << elmnt.value() << std::endl;
    }
    //jv.wait();
    return tempScore;
}


int main()
{
    http_client client(U("http://localhost/younglings"));

    auto nullvalue = json::value::null();
    std::wcout << L"\nGET (get all values)\n";

    std::map<std::string, int> testMap;
    testMap = make_get_request(client, methods::GET, nullvalue);



    /*auto value1 = json::value::array();
    value1[0] = json::value::string(L"Monika");
    value1[1] = json::value::number(50);

    std::wcout << L"\nPOST (get some values)\n";
    make_post_request(client, methods::POST, value1);*/

    return 0;
}