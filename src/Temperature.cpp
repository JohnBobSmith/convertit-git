#include "../include/Conversions.h"
#include "../include/Temperature.h"
#include <iostream>

float Temperature::convCelsiusToFahr(float degreesC)
{
    return degreesC * fiveandnine::nineoverfive + temp::celsius;
}

float Temperature::convFahrToCelsius(float degreesF)
{
    return (degreesF - temp::celsius) * fiveandnine::fiveovernine;
}

float Temperature::convKelvinToCelsius(float kelvins)
{
    return kelvins - temp::kCelsius;
}

float Temperature::convKelvinToFahr(float kelvins)
{
    return kelvins * fiveandnine::nineoverfive - temp::kFahrenheit;
}

float Temperature::convCelsiusToKelvin(float degreesC)
{
    return degreesC + temp::kCelsius;
}

float Temperature::convFahrToKelvin(float degreesF)
{
    return (degreesF + temp::kFahrenheit) * fiveandnine::fiveovernine;
}

void Temperature::convCelsiusToFahrAndPrint(float degreesC, bool useUnitSymbols)
{
    float result = convCelsiusToFahr(degreesC);
    if (useUnitSymbols == 1) {
        //Add 'F' to the output
        std::cout << result << "F";
    } else {
        std::cout << result;
    }
}

void Temperature::convFahrToCelsiusAndPrint(float degreesF, bool useUnitSymbols)
{
    float result = convFahrToCelsius(degreesF);
    if (useUnitSymbols == 1) {
        //Add 'C' to the output
        std::cout << result << "C";
    } else {
        std::cout << result;
    }
}

void Temperature::convKelvinToFahrAndPrint(float kelvins, bool useUnitSymbols)
{
    float result = convKelvinToFahr(kelvins);
    if (useUnitSymbols == 1) {
        std::cout << result << "F";
    } else {
        std::cout << result;
    }
}

void Temperature::convKelvinToCelsiusAndPrint(float kelvins, bool useUnitSymbols)
{
    float result = convKelvinToCelsius(kelvins);
    if (useUnitSymbols == 1) {
        std::cout << result << "C";
    } else {
        std::cout << result;
    }
}

void Temperature::convCelsiusToKelvinAndPrint(float degreesC, bool useUnitSymbols)
{
    float result = convCelsiusToKelvin(degreesC);
    if (useUnitSymbols == 1) {
        std::cout << result << "K";
    } else {
        std::cout << result;
    }
}

void Temperature::convFahrToKelvinAndPrint(float degreesF, bool useUnitSymbols)
{
    float result = convFahrToKelvin(degreesF);
    if (useUnitSymbols) {
        std::cout << result << "K";
    } else {
        std::cout << result;
    }
}
