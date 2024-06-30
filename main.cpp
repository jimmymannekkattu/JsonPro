#include <iostream>
#include <sstream>
#include <string>
#include "nlohmann/json.hpp"
#include "UIElement.hpp"
#include "TextElement.hpp"
#include "WebViewElement.hpp"
#include "Utility.hpp"
#include "UIElementFactory.hpp"
using json = nlohmann::json;






int main() {
    std::string host = "jsonplaceholder.typicode.com";
    std::string path = "/albums";
    std::string path1 = "/photos"; 
    int num = 1;
    std::cout<<"input 1 or 2"<<std::endl;
    std::cin>>num;
    // Perform HTTPS GET request
    if(num == 1 ) Utility::parseJson(Utility::httpsGet(host, path));
    else Utility::parseJson(Utility::httpsGet(host, path1));
    return 0;
}