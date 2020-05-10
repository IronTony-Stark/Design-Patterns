//
// Created by Iron Tony on 10/05/2020.
//

#ifndef BRIDGE_ICOLOR_H
#define BRIDGE_ICOLOR_H

#include <string>
#include <utility>

class IColor {
public:
    explicit IColor(std::string value) : mColor(std::move(value)) {}

    const std::string& getColor() const { return mColor; }

    virtual ~IColor() = 0;

private:
    std::string mColor;
};

IColor::~IColor() = default;

#endif //BRIDGE_ICOLOR_H
