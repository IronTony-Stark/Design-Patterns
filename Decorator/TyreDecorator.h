//
// Created by Iron Tony on 06/05/2020.
//

#ifndef DECORATOR_TYREDECORATOR_H
#define DECORATOR_TYREDECORATOR_H

#include "CarDecorator.h"

class TyreDecorator : public CarDecorator {
public:
    explicit TyreDecorator(ACar& car) : CarDecorator(car) {}

    int speed() override {
        return CarDecorator::speed() + 5;
    }

    int coolness() override {
        return CarDecorator::coolness() + 5;
    }
};

#endif //DECORATOR_TYREDECORATOR_H
