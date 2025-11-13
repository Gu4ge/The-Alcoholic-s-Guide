#pragma once
#include "base.h"

class Wine : public Base
{
public:
    Wine(const std::string &name, const Price &price,
         float alcohol_content, const std::string &country_origin, Sweetness sweetness, Aging aging,
         std::string grape_variety, Color color) : Base(name, price, Type::WINE, alcohol_content, country_origin),
                                      sweetness_(sweetness), aging_(aging), grape_variety_(grape_variety), color_(color) {}
    
    Sweetness getSweetness() const;
    Aging getAging() const;
    Color getColor() const;
    std::string getGrapeVariety() const;

    std::string getDescription() const override;

private:
    Sweetness sweetness_;
    Aging aging_;
    std::string grape_variety_;
    Color color_;

};