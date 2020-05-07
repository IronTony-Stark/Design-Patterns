//
// Created by Iron Tony on 06/05/2020.
//

#ifndef DECORATOR_PAINTINGDECORATOR_H
#define DECORATOR_PAINTINGDECORATOR_H

#include "CarDecorator.h"

class PaintingDecorator : public CarDecorator {
public:
    explicit PaintingDecorator(ACar& car) : CarDecorator(car) {}

    int speed() override {
        return CarDecorator::speed();
    }

    int coolness() override {
        return CarDecorator::coolness() + 30;
    }
};

#endif //DECORATOR_PAINTINGDECORATOR_H
