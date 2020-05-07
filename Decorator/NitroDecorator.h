//
// Created by Iron Tony on 06/05/2020.
//

#ifndef DECORATOR_NITRODECORATOR_H
#define DECORATOR_NITRODECORATOR_H

#include "CarDecorator.h"

class NitroDecorator : public CarDecorator {
public:
    explicit NitroDecorator(ACar& car) : CarDecorator(car) {}

    int speed() override {
        return CarDecorator::speed() + 20;
    }

    int coolness() override {
        return CarDecorator::coolness() + 20;
    }
};

#endif //DECORATOR_NITRODECORATOR_H
