#include "PepperoniPizza.h"
#include "HawaiianPizza.h"
#include "TexasPizza.h"

int main() {
    PepperoniPizza pepperoniPizza;
    pepperoniPizza.cookPizza();

    HawaiianPizza hawaiianPizza;
    hawaiianPizza.cookPizza();

    TexasPizza texasPizza;
    texasPizza.cookPizza();
}
