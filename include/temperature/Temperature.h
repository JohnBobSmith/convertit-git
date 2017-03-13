#ifndef TEMPERATURE_H
#define TEMPERATURE_H

//Convert temperatures.
//Conversion functions are prefixed conv,
//for easy identification. Fahrenheit is shortened
//to fahr, because I dont feel like writing
//Fahrenheit every time.
class Temperature
{
    public:
        //Print the output of our calculations. Optionally use unit symbols
        //IE character 'C' for Celsius as part of the output
        //1 = enabled 0 or any other junk = disabled
        float convCelciusToFahrAndPrint(float degreesC, int useUnitSymbols = 0);
        float convFahrToCelciusAndPrint(float degreesF, int useUnitSymbols = 0);

    private:
        float convCelciusToFahr(float degreesC);
        float convFahrToCelcius(float degreesF);
    };

#endif // TEMPERATURE_H
