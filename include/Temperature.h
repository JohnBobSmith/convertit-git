#ifndef TEMPERATURE_H
#define TEMPERATURE_H

class Temperature
{
    public:
        //Print the output of our calculations. Optionally use unit symbols
        //IE character 'C' for Celsius as part of the output
        //1 = enabled 0 or any other junk = disabled
        void convCelsiusToFahrAndPrint(float degreesC, int useUnitSymbols = 0);
        void convFahrToCelsiusAndPrint(float degreesF, int useUnitSymbols = 0);
        void convKelvinToCelsiusAndPrint(float kelvins, int useUnitSymbols = 0);
        void convKelvinToFahrAndPrint(float kelvins, int useUnitSymbols = 0);
        void convCelsiusToKelvinAndPrint(float degreesC, int useUnitSymbols = 0);
        void convFahrToKelvinAndPrint(float degreesF, int useUnitSymbols = 0);

    private:
        float convCelsiusToFahr(float degreesC);
        float convFahrToCelsius(float degreesF);
        float convKelvinToCelsius(float kelvins);
        float convKelvinToFahr(float kelvins);
        float convCelsiusToKelvin(float degreesC);
        float convFahrToKelvin(float degreesF);
    };

#endif // TEMPERATURE_H
