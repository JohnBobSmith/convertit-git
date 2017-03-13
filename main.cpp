#include "include/temperature/Temperature.h"
#include "include/measurement/metric/Metirc.h"
#include "include/measurement/imperial/Imperial.h"
#include <iostream>
#include <cstdlib>
#include <string.h>

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
    std::cout << "  [-U] - Display unit symbols IE a 'C' for Celsius\n";
    std::cout << "         Must be specified as third (3rd) argument.\n";
    std::cout << "  [-u] - Same as above, but suppress info message.\n";
    std::cout << "  [-Y <int>] - Convert yards to meters\n";
    std::exit(0);
}

//Read our values for second argument from
//standard input, as we are expecting to have
//that data piped into us.
float readStandardInput()
{
    float cliInput;
    std::cin >> cliInput;
    return cliInput;
}

int main(int argc, char *argv[])
{
    //Display unit symbols, like C for celsius,
    //as part of program output.
    int _USE_UNIT_SYMBOLS = 0;

    //Our class objects
    Temperature temp;
    Metric metric;
    Imperial imp;

    //Process command line arguments
    //No arguments
    if (argc < 2) {
        std::cout << "Warn: Program must be run with one or more arguments\n";
        printUsageAndExit();
    }

    //Checking for unit symbols must be done first, to ensure
    //they are included in any future output.
    if (argv[3] != nullptr) {
        if (strcmp(argv[3], "-U") == 0) {
            std::cout << "Info: Now displaying unit symbols\n";
            _USE_UNIT_SYMBOLS = 1;
        }
        if (strcmp(argv[3], "-u") == 0) {
            _USE_UNIT_SYMBOLS = 1;
        }
    }

    //Begin our parsing of options, in alphabetical order.
    //"-A" is our argument.
    if (strcmp(argv[1], "-A") == 0) {
        //If we have a second argument,
        if (argv[2] != nullptr) {
            //use it.
            imp.convAcresToHectaresAndPrint(atoi(argv[2]), _USE_UNIT_SYMBOLS);
        } else {
            //Otherwise, read from standing input (std::cin)
            imp.convAcresToHectaresAndPrint(readStandardInput(), _USE_UNIT_SYMBOLS);
        }
    } else if (strcmp(argv[1], "-C") == 0) {
        if (argv[2] != nullptr) {
            temp.convCelciusToFahrAndPrint(atoi(argv[2]), _USE_UNIT_SYMBOLS);
        } else {
            temp.convCelciusToFahrAndPrint(readStandardInput(), _USE_UNIT_SYMBOLS);
        }
    } else if (strcmp(argv[1], "-c") == 0) {
        if (argv[2] != nullptr) {
            metric.convCentimetersToInchesAndPrint(atoi(argv[2]), _USE_UNIT_SYMBOLS);
        } else {
            metric.convCentimetersToInchesAndPrint(readStandardInput(), _USE_UNIT_SYMBOLS);
        }
    } else if (strcmp(argv[1], "-F") == 0) {
        if (argv[2] != nullptr) {
            temp.convFahrToCelciusAndPrint(atoi(argv[2]), _USE_UNIT_SYMBOLS);
        } else {
            temp.convFahrToCelciusAndPrint(readStandardInput(), _USE_UNIT_SYMBOLS);
        }
    } else if (strcmp(argv[1], "-h") == 0) {
        //Little h is for helpfile.
        printUsageAndExit();
    } else if (strcmp(argv[1], "-H") == 0) {
        if (argv[2] != nullptr) {
            metric.convHectaresToAcresAndPrint(atoi(argv[2]), _USE_UNIT_SYMBOLS);
        } else {
            metric.convHectaresToAcresAndPrint(readStandardInput(), _USE_UNIT_SYMBOLS);
        }
    }  else if (strcmp(argv[1], "-i") == 0) {
        if (argv[2] != nullptr) {
            imp.convInchesToCentimetresAndPrint(atoi(argv[2]), _USE_UNIT_SYMBOLS);
        } else {
            imp.convInchesToCentimetresAndPrint(readStandardInput(), _USE_UNIT_SYMBOLS);
        }
    } else if (strcmp(argv[1], "-K") == 0) {
        if (argv[2] != nullptr) {
            metric.convKilometersToMilesAndPrint(atoi(argv[2]), _USE_UNIT_SYMBOLS);
        } else {
            metric.convKilometersToMilesAndPrint(readStandardInput(), _USE_UNIT_SYMBOLS);
        }
    } else if (strcmp(argv[1], "-L") == 0) {
        if (argv[2] != nullptr) {
            imp.convMilesToKilometersAndPrint(atoi(argv[2]), _USE_UNIT_SYMBOLS);
        } else {
            imp.convMilesToKilometersAndPrint(readStandardInput(), _USE_UNIT_SYMBOLS);
        }
    } else if (strcmp(argv[1], "-M") == 0 ){
        if (argv[2] != nullptr) {
            metric.convMetersToFeetAndPrint(atoi(argv[2]), _USE_UNIT_SYMBOLS);
        } else {
            metric.convMetersToFeetAndPrint(readStandardInput(), _USE_UNIT_SYMBOLS);
        }
    } else if (strcmp(argv[1], "-m") == 0 ){
        if (argv[2] != nullptr) {
            metric.convMetersToYardsAndPrint(atoi(argv[2]), _USE_UNIT_SYMBOLS);
        } else {
            metric.convMetersToYardsAndPrint(readStandardInput(), _USE_UNIT_SYMBOLS);
        }
    } else if (strcmp(argv[1], "-Y") == 0) {
        if (argv[2] != nullptr) {
            imp.convYardsToMetersAndPrint(atoi(argv[2]), _USE_UNIT_SYMBOLS);
        } else {
            imp.convYardsToMetersAndPrint(readStandardInput(), _USE_UNIT_SYMBOLS);
        }
    } else {
        std::cerr << "Unknown CLI arguments... Exiting.\n";
        return -1;
    }
}
