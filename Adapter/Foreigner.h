//
// Created by Iron Tony on 08/05/2020.
//

#ifndef ADAPTER_FOREIGNER_H
#define ADAPTER_FOREIGNER_H

#include "IForeignSpeaker.h"

class Foreigner : public IForeignSpeaker {
public:
    void speakForeignLanguage() const override {
        std::cout << "Hi! I'm a foreigner\n";
    }

    void understandForeignLanguage(const IForeignSpeaker& foreigner) const {
        foreigner.speakForeignLanguage();
    }
};

#endif //ADAPTER_FOREIGNER_H
