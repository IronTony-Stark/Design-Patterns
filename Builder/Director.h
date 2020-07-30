//
// Created by Iron Tony on 30/07/2020.
//

#ifndef BUILDER_DIRECTOR_H
#define BUILDER_DIRECTOR_H

#include "IHouseBuilder.h"

class Director {
private:
    IHouseBuilder* mHouseBuilder;

public:
    explicit Director(IHouseBuilder* houseBuilder) : mHouseBuilder(houseBuilder) {}

    void setBuilder(IHouseBuilder* houseBuilder) {
        mHouseBuilder = houseBuilder;
    }

    void buildWindowsFirst() {
        buildWindowsFirst(mHouseBuilder);
    }

    void buildDoorsFirst() {
        buildDoorsFirst(mHouseBuilder);
    }

    static void buildWindowsFirst(IHouseBuilder* houseBuilder) {
        houseBuilder->buildWalls();
        houseBuilder->buildWindows();
        houseBuilder->buildDoors();
    }

    static void buildDoorsFirst(IHouseBuilder* houseBuilder) {
        houseBuilder->buildWalls();
        houseBuilder->buildDoors();
        houseBuilder->buildWindows();
    }
};

#endif //BUILDER_DIRECTOR_H
