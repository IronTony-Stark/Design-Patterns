//
// Created by Iron Tony on 11/05/2020.
//

#ifndef TEMPLATEMETHOD_PEPPERONIPIZZA_H
#define TEMPLATEMETHOD_PEPPERONIPIZZA_H

#include "APizza.h"

class PepperoniPizza : public APizza {
private:
    void prepareIngredients() override {
        std::cout << "Preparing mozzarella, peperoni and tomatoes...\n";
    }

    void addSauce() override {
        std::cout << "Adding BBQ sauce...\n";
    }

    void addToppings() override {
        std::cout << "Adding mozzarella, peperoni and tomatoes...\n";
    }
};

#endif //TEMPLATEMETHOD_PEPPERONIPIZZA_H
