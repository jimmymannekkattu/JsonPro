#include "WebViewElement.hpp"
#include <iostream>
WebViewElement::WebViewElement(std::string type, std::string value):UIElement(type, value){}

void WebViewElement::render() {
        std::cout << "Rendering WebView Element : "<<m_type<<":"<<m_value << std::endl;
    }