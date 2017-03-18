#include "../include/Conversions.h"
#include "../include/Imperial.h"
#include <iostream>

float Imperial::convAcresToHectares(float acres)
{
    float hectares = acres * 0.404685642;
    return hectares;
}

float Imperial::convMilesToKilometers(float miles)
{
    //Do not divide by 0
    if (miles == 0) {
        miles = miles + 0.1;
    }
    float km = miles / 1.609344;
    return km;
}

float Imperial::convYardsToMeters(float yards)
{
    float meters = yards * 0.9144;
    return meters;
}

float Imperial::convFeetToMeters(float feet)
{
    float meters = feet * 0.3048;
    return meters;
}

float Imperial::convInchesToCentimetres(float inches)
{
    float cm = inches * 2.54;
    return cm;
}

void Imperial::convAcresToHectaresAndPrint(float acres, bool useUnitSymbols)
{
    float result = convAcresToHectares(acres);
    if (useUnitSymbols == 1) {
        std::cout << result << "ha";
    } else {
        std::cout << result;
    }
}

void Imperial::convMilesToKilometersAndPrint(float miles, bool useUnitSymbols)
{
    float result = convMilesToKilometers(miles);
    if (useUnitSymbols == 1) {
        std::cout << result << "km";
    } else {
        std::cout << result;
    }
}

void Imperial::convYardsToMetersAndPrint(float yards, bool useUnitSymbols)
{
    float result = convYardsToMeters(yards);
    if (useUnitSymbols == 1) {
        std::cout << result << "m";
    } else {
        std::cout << result;
    }
}

void Imperial::convFeetToMetersAndPrint(float feet, bool useUnitSymbols)
{
    float result = convFeetToMeters(feet);
    if (useUnitSymbols == 1) {
        std::cout << result << "m";
    } else {
        std::cout << result;
    }
}

void Imperial::convInchesToCentimetresAndPrint(float inches, bool useUnitSymbols)
{
    float result = convInchesToCentimetres(inches);
    if (useUnitSymbols == 1) {
        std::cout << result << "cm";
    } else {
        std::cout << result;
    }
}

