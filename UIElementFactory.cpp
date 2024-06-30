#include "UIElementFactory.hpp"
#include <iostream>
#include "TextElement.hpp"
#include "WebViewElement.hpp"
#include "UIElement.hpp"

 std::unique_ptr<UIElement> UIElementFactory::createElement(std::string type, std::string value) {
    if(type == "userId" || type == "albumId" || type == "id" || type == "title" )
            return std::make_unique<TextElement>(type, value);
    else if( type == "thumbnailUrl" || type == "url")
            return std::make_unique<WebViewElement>(type, value);
        else{
            std::cout<<"unidentified element  : "<<type<<std::endl;
            return nullptr;
        }
}