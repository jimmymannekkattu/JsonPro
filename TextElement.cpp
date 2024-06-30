#include "TextElement.hpp"

TextElement::TextElement(std::string type, std::string value):UIElement(type, value){}

void TextElement::render()  {
        std::cout << "Rendering Text Element: "<< m_type<<":"<<m_value<< std::endl;
    }