#include <iostream>
using namespace std;
namespace inLiters
{
    const int liter = 1;
    const int gallon = 5;
    const int bath = 200;
    const int tank= 1000;

}
struct unitsOfMeasurement
{
    int liters{};
    int gallons{};
    int baths{};
    int tanks{};
};
void litersToUnits(int liter, unitsOfMeasurement &liters)
{

    liters.tanks = liter / inLiters::tank;
    liter = liter % inLiters::tank;

    liters.baths = liter / inLiters::bath;
    liter = liter % inLiters::bath;

    liters.gallons = liter / inLiters::gallon;
    liter = liter % inLiters::gallon;

    liters.liters = liter;
}