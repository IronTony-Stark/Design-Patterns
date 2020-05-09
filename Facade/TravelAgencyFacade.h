//
// Created by Iron Tony on 09/05/2020.
//

#ifndef FACADE_TRAVELAGENCYFACADE_H
#define FACADE_TRAVELAGENCYFACADE_H

#include "Hotel.h"
#include "CityTourAgency.h"
#include "ScienceMuseum.h"
#include "HistoryMuseum.h"

class TravelAgencyFacade {
public:
    explicit TravelAgencyFacade(const Hotel& hotel, const CityTourAgency& cityTourAgency,
                       const ScienceMuseum& scienceMuseum, const HistoryMuseum& historyMuseum,
                       double fee) :
            mHotel(hotel), mCityTourAgency(cityTourAgency),
            mScienceMuseum(scienceMuseum), mHistoryMuseum(historyMuseum),
            mFee(fee) {}

    int organizeAwesomeHoliday(int peopleNum, int days) {
        int totalCost = 0;

        totalCost += mHotel.bookRoom(peopleNum, days);
        totalCost += mHotel.orderEverydayBreakfast(peopleNum, days);

        totalCost += mCityTourAgency.buyTour();

        totalCost += mScienceMuseum.buyTickets(peopleNum);
        totalCost += mHistoryMuseum.buyTickets(peopleNum);

        return totalCost + int(totalCost * mFee);
    }

private:
    const Hotel& mHotel;
    const CityTourAgency& mCityTourAgency;
    const ScienceMuseum& mScienceMuseum;
    const HistoryMuseum& mHistoryMuseum;

    double mFee;
};

#endif //FACADE_TRAVELAGENCYFACADE_H
