//
// Created by Iron Tony on 10/05/2020.
//

#ifndef BRIDGE_ISHAPE_H
#define BRIDGE_ISHAPE_H

#include <string>
#include <utility>
#include "IColor.h"

class IShape {
public:
    explicit IShape(std::string shape, const IColor& color) :
            mShape(std::move(shape)), mColor(color) {}

    const std::string& getShape() {
        return mShape;
    }

    const std::string& getColor() {
        return mColor.getColor();
    }

    virtual ~IShape() = 0;

private:
    std::string mShape;
    const IColor& mColor;
};

IShape::~IShape() = default;

#endif //BRIDGE_ISHAPE_H
