#include "../include/Temperature.h"
#include "../include/Metric.h"
#include "../include/Imperial.h"
#include <iostream>
#include <limits>
#include <string.h>
#include <unistd.h>

void printUsageAndExit()
{
    std::cout << "ConvertIt! Program usage:\n";
    std::cout << "  [-A <int>] - Convert acres to hectares\n";
    std::cout << "  [-c <int>] - Convert centimeters to inches\n";
    std::cout << "  [-C <int>] - Convert degrees Celsius to degrees Fahrenheit\n";
    std::cout << "  [-F <int>] - Convert degrees Fahrenheit to degrees Celsius\n";
    std::cout << "  [-h]       - Show this help and exit\n";
    std::cout << "  [-H <int>] - Convert hectares to acres\n";
    std::cout << "  [-i <int>] - Convert inches to centimeters\n";
    std::cout << "  [-I <int>] - Convert feet to meters\n";
    std::cout << "  [-K <int>] - Convert kilometers to miles\n";
    std::cout << "  [-L <int>] - Convert miles to kilometers.\n";
    std::cout << "  [-M <int>] - Convert meters to feet\n";
    std::cout << "  [-m <int>] - Convert meters to yards\n";
    std::cout << "  [-u] - Display unit symbols IE a 'C' for Celsius\n";
    std::cout << "         Must be specified as first argument\n";
    std::cout << "  [-Y <int>] - Convert yards to meters\n";
    std::cout << "  [-X <int>] - Convert Celsius to Kelvin\n";
    std::cout << "  [-x <int>] - convert Fahrenheit to Kelvin\n";
    std::cout << "  [-Z <int>] - Convert Kelvin to Celsius\n";
    std::cout << "  [-z <int>] - Convert Kelvins to Fahrenheit\n";
    std::exit(0);
}

//Grab the standard input for later
//use with our second argument.
float readStandardInput()
{
    float cliInput;
    std::cin >> cliInput;
    return cliInput;
}

int main(int argc, char **argv)
{
    //Display unit symbols, like C for Celsius,
    //as part of program output.
    bool _USE_UNIT_SYMBOLS = false;

    //Our class objects
    Temperature temp;
    Metric metric;
    Imperial imp;
    //Getopt variables
    int counter;
    opterr = 0;

    while ((counter = getopt(argc, argv, "A:C:c:F:hH:i:K:L:M:m:uX:x:Y:Z:z:")) != -1)
    {
        switch (counter)
        {
        case 'A':
            imp.convAcresToHectaresAndPrint(atoi(optarg), _USE_UNIT_SYMBOLS);
            break;
        case 'C':
            temp.convCelsiusToFahrAndPrint(atoi(optarg), _USE_UNIT_SYMBOLS);
            break;
        case 'c':
            metric.convCentimetersToInchesAndPrint(atoi(optarg), _USE_UNIT_SYMBOLS);
            break;
        case 'F':
            temp.convFahrToCelsiusAndPrint(atoi(optarg), _USE_UNIT_SYMBOLS);
            break;
        case 'h':
            printUsageAndExit();
            break;
        case 'H':
            metric.convHectaresToAcresAndPrint(atoi(optarg), _USE_UNIT_SYMBOLS);
            break;
        case 'i':
            imp.convInchesToCentimetresAndPrint(atoi(optarg), _USE_UNIT_SYMBOLS);
            break;
        case 'K':
            metric.convKilometersToMilesAndPrint(atoi(optarg), _USE_UNIT_SYMBOLS);
            break;
        case 'L':
            imp.convMilesToKilometersAndPrint(atoi(optarg), _USE_UNIT_SYMBOLS);
            break;
        case 'M':
            metric.convMetersToFeetAndPrint(atoi(optarg), _USE_UNIT_SYMBOLS);
            break;
        case 'm':
            metric.convMetersToYardsAndPrint(atoi(optarg), _USE_UNIT_SYMBOLS);
            break;
        case 'u':
            _USE_UNIT_SYMBOLS = true;
            break;
        case 'Y':
            imp.convYardsToMetersAndPrint(atoi(optarg), _USE_UNIT_SYMBOLS);
            break;
        case 'X':
            temp.convCelsiusToKelvinAndPrint(atoi(optarg), _USE_UNIT_SYMBOLS);
            break;
        case 'x':
            temp.convFahrToKelvinAndPrint(atoi(optarg), _USE_UNIT_SYMBOLS);
            break;
        case 'Z':
            temp.convKelvinToCelsiusAndPrint(atoi(optarg), _USE_UNIT_SYMBOLS);
            break;
        case 'z':
            temp.convKelvinToFahrAndPrint(atoi(optarg), _USE_UNIT_SYMBOLS);
            break;
        case '?':
            std::cerr << "Unknown option character\n";
            return 1;
        default:
            std::cerr << "Error occurred, exiting.\n";
            std::exit(-3);
        }
    }
} //main
