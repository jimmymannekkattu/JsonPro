#include "Utility.hpp"

#include "nlohmann/json.hpp"
#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <memory>
#include <sstream>
#include <iostream>
#include "UIElementFactory.hpp"
#include "UIElement.hpp"

using json = nlohmann::json;



void Utility::parseJson( std::string httpResponse){
     try {
       
        json jsonArray = json::parse(httpResponse);
        std::cout<< "created the json array... "<<std::endl;
        if (jsonArray.is_array()) {
            std::cout<< "checking the json array... "<<std::endl;
            for (const auto& entry : jsonArray) {
                for (auto it = entry.begin(); it != entry.end(); ++it) {

                         std::stringstream ss, ss1;
                        ss << it.value();
                        ss1 << it.key();
                       std::unique_ptr<UIElement> uiElement = UIElementFactory::createElement(ss1.str(),ss.str());
                        uiElement->render();
 
                    }
                }
                std::cout << std::endl; 
                }

    }  catch (const std::exception& ex) {
        std::cerr << "Error parsing JSON: " << ex.what() << std::endl;
    }
}
std::string Utility::httpsGet(const std::string& host, const std::string& path) {

        curlpp::Cleanup cleaner;
        curlpp::Easy request;

        request.setOpt(new curlpp::options::Url(host+path));

        request.setOpt(new curlpp::options::FollowLocation(true));

        std::ostringstream responseStream;

        curlpp::options::WriteStream writeStream(&responseStream);
        request.setOpt(writeStream);

        request.perform();
        std::cout << "Size of responseStream: " << responseStream.str().size() << std::endl;
        std::cout<< "text : " << responseStream.str()<<std::endl;
        return responseStream.str();

}