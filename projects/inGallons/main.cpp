#include <iostream>
#include "header.h"
using namespace std;
int main()
{
    int liter{};
    unitsOfMeasurement liters;
    cout << "Podaj litry do zamiany \n";
    cin >> liter;
    litersToUnits(liter, liters);
    cout << "\ncysterny:  " << liters.tanks
         << "\nwanny:     " << liters.baths
         << "\ngalony:    " << liters.gallons
         << "\nlitry:     " << liters.liters;
    return 0;
}