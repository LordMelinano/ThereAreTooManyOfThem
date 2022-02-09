#include "request.h"

std::map<std::string, int> scoretable;
http_client request::client(U("http://localhost/younglings"));

void request::display_json(
    json::value const& jvalue,
    utility::string_t const& prefix)
{
    std::wcout << prefix << jvalue.serialize() << std::endl;
}



pplx::task<http_response> request::make_task_request(method mtd, json::value const& jvalue)
{
    return (mtd == methods::GET || mtd == methods::HEAD) ?
        request::client.request(mtd, L"/younglings") :
        request::client.request(mtd, L"/younglings", jvalue);
}



void request::make_post_request(method mtd, json::value const& jvalue)
{
    std::map<utility::string_t, int> responseData;

    request::make_task_request(mtd, jvalue)
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




std::map<std::string, int> request::make_get_request(method mtd, json::value const& jvalue)
{
    pplx::task<web::http::http_response> resp = request::client.request(
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



void request::make_post_request_with_valCon(std::string name, int score)
{    
    utility::stringstream_t jstring;
    web::json::value conString = json::value::parse(utility::conversions::to_string_t(name));

    auto values = json::value::array();
    values[0] = conString;
    values[1] = json::value::number(score);

    std::wcout << L"\nPOST request\n";
    make_post_request(methods::POST, values);
}