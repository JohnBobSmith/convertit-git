#ifndef TEMPERATURE_H
#define TEMPERATURE_H

class Temperature
{
    public:
        //Print the output of our calculations. Optionally use unit symbols
        //IE character 'C' for Celsius as part of the output
        //1 = enabled 0 or any other junk = disabled
        void convCelciusToFahrAndPrint(float degreesC, int useUnitSymbols = 0);
        void convFahrToCelciusAndPrint(float degreesF, int useUnitSymbols = 0);

    private:
        float convCelciusToFahr(float degreesC);
        float convFahrToCelcius(float degreesF);
    };

#endif // TEMPERATURE_H
