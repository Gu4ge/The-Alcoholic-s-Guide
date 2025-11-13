#include "beer.h"

std::string Beer::getDescription() const{
    return " ";
}

BeerType Beer::getBeerType() const{
    return beer_type_;
}
Bitterness Beer::getBitterness() const{
    return bitterness_;
}
Fermentation Beer::getFermentation() const{
    return fermentation_;
}
std::string Beer::getBrewery() const{
    return brewery_;
}