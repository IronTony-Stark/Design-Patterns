//
// Created by Iron Tony on 08/05/2020.
//

#ifndef ADAPTER_LANGUAGEADAPTER_H
#define ADAPTER_LANGUAGEADAPTER_H

#include "INativeSpeaker.h"
#include "IForeignSpeaker.h"

class LanguageAdapter : public INativeSpeaker, public IForeignSpeaker {
public:
    explicit LanguageAdapter(const INativeSpeaker& nativeSpeaker, const IForeignSpeaker& foreignSpeaker)
            : mNativeSpeaker(nativeSpeaker), mForeignSpeaker(foreignSpeaker) {}

    void speakNativeLanguage() const override {
        mForeignSpeaker.speakForeignLanguage();
    }

    void speakForeignLanguage() const override {
        mNativeSpeaker.speakNativeLanguage();
    }

private:
    const INativeSpeaker& mNativeSpeaker;
    const IForeignSpeaker& mForeignSpeaker;
};

#endif //ADAPTER_LANGUAGEADAPTER_H
