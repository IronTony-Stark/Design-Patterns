//
// Created by Iron Tony on 10/05/2020.
//

#ifndef BRIDGE_CIRCLESHAPE_H
#define BRIDGE_CIRCLESHAPE_H

#include "IShape.h"

class CircleShape : public IShape {
public:
    explicit CircleShape(const IColor& color) :
            IShape("circle", color) {}
};

#endif //BRIDGE_CIRCLESHAPE_H
