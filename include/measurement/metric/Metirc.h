#ifndef METRIC_H
#define METRIC_H

//Convert metric to imperial.
//Converting within the metric system itself
//should be really straightforward. Converting within
//the metric system may become a feature at some point.
//Conversion functions are prefixed conv.
class Metric
{
    public:
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
