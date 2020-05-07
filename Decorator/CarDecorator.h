//
// Created by Iron Tony on 06/05/2020.
//

#ifndef DECORATOR_CARDECORATOR_H
#define DECORATOR_CARDECORATOR_H

#include "ACar.h"

class CarDecorator : public ACar {
public:
    CarDecorator(ACar& car) : mCar(car) {}

    int speed() override {
        return mCar.speed();
    }

    int coolness() override {
        return mCar.coolness();
    }

private:
    ACar& mCar;
};

#endif //DECORATOR_CARDECORATOR_H
