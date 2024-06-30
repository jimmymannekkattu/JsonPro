#pragma once
#include "UIElement.hpp"
#include <string>
#include <iostream>

class TextElement : public UIElement {
   
public:
    TextElement(std::string type, std::string value);
    void render() override; 
};
