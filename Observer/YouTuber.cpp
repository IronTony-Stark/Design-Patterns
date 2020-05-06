//
// Created by Iron Tony on 06/05/2020.
//

#include <iostream>
#include "YouTuber.h"
#include "AChannel.h"

YouTuber::YouTuber(std::string name) :
        mName(std::move(name)) {}

void YouTuber::getNotification(AChannel* channel) {
    const std::string& channelName = channel->getName();
    const std::string& latestVideo = channel->getLatestVideo();
    watchVideo(channelName, latestVideo);
}

void YouTuber::watchVideo(const std::string& channel, const std::string& video) {
    std::cout << mName << " is watching " << channel << "'s " << video << std::endl;
}
