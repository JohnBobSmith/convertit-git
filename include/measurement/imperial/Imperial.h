#ifndef IMPERIAL_H
#define IMPERIAL_H

class Imperial
{
    public:
        float convAcresToHectaresAndPrint(float acres, int useUnitSymbols = 0);
        float convMilesToKilometersAndPrint(float miles, int useUnitSymbols = 0);
        float convYardsToMetersAndPrint(float yards, int useUnitSymbols = 0);
        float convFeetToMetersAndPrint(float feet, int useUnitSymbols = 0);
        float convInchesToCentimetresAndPrint(float inches, int useUnitSymbols = 0);

    private:
        float convAcresToHectares(float acres);
        float convMilesToKilometers(float miles);
        float convYardsToMeters(float yards);
        float convFeetToMeters(float feet);
        float convInchesToCentimetres(float inches);
};

#endif // IMPERIAL_H
