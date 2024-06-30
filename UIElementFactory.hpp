#include "UIElement.hpp"
#include <string>
#include <memory>

class UIElementFactory {
public:
    static std::unique_ptr<UIElement> createElement(std::string type, std::string value);
};