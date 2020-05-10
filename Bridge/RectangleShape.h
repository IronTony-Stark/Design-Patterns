//
// Created by Iron Tony on 10/05/2020.
//

#ifndef BRIDGE_RECTANGLESHAPE_H
#define BRIDGE_RECTANGLESHAPE_H

#include "IShape.h"

class RectangleShape : public IShape {
public:
    explicit RectangleShape(const IColor& color) :
            IShape("rectangle", color) {}
};

#endif //BRIDGE_RECTANGLESHAPE_H
