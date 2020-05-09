//
// Created by Iron Tony on 09/05/2020.
//

#ifndef FACADE_SCIENCEMUSEUM_H
#define FACADE_SCIENCEMUSEUM_H

class ScienceMuseum {
public:
    int buyTickets(int peopleNum) const {
        return peopleNum * 80;
    }
};

#endif //FACADE_SCIENCEMUSEUM_H
