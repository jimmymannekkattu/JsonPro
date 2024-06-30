#pragma once
#include <string>

class UIElement {
    protected:
    std::string m_value;
    std::string m_type;
public:
    UIElement(std::string type, std::string value);
    virtual void render() = 0;
    virtual ~UIElement() {}  
};

