//
// Created by Iron Tony on 30/07/2020.
//

#ifndef BUILDER_IHOUSEBUILDER_H
#define BUILDER_IHOUSEBUILDER_H

class IHouseBuilder {
public:
    virtual void buildWalls() = 0;
    virtual void buildWindows() = 0;
    virtual void buildDoors() = 0;
    virtual void reset() = 0;
    virtual ~IHouseBuilder() = default;
};

#endif //BUILDER_IHOUSEBUILDER_H
