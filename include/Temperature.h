#ifndef TEMPERATURE_H
#define TEMPERATURE_H

class Temperature
{
    public:
        //Print the output of our calculations. Optionally use unit symbols
        //IE character 'C' for Celsius as part of the output
        //1 = enabled 0 or any other junk = disabled
        void convCelsiusToFahrAndPrint(float degreesC, bool useUnitSymbols = false);
        void convFahrToCelsiusAndPrint(float degreesF, bool useUnitSymbols = false);
        void convKelvinToCelsiusAndPrint(float kelvins, bool useUnitSymbols = false);
        void convKelvinToFahrAndPrint(float kelvins, bool useUnitSymbols = false);
        void convCelsiusToKelvinAndPrint(float degreesC, bool useUnitSymbols = false);
        void convFahrToKelvinAndPrint(float degreesF, bool useUnitSymbols = false);

    private:
        float convCelsiusToFahr(float degreesC);
        float convFahrToCelsius(float degreesF);
        float convKelvinToCelsius(float kelvins);
        float convKelvinToFahr(float kelvins);
        float convCelsiusToKelvin(float degreesC);
        float convFahrToKelvin(float degreesF);
    };

#endif // TEMPERATURE_H
