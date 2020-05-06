//
// Created by Iron Tony on 06/05/2020.
//

#include "AChannel.h"
#include "AYouTuber.h"

void AChannel::add(AYouTuber* subscriber) {
    mSubscribers.push_back(subscriber);
}

void AChannel::remove(AYouTuber* subscriber) {
    mSubscribers.remove(subscriber);
}

void AChannel::notify() {
    auto iterator = mSubscribers.begin();
    while (iterator != mSubscribers.end()) {
        (*iterator)->getNotification(this);
        ++iterator;
    }
}

