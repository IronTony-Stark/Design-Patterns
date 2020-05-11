//
// Created by Iron Tony on 11/05/2020.
//

#ifndef TEMPLATEMETHOD_HAWAIIANPIZZA_H
#define TEMPLATEMETHOD_HAWAIIANPIZZA_H

#include "APizza.h"

class HawaiianPizza : public APizza {
private:
    void prepareIngredients() override {
        std::cout << "Preparing chicken, pineapple and mozzarella...\n";
    }

    void addSauce() override {
        std::cout << "Adding cheese sauce...\n";
    }

    void addToppings() override {
        std::cout << "Adding chicken, pineapple and mozzarella...\n";
    }
};

#endif //TEMPLATEMETHOD_HAWAIIANPIZZA_H
