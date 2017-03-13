#include "../../include/temperature/Temperature.h"
#include <iostream>

float Temperature::convCelciusToFahr(float degreesC)
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

float Temperature::convFahrToCelcius(float degreesF)
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

float Temperature::convCelciusToFahrAndPrint(float degreesC, int useUnitSymbols)
{
    float result = convCelciusToFahr(degreesC);
    if (useUnitSymbols == 1) {
        //Add 'F' to the output
        std::cout << result << "F";
    } else {
        std::cout << result;
    }
}

float Temperature::convFahrToCelciusAndPrint(float degreesF, int useUnitSymbols)
{
    float result = convFahrToCelcius(degreesF);
    if (useUnitSymbols == 1) {
        //Add 'C' to the output
        std::cout << result << "C";
    } else {
        std::cout << result;
    }
}


