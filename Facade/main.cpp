#include <iostream>
#include "Hotel.h"
#include "CityTourAgency.h"
#include "ScienceMuseum.h"
#include "HistoryMuseum.h"
#include "TravelAgencyFacade.h"

using namespace std;

const int peopleNum = 2;
const int days = 14;

int main() {
    Hotel hotel{};

    CityTourAgency cityTourAgency;

    ScienceMuseum scienceMuseum;
    HistoryMuseum historyMuseum;

    TravelAgencyFacade travelAgencyFacade(hotel, cityTourAgency, scienceMuseum, historyMuseum, 0.1);

    cout << "Before --------------------------------\n";
    cout << "Ok, it's time to arrange our holiday!\n";
    cout << "Booking room...\n";
    hotel.bookRoom(peopleNum, days);
    cout << "Ordering everyday breakfast...\n";
    hotel.orderEverydayBreakfast(peopleNum, days);

    cout << "Finding and buying city tour...\n";
    cityTourAgency.buyTour();

    cout << "Finding and buying history museum tickets...\n";
    scienceMuseum.buyTickets(peopleNum);
    cout << "Finding and buying science museum tickets...\n";
    historyMuseum.buyTickets(peopleNum);

    cout << "Darling, I don't wanna go on holiday anymore...\n";

    cout << "After --------------------------------\n";
    cout << "Ok, it's time to arrange our holiday!\n";
    cout << "I've found an awesome travel agency. They will organize our holiday for us!\n";
    travelAgencyFacade.organizeAwesomeHoliday(peopleNum, days);
    cout << "Done! I'm so looking forward to our holiday!\n";
}
