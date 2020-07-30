#include <iostream>
#include "CastleBuilder.h"
#include "PalaceBuilder.h"
#include "Director.h"

using namespace std;

int main() {
    CastleBuilder castleBuilder;
    PalaceBuilder palaceBuilder;

    cout << "Starting to build a castle...\n";
    castleBuilder.buildWalls();
    castleBuilder.buildWindows();
    castleBuilder.buildDoors();
    House& castle = castleBuilder.getAndReset();

    cout << "\n";

    cout << "Starting to build a palace...\n";
    palaceBuilder.buildWalls();
    palaceBuilder.buildWindows();
    palaceBuilder.buildDoors();
    House& palace = palaceBuilder.getAndReset();

    cout << "\n";

    cout << "Director now specifies the way of building...\n";
    Director director(&castleBuilder);
    director.buildDoorsFirst();
    House& castleByDirector = castleBuilder.getAndReset();
}
