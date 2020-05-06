//
// Created by Iron Tony on 06/05/2020.
//

#include "Channel.h"
#include "AYouTuber.h"

Channel::Channel(std::string name) :
        mName(std::move(name)) {}

const std::string& Channel::getName() {
    return mName;
}

const std::string& Channel::getLatestVideo() {
    return mLatestVideo;
}

void Channel::createNewVideo(std::string video) {
    mLatestVideo = std::move(video);
}
