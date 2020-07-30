//
// Created by Iron Tony on 30/07/2020.
//

#ifndef BUILDER_PALACEBUILDER_H
#define BUILDER_PALACEBUILDER_H

#include <iostream>
#include "IHouseBuilder.h"
#include "House.h"

class PalaceBuilder : public IHouseBuilder {
private:
    House* mHouse;

public:
    PalaceBuilder() : mHouse(new House()) {}

    void buildWalls() override {
        std::cout << "Building gorgeous walls...\n";
        mHouse->setWalls();
    }

    void buildWindows() override {
        std::cout << "Building big windows...\n";
        mHouse->setWindows();
    }

    void buildDoors() override {
        std::cout << "Building fancy doors...\n";
        mHouse->setDoors();
    }

    void reset() override {
        std::cout << "Palace built successfully\n";
        mHouse = new House();
    }

    House& get() {
        return *mHouse;
    }

    House& getAndReset() {
        House& house = get();
        reset();
        return house;
    }
};

#endif //BUILDER_PALACEBUILDER_H
