//
// Created by Iron Tony on 06/05/2020.
//

#ifndef OBSERVER_CHANNEL_H
#define OBSERVER_CHANNEL_H

#include "AChannel.h"

class Channel : public AChannel {
public:
    explicit Channel(std::string name);

    const std::string& getName() override;

    const std::string& getLatestVideo() override;

    void createNewVideo(std::string video);

private:
    std::string mName;
    std::string mLatestVideo = "Amazing Video";
};

#endif //OBSERVER_CHANNEL_H
