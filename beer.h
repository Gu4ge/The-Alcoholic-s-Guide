#pragma once

#include "base.h"

class Beer : public Base
{
public:
    Beer(const std::string &name, const Price &price, float alcohol_content,
         const std::string &country_origin, BeerType beer_type,
         Bitterness bitterness, Fermentation fermentation,
         const std::string &brewery)
        : Base(name, price, Type::BEER, alcohol_content, country_origin),
          beer_type_(beer_type), bitterness_(bitterness),
          fermentation_(fermentation), brewery_(brewery) {}

    BeerType getBeerType() const;
    Bitterness getBitterness() const;
    Fermentation getFermentation() const;
    std::string getBrewery() const;

    std::string getDescription() const override;

private:
    BeerType beer_type_;
    Bitterness bitterness_;
    Fermentation fermentation_;
    std::string brewery_;
};
