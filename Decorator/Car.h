//
// Created by Iron Tony on 06/05/2020.
//

#ifndef DECORATOR_CAR_H
#define DECORATOR_CAR_H

#include <string>
#include <utility>
#include "ACar.h"

class Car : public ACar {
public:
    explicit Car(std::string  brand) : mBrand(std::move(brand)) {}

private:
    std::string mBrand;
};

#endif //DECORATOR_CAR_H
