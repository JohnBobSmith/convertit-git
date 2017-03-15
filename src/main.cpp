#include "../include/Temperature.h"
#include "../include/Metirc.h"
#include "../include/Imperial.h"
#include <iostream>
#include <cstdlib>
#include <string.h>

void printUsageAndExit()
{
    std::cout << "ConvertIt! Program usage:\n";
    std::cout << "  [-A <int>] - Convert acres to hectares\n";
    std::cout << "  [-c <int>] - Convert centimeters to inches\n";
    std::cout << "  [-C <int>] - Convert degrees Celsius to degrees Fahrenheit\n";
    std::cout << "  [-CK <int>] -Convert degrees Celsius to Kelvin\n";
    std::cout << "  [-F <int>] - Convert degrees Fahrenheit to degrees Celsius\n";
    std::cout << "  [-FK <int>] - Convert degrees Fahrenheit to Kelvin\n";
    std::cout << "  [-h]       - Show this help and exit\n";
    std::cout << "  [-H <int>] - Convert hectares to acres\n";
    std::cout << "  [-i <int>] - Convert inches to centimeters\n";
    std::cout << "  [-I <int>] - Convert feet to meters\n";
    std::cout << "  [-K <int>] - Convert kilometers to miles\n";
    std::cout << "  [-L <int>] - Convert miles to kilometers.\n";
    std::cout << "  [-M <int>] - Convert meters to feet\n";
    std::cout << "  [-m <int>] - Convert meters to yards\n";
    std::cout << "  [-U] - Display unit symbols IE a 'C' for Celsius\n";
    std::cout << "         Must be specified as third (3rd) argument,\n";
    std::cout << "         unless reading from standard input\n";
    std::cout << "  [-u] - Same as above, but suppress info message.\n";
    std::cout << "  [-Y <int>] - Convert yards to meters\n";
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

int main(int argc, char *argv[])
{
    //Display unit symbols, like C for Celsius,
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
    //When reading from standard input,
    //-U or -u becomes the second argument
    if (argv[2] != nullptr) {
        if (strcmp(argv[2], "-U") == 0) {
            std::cout << "Info: Now displaying unit symbols\n";
            _USE_UNIT_SYMBOLS = 1;
        }
        if (strcmp(argv[2], "-u") == 0) {
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
            temp.convCelsiusToFahrAndPrint(atoi(argv[2]), _USE_UNIT_SYMBOLS);
        } else {
            temp.convCelsiusToFahrAndPrint(readStandardInput(), _USE_UNIT_SYMBOLS);
        }
    } else if (strcmp(argv[1], "-c") == 0) {
        if (argv[2] != nullptr) {
            metric.convCentimetersToInchesAndPrint(atoi(argv[2]), _USE_UNIT_SYMBOLS);
        } else {
            metric.convCentimetersToInchesAndPrint(readStandardInput(), _USE_UNIT_SYMBOLS);
        }
    } else if (strcmp(argv[1], "-CK") == 0) {
        if (argv[2] != nullptr) {
            temp.convCelsiusToKelvinAndPrint(atoi(argv[2]), _USE_UNIT_SYMBOLS);
        } else {
            temp.convCelsiusToKelvinAndPrint(atoi(argv[2]), _USE_UNIT_SYMBOLS);
        }
    } else if (strcmp(argv[1], "-F") == 0) {
        if (argv[2] != nullptr) {
            temp.convFahrToCelsiusAndPrint(atoi(argv[2]), _USE_UNIT_SYMBOLS);
        } else {
            temp.convFahrToCelsiusAndPrint(readStandardInput(), _USE_UNIT_SYMBOLS);
        }
    } else if (strcmp(argv[1], "-FK") == 0) {
        if (argv[2] != nullptr) {
            temp.convFahrToKelvinAndPrint(atoi(argv[2]), _USE_UNIT_SYMBOLS);
        } else {
            temp.convFahrToKelvinAndPrint(atoi(argv[2]), _USE_UNIT_SYMBOLS);
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
    } else if (strcmp(argv[1], "-Z") == 0) {
        //-Z and -z used for kelvin because -K is already in use for Kilometers
        if (argv[2] != nullptr) {
            temp.convKelvinToCelsiusAndPrint(atoi(argv[2]), _USE_UNIT_SYMBOLS);
        } else {
            temp.convKelvinToCelsiusAndPrint(readStandardInput(), _USE_UNIT_SYMBOLS);
        }
    } else if (strcmp(argv[1], "-z") == 0) {
        if (argv[2] != nullptr) {
            temp.convKelvinToFahrAndPrint(atoi(argv[2]), _USE_UNIT_SYMBOLS);
        } else {
            temp.convKelvinToFahrAndPrint(atoi(argv[2]), _USE_UNIT_SYMBOLS);
        }
    } else {
        std::cerr << "Unknown CLI arguments...\n";
        std::cerr << "Try running with -h for help. Exiting...\n";
        return -1;
    }
}
