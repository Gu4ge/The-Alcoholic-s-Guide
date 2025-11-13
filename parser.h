#pragma once
#include <string>
#include <memory>
#include <iostream>
#include <fstream>

#include "base.h"

unsigned int getMenu(const std::string &filename)
{
    std::ifstream f;
    f.open(filename);
    std::string str;
    while (getline(f, str))
    {
        std::cout << str << std::endl;
    };
    f.close();
    unsigned int number_of_command;
    std::cin >> number_of_command;
    return number_of_command;
}

Type getType()
{
    std::cout << "1. beer" << std::endl;
    std::cout << "2. wine" << std::endl;
    unsigned int type_;
    std::cin >> type_;
    switch (type_)
    {
    case 1:
        return Type::BEER;
    case 2:
        return Type::WINE;
    default:
        throw std::invalid_argument("invalid argument");
    }
}

BeerType getBeerType()
{
    unsigned int number_of_command = getMenu("data/beer_type.txt");
    switch (number_of_command)
    {
    case 1:
        return BeerType::LAGER;
    case 2:
        return BeerType::ALE;
    case 3:
        return BeerType::STOUT;
    case 4:
        return BeerType::IPA;
    case 5:
        return BeerType::WHEAT;
    case 6:
        return BeerType::PILSNER;
    case 7:
        return BeerType::PORTER;
    default:
        throw std::invalid_argument("invalid argument");
    }
}

Bitterness getBitterness()
{
    unsigned int number_of_command = getMenu("data/bitterness.txt");
    switch (number_of_command)
    {
    case 1:
        return Bitterness::LOW;
    case 2:
        return Bitterness::MEDIUM;
    case 3:
        return Bitterness::HIGH;
    case 4:
        return Bitterness::VERY_HIGH;
    default:
        throw std::invalid_argument("invalid argument");
    }
}

Sweetness getSweetness()
{
    unsigned int number_of_command = getMenu("data/sweetness.txt");
    switch (number_of_command)
    {
    case 1:
        return Sweetness::DRY;
    case 2:
        return Sweetness::SEMI_DRY;
    case 3:
        return Sweetness::SEMI_SWEET;
    case 4:
        return Sweetness::SWEET;
    default:
        throw std::invalid_argument("invalid argument");
    }
}

Aging getAging()
{
    unsigned int number_of_command = getMenu("data/aging.txt");
    switch (number_of_command)
    {
    case 1:
        return Aging::NONE;
    case 2:
        return Aging::YOUNG;
    case 3:
        return Aging::AGED;
    case 4:
        return Aging::VINTAGE;
    default:
        throw std::invalid_argument("invalid argument");
    }
}

Fermentation getFermentation()
{
    std::cout << "Fermentation" << std::endl;
    std::cout << "1. bottom" << std::endl;
    std::cout << "2. top" << std::endl;
    unsigned int type_;
    std::cin >> type_;
    switch (type_)
    {
    case 1:
        return Fermentation::BOTTOM;
    case 2:
        return Fermentation::TOP;
    default:
        throw std::invalid_argument("invalid argument");
    }
}

Color getColor()
{
    unsigned int number_of_command = getMenu("data/color.txt");
    switch (number_of_command)
    {
    case 1:
        return Color::RED;
    case 2:
        return Color::PINK;
    case 3:
        return Color::WHITE;
    default:
        throw std::invalid_argument("invalid argument");
    }
}

Currency getCurrency()
{
    unsigned int number_of_command = getMenu("data/currency.txt");
    switch (number_of_command)
    {
    case 1:
        return Currency::RUB;
    case 2:
        return Currency::USD;
    case 3:
        return Currency::CNY;
    case 4:
        return Currency::EUR;
    default:
        throw std::invalid_argument("invalid argument");
    }
}

float getPrice(){
    std::cout << "Price" << std::endl;
    std::string price;
    std::cin >> price;
    try{
        return std::stof(price);
    }
    catch(const std::exception& e){
        std::cout << e.what() << std::endl;
    }
}

template <class T>
std::shared_ptr<T> getDrink()
{
    Type type_ = getType();
    if (type_ == Type::BEER)
    {
    }
    else
    {
    }
}
