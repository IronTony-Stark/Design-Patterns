//
// Created by Iron Tony on 09/05/2020.
//

#ifndef FACADE_HOTEL_H
#define FACADE_HOTEL_H

#include <iostream>
#include "Restaurant.h"

class Hotel {
public:
    int bookRoom(int peopleNum, int daysNum) const {
        switch (peopleNum) {
            case 1:
                return 100 * daysNum;
            case 2:
                return 150 * daysNum;
            case 3:
                return 200 * daysNum;
            case 4:
                return 250 * daysNum;
            case 5:
                return 300 * daysNum;
            default:
                throw std::invalid_argument("Only room for less than 6 people available");
        }
    }

    int orderEverydayBreakfast(int peopleNum, int daysNum) const {
        return mRestaurant.orderEverydayBreakfast(daysNum) * peopleNum;
    }

private:
    Restaurant mRestaurant;
};

#endif //FACADE_HOTEL_H
