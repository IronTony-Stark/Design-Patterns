#include <iostream>
#include "Car.h"
#include "PaintingDecorator.h"
#include "TyreDecorator.h"
#include "NitroDecorator.h"

using namespace std;

void carInfo(ACar* car) {
    cout << "Speed: " << car->speed() << endl;
    cout << "Coolness: " << car->coolness() << "\n\n";
}

int main() {
    Car* car = new Car("Porsche");
    cout << "Basic Car\n";
    carInfo(car);

    ACar* painted = new PaintingDecorator(*car);
    cout << "Painted Car\n";
    carInfo(painted);

    ACar* paintedWithTyres = new TyreDecorator(*painted);
    cout << "Painted Car with better tyres\n";
    carInfo(paintedWithTyres);

    ACar* paintedWithTyresAndNitro = new NitroDecorator(*paintedWithTyres);
    cout << "Painted Car with better tyres and nitro\n";
    carInfo(paintedWithTyresAndNitro);

    delete paintedWithTyresAndNitro;
    delete paintedWithTyres;
    delete painted;
    delete car;
}
