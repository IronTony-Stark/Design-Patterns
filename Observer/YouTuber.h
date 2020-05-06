//
// Created by Iron Tony on 06/05/2020.
//

#ifndef OBSERVER_YOUTUBER_H
#define OBSERVER_YOUTUBER_H

#include <string>
#include "AYouTuber.h"

class YouTuber : public AYouTuber {
public:
    explicit YouTuber(std::string name);

    void getNotification(AChannel* channel) override;

private:
    std::string mName;

    void watchVideo(const std::string&, const std::string&);
};

#endif //OBSERVER_YOUTUBER_H
