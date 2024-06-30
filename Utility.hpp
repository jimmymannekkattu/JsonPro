#pragma once
#include <string>
#include "nlohmann/json.hpp"
using json = nlohmann::json;
class Utility {
public:
    static std::map<std::string, std::string> jsonToMap(const json& jsonObject);
    static void  parseJson( std::string httpResponse);
    static std::string httpsGet(const std::string& host, const std::string& path);
};
