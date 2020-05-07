//
// Created by Iron Tony on 07/05/2020.
//

#ifndef FACTORY_METHOD_MATERIALIMAGE_H
#define FACTORY_METHOD_MATERIALIMAGE_H

#include <iostream>
#include "IImage.h"

class MaterialImage : public IImage {
public:
    void load() override {
        std::cout << "Loading Image\n";
    }

    void render() override {
        std::cout << "Creating Material Image\n";
    }
};

#endif //FACTORY_METHOD_MATERIALIMAGE_H
