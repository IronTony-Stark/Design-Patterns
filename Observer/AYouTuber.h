//
// Created by Iron Tony on 06/05/2020.
//

#ifndef OBSERVER_AYOUTUBER_H
#define OBSERVER_AYOUTUBER_H

class AChannel;

class AYouTuber {
public:
    virtual void subscribe(AChannel*);

    virtual void unsubscribe(AChannel*);

    virtual void getNotification(AChannel*) = 0;

    virtual ~AYouTuber() = default;
};

#endif //OBSERVER_AYOUTUBER_H
