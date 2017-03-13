#include "../../../include/measurement/metric/Metirc.h"
#include <iostream>

float Metric::convHectaresToAcres(float hectares)
{
    //Do not divide by zero
    if (hectares == 0) {
        hectares = hectares + 0.1;
    }
    float acres = hectares / 0.404685642;
    return acres;
}

float Metric::convKilometersToMiles(float km)
{
    float miles = km * 0.62137;
    return miles;
}

float Metric::convMetersToFeet(float meters)
{
    //Do not divide by zero
    if (meters == 0) {
        meters = meters + 0.1;
    }
    float feet = meters / 3.2808;
    return feet;
}

float Metric::convMetersToYards(float meters)
{
    float yards = meters * 1.0936;
    return yards;
}

float Metric::convCentimetersToInches(float centimenters)
{
    //Do not divide by zero
    if (centimenters == 0) {
        centimenters = centimenters + 0.1;
    }
    float inches = centimenters / 2.54;
    return inches;
}

void Metric::convHectaresToAcresAndPrint(float hectares, int useUnitSymbols)
{
    float result = convHectaresToAcres(hectares);
    if (useUnitSymbols == 1) {
        std::cout << result << "ac";
    } else {
        std::cout << result;
    }
}

void Metric::convKilometersToMilesAndPrint(float km, int useUnitSymbols)
{
    float result = convKilometersToMiles(km);
    if (useUnitSymbols == 1) {
        std::cout << result << "mi";
    } else {
        std::cout << result;
    }
}

void Metric::convMetersToFeetAndPrint(float meters, int useUnitSymbols)
{
    float result = convMetersToFeet(meters);
    if (useUnitSymbols == 1) {
        std::cout << result << "ft";
    } else {
        std::cout << result;
    }
}

void Metric::convMetersToYardsAndPrint(float meters, int useUnitSymbols)
{
    float result = convMetersToYards(meters);
    if (useUnitSymbols == 1) {
        std::cout << result << "yd";
    } else {
        std::cout << result;
    }
}

void Metric::convCentimetersToInchesAndPrint(float centimenters, int useUnitSymbols)
{
    float result = convCentimetersToInches(centimenters);
    if (useUnitSymbols == 1) {
        std::cout << result << "in";
    } else {
        std::cout << result;
    }
}
