//
// Created by Iron Tony on 09/05/2020.
//

#ifndef FACADE_RESTAURANT_H
#define FACADE_RESTAURANT_H

class Restaurant {
public:
    enum class DayTime {
        Morning,
        Afternoon,
        Evening,
    };

    int orderEverydayBreakfast(int daysNum) const {
        return 50 * daysNum;
    }

    int bookTable(DayTime dayTime) const {
        switch (dayTime) {
            case DayTime::Morning:
                return 200;
            case DayTime::Afternoon:
                return 100;
            case DayTime::Evening:
                return 200;
        }
    }
};

#endif //FACADE_RESTAURANT_H
