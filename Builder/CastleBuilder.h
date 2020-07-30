//
// Created by Iron Tony on 30/07/2020.
//

#ifndef BUILDER_CASTLEBUILDER_H
#define BUILDER_CASTLEBUILDER_H

#include <iostream>
#include "IHouseBuilder.h"
#include "House.h"

class CastleBuilder : public IHouseBuilder {
private:
    House* mHouse;

public:
    CastleBuilder() : mHouse(new House()) {}

    void buildWalls() override {
        std::cout << "Building big stone walls...\n";
        mHouse->setWalls();
    }

    void buildWindows() override {
        std::cout << "Building a lot of small windows...\n";
        mHouse->setWindows();
    }

    void buildDoors() override {
        std::cout << "Building a big door...\n";
        mHouse->setDoors();
    }

    void reset() override {
        mHouse = new House();
    }

    House& get() {
        std::cout << "Castle built successfully\n";
        return *mHouse;
    }

    House& getAndReset() {
        House& house = get();
        reset();
        return house;
    }
};

#endif //BUILDER_CASTLEBUILDER_H
