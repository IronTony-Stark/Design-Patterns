//
// Created by Iron Tony on 06/05/2020.
//

#ifndef OBSERVER_ACHANNEL_H
#define OBSERVER_ACHANNEL_H

#include <string>
#include <list>

class AYouTuber;

class AChannel {
public:
    virtual void add(AYouTuber*);

    virtual void remove(AYouTuber*);

    virtual void notify();

    virtual const std::string& getName() = 0;

    virtual const std::string& getLatestVideo() = 0;

    virtual ~AChannel() = default;

protected:
    std::list<AYouTuber*> mSubscribers;
};

#endif //OBSERVER_ACHANNEL_H
