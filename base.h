#pragma once
#include <string>

enum class Currency
{
    RUB,
    USD,
    CNY,
    EUR
};

struct Price
{
    Price(float price, Currency currency) : price_(price), currency_(currency) {}
    Price() : price_(0.0), currency_(Currency::RUB) {}
    float price_;
    Currency currency_;
};

enum class BeerType {
    LAGER,         
    ALE,           
    STOUT,          
    IPA,            
    WHEAT,         
    PILSNER,        
    PORTER         
};

enum class Bitterness {
    LOW,            
    MEDIUM,         
    HIGH,           
    VERY_HIGH       
};

enum class Fermentation {
    BOTTOM,         
    TOP            
};

enum class Type
{
    WINE,
    WHISKEY,
    BEER
};

enum class Sweetness {
    DRY, SEMI_DRY, SEMI_SWEET, SWEET
};

enum class Aging {
    NONE, YOUNG, AGED, VINTAGE
};

enum class Color{
    RED, PINK, WHITE
};

class Base
{
public:
    Base(const std::string &name, const Price &price, Type type,
         float alcohol_content, const std::string &country_origin)
        : name_(name), price_(price), type_(type),
          alcohol_content_(alcohol_content), country_origin_(country_origin) {}

    virtual ~Base() = default;


    std::string getName() const;
    Price getPrice() const;
    Type getType() const;
    float getAlcoholContent() const;
    std::string getCountryOrigin() const;

    virtual std::string getDescription() const = 0;

private:
    std::string name_;
    Price price_;
    Type type_;
    float alcohol_content_;
    std::string country_origin_;
};