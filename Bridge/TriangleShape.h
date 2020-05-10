//
// Created by Iron Tony on 10/05/2020.
//

#ifndef BRIDGE_TRIANGLESHAPE_H
#define BRIDGE_TRIANGLESHAPE_H

#include "IShape.h"

class TriangleShape : public IShape {
public:
    explicit TriangleShape(const IColor& color) :
            IShape("triangle", color) {}
};

#endif //BRIDGE_TRIANGLESHAPE_H
