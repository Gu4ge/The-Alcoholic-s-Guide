#include "wine.h"

Aging Wine::getAging() const
{
    return aging_;
}

Color Wine::getColor() const
{
    return color_;
}

Sweetness Wine::getSweetness() const{
    return sweetness_;
}

std::string Wine::getGrapeVariety() const{
    return grape_variety_;
}

std::string Wine::getDescription() const{
    return " ";
}
