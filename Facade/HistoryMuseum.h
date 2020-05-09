//
// Created by Iron Tony on 09/05/2020.
//

#ifndef FACADE_HISTORYMUSEUM_H
#define FACADE_HISTORYMUSEUM_H

class HistoryMuseum {
public:
    int buyTickets(int peopleNum) const {
        return peopleNum * 40;
    }
};

#endif //FACADE_HISTORYMUSEUM_H
