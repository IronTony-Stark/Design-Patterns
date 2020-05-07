//
// Created by Iron Tony on 07/05/2020.
//

#ifndef ABSTRACTFACTORY_WINDOWSIMAGE_H
#define ABSTRACTFACTORY_WINDOWSIMAGE_H

#include <iostream>
#include "IImage.h"

class WindowsImage : public IImage {
public:
    void load() override {
        std::cout << "Loading Image\n";
    }

    void render() override {
        std::cout << "Creating Windows Image\n";
    }
};

#endif //ABSTRACTFACTORY_WINDOWSIMAGE_H
