#include "../include/Metric.h"
#include "../include/Conversions.h"
#include <iostream>

float Metric::convHectaresToAcres(float hectares)
{
    return hectares / metrictoimp::acre;
}

float Metric::convKilometersToMiles(float km)
{
    return km * metrictoimp::mile;
}

float Metric::convMetersToFeet(float meters)
{
    return meters / metrictoimp::feet;
}

float Metric::convMetersToYards(float meters)
{
    return  meters * metrictoimp::yard;
}

float Metric::convCentimetersToInches(float centimenters)
{
    return centimenters / metrictoimp::inch;
}

void Metric::convHectaresToAcresAndPrint(float hectares, bool useUnitSymbols)
{
    float result = convHectaresToAcres(hectares);
    if (useUnitSymbols) {
        std::cout << result << "ac";
    } else {
        std::cout << result;
    }
}

void Metric::convKilometersToMilesAndPrint(float km, bool useUnitSymbols)
{
    float result = convKilometersToMiles(km);
    if (useUnitSymbols) {
        std::cout << result << "mi";
    } else {
        std::cout << result;
    }
}

void Metric::convMetersToFeetAndPrint(float meters, bool useUnitSymbols)
{
    float result = convMetersToFeet(meters);
    if (useUnitSymbols) {
        std::cout << result << "ft";
    } else {
        std::cout << result;
    }
}

void Metric::convMetersToYardsAndPrint(float meters, bool useUnitSymbols)
{
    float result = convMetersToYards(meters);
    if (useUnitSymbols) {
        std::cout << result << "yd";
    } else {
        std::cout << result;
    }
}

void Metric::convCentimetersToInchesAndPrint(float centimenters, bool useUnitSymbols)
{
    float result = convCentimetersToInches(centimenters);
    if (useUnitSymbols) {
        std::cout << result << "in";
    } else {
        std::cout << result;
    }
}
