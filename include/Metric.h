#ifndef METRIC_H
#define METRIC_H

class Metric
{
    public:
        //Print the output of our calculations. Optionally use unit symbols
        //IE character 'C' for Celsius as part of the output
        //1 = enabled 0 or any other junk = disabled
        void convHectaresToAcresAndPrint(float hectares, bool useUnitSymbols = false);
        void convKilometersToMilesAndPrint(float km, bool useUnitSymbols = false);
        void convMetersToFeetAndPrint(float meters, bool useUnitSymbols = false);
        void convMetersToYardsAndPrint(float meters, bool useUnitSymbols = false);
        void convCentimetersToInchesAndPrint(float centimenters, bool useUnitSymbols = false);

    private:
        float convHectaresToAcres(float hectares);
        float convKilometersToMiles(float km);
        float convMetersToFeet(float meters);
        float convMetersToYards(float meters);
        float convCentimetersToInches(float centimenters);
};

#endif // METRIC_H
