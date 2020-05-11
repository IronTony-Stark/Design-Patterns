//
// Created by Iron Tony on 11/05/2020.
//

#ifndef TEMPLATEMETHOD_TEXASPIZZA_H
#define TEMPLATEMETHOD_TEXASPIZZA_H

#include "APizza.h"

class TexasPizza : public APizza {
private:
    void prepareIngredients() override {
        std::cout << "Preparing corn, onion, mushrooms, bavarian sausages and mozzarella...\n";
    }

    void addSauce() override {
        std::cout << "Adding BBQ sauce...\n";
    }

    void addToppings() override {
        std::cout << "Adding corn, onion, mushrooms, bavarian sausages and mozzarella...\n";
    }
};

#endif //TEMPLATEMETHOD_TEXASPIZZA_H
