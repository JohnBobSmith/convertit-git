#include "../include/Temperature.h"
#include <iostream>

float Temperature::convCelsiusToFahr(float degreesC)
{
    //Ensure division by zero does not occur
    if (degreesC == 0) {
        return 32;
    } else {
        //Convert it!
        float fahrenheit = degreesC * 9/5 + 32;
        return fahrenheit;
    }
}

float Temperature::convFahrToCelsius(float degreesF)
{
    //Ensure division by zero does not occur
    if (degreesF == 0) {
        return -17.78;
    } else {
        //Convert it!
        float celsius = (degreesF - 32) * 5/9;
        return celsius;
    }
}

float Temperature::convKelvinToCelsius(float kelvins)
{
    float celsius = kelvins - 273.15;
    return celsius;
}

float Temperature::convKelvinToFahr(float kelvins)
{
    float fahrenheit = kelvins * 9/5 - 456.67;
    return fahrenheit;
}

float Temperature::convCelsiusToKelvin(float degreesC)
{
    float kelvins = degreesC + 273.15;
    return kelvins;
}

float Temperature::convFahrToKelvin(float degreesF)
{
    float kelvins = (degreesF + 459.67) * 5/9;
    return kelvins;
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
