//
// Created by Iron Tony on 08/05/2020.
//

#ifndef ADAPTER_CITIZEN_H
#define ADAPTER_CITIZEN_H

#include <iostream>
#include "INativeSpeaker.h"

class Citizen : public INativeSpeaker {
public:
    void speakNativeLanguage() const override {
        std::cout << "Hello there! I'm a native speaker\n";
    }

    void understandNativeSpeaker(const INativeSpeaker& nativeSpeaker) const {
        nativeSpeaker.speakNativeLanguage();
    }
};

#endif //ADAPTER_CITIZEN_H
