#pragma once

#include <vector>
#include <memory>
#include "base.h"
#include "wine.h"
#include "beer.h"

class Library
{
public:
    Library() = default;

    void printAll() const;

    void addDrink(std::shared_ptr<Base> drink) {}
    void deleteDrink(const std::string& drink_name) {}
    void clear();

private:
    std::vector<std::shared_ptr<Base>> library_;
};
