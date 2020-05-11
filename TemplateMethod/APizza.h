//
// Created by Iron Tony on 11/05/2020.
//

#ifndef TEMPLATEMETHOD_APIZZA_H
#define TEMPLATEMETHOD_APIZZA_H

#include <iostream>

class APizza {
public:
    virtual void cookPizza() final {
        prepareBread();
        prepareIngredients();
        addSauce();
        addToppings();
        bake();
    }

    virtual ~APizza() = default;

private:
    virtual void prepareBread() {
        std::cout << "Preparing bread...\n";
    }

    virtual void prepareIngredients() = 0;

    virtual void addSauce() = 0;

    virtual void addToppings() = 0;

    virtual void bake() {
        std::cout << "Baking pizza...\n\n";
    }
};

#endif //TEMPLATEMETHOD_APIZZA_H
