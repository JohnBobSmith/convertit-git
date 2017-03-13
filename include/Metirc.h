#ifndef METRIC_H
#define METRIC_H

class Metric
{
    public:
        //Print the output of our calculations. Optionally use unit symbols
        //IE character 'C' for Celsius as part of the output
        //1 = enabled 0 or any other junk = disabled
        void convHectaresToAcresAndPrint(float hectares, int useUnitSymbols = 0);
        void convKilometersToMilesAndPrint(float km, int useUnitSymbols = 0);
        void convMetersToFeetAndPrint(float meters, int useUnitSymbols = 0);
        void convMetersToYardsAndPrint(float meters, int useUnitSymbols = 0);
        void convCentimetersToInchesAndPrint(float centimenters, int useUnitSymbols = 0);

    private:
        float convHectaresToAcres(float hectares);
        float convKilometersToMiles(float km);
        float convMetersToFeet(float meters);
        float convMetersToYards(float meters);
        float convCentimetersToInches(float centimenters);
};

#endif // METRIC_H
