#ifndef IMPERIAL_H
#define IMPERIAL_H

class Imperial
{
    public:
        //Print the output of our calculations. Optionally use unit symbols
        //IE character 'C' for Celsius as part of the output
        //1 = enabled 0 or any other junk = disabled
        void convAcresToHectaresAndPrint(float acres, int useUnitSymbols = 0);
        void convMilesToKilometersAndPrint(float miles, int useUnitSymbols = 0);
        void convYardsToMetersAndPrint(float yards, int useUnitSymbols = 0);
        void convFeetToMetersAndPrint(float feet, int useUnitSymbols = 0);
        void convInchesToCentimetresAndPrint(float inches, int useUnitSymbols = 0);

    private:
        float convAcresToHectares(float acres);
        float convMilesToKilometers(float miles);
        float convYardsToMeters(float yards);
        float convFeetToMeters(float feet);
        float convInchesToCentimetres(float inches);
};

#endif // IMPERIAL_H
