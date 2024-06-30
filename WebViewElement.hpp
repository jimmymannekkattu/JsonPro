#pragma once
#include "UIElement.hpp"
#include <string>

class WebViewElement : public UIElement {
   
public:
 WebViewElement(std::string type, std::string value);
    void render() override ;
};