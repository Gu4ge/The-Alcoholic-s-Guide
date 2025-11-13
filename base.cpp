#include "base.h"

std::string Base::getName() const{
    return name_;
}

Price Base::getPrice() const{
    return price_;
}

Type Base::getType() const{
    return type_;
}
float Base::getAlcoholContent() const{
    return alcohol_content_;
}
std::string Base::getCountryOrigin() const{
    return country_origin_;
}