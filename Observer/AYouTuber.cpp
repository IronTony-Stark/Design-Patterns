//
// Created by Iron Tony on 06/05/2020.
//

#include "AYouTuber.h"
#include "AChannel.h"

void AYouTuber::subscribe(AChannel* channel) {
    channel->add(this);
}

void AYouTuber::unsubscribe(AChannel* channel) {
    channel->remove(this);
}
