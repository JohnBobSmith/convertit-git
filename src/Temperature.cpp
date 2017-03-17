#include "../include/Temperature.h"
#include "../include/Conversions.h"
#include <iostream>

float Temperature::convCelsiusToFahr(float degreesC)
{
    return degreesC * fiveandnine::nineoverfive + temp::celsius::celisus;
}

float Temperature::convFahrToCelsius(float degreesF)
{
    return (degreesF - temp::celsius::celisus) * fiveandnine::fiveovernine;
}

float Temperature::convKelvinToCelsius(float kelvins)
{
    return kelvins - temp::celsius::kCelsius;
}

float Temperature::convKelvinToFahr(float kelvins)
{
    return kelvins * fiveandnine::nineoverfive - temp::fahr::kFahrenheit;
}

float Temperature::convCelsiusToKelvin(float degreesC)
{
    return degreesC + temp::celsius::kCelsius;
}

float Temperature::convFahrToKelvin(float degreesF)
{
    return (degreesF + temp::fahr::kFahrenheit) * fiveandnine::fiveovernine;
}

void Temperature::convCelsiusToFahrAndPrint(float degreesC, int useUnitSymbols)
{
    float result = convCelsiusToFahr(degreesC);
    if (useUnitSymbols == 1) {
        //Add 'F' to the output
        std::cout << result << "F";
    } else {
        std::cout << result;
    }
}

void Temperature::convFahrToCelsiusAndPrint(float degreesF, int useUnitSymbols)
{
    float result = convFahrToCelsius(degreesF);
    if (useUnitSymbols == 1) {
        //Add 'C' to the output
        std::cout << result << "C";
    } else {
        std::cout << result;
    }
}

void Temperature::convKelvinToFahrAndPrint(float kelvins, int useUnitSymbols)
{
    float result = convKelvinToFahr(kelvins);
    if (useUnitSymbols == 1) {
        std::cout << result << "F";
    } else {
        std::cout << result;
    }
}

void Temperature::convKelvinToCelsiusAndPrint(float kelvins, int useUnitSymbols)
{
    float result = convKelvinToCelsius(kelvins);
    if (useUnitSymbols == 1) {
        std::cout << result << "C";
    } else {
        std::cout << result;
    }
}

void Temperature::convCelsiusToKelvinAndPrint(float degreesC, int useUnitSymbols)
{
    float result = convCelsiusToKelvin(degreesC);
    if (useUnitSymbols == 1) {
        std::cout << result << "K";
    } else {
        std::cout << result;
    }
}

void Temperature::convFahrToKelvinAndPrint(float degreesF, int useUnitSymbols)
{
    float result = convFahrToKelvin(degreesF);
    if (useUnitSymbols) {
        std::cout << result << "K";
    } else {
        std::cout << result;
    }
}
