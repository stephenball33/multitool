// This program will open multiple other programs based on the user selection, and is intended to 
//  allow for the learning of how to handle a large project
// These programmes will be:
// 1. Simple calculator
// 2. Encryptor
// 3. Text Analyser
// 4. Matrix Calculator
// 5. Unit Convertor
// 6. Noughts and Crosses

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "calculator.h"
#include "noughtsAndCrosses.h"

int main(int argc, char* argv[])
{
    int selection;

    printf("What tool would you like to use?\n\n");
    printf("1. Calculator\n");
    printf("2. Encryptor\n");
    printf("3. Text Analyser\n");
    printf("4. Matrix Calculator\n");
    printf("5. Unit Convertor\n");
    printf("6. Noughts and Crosses\n\n");

    scanf_s("%i", &selection);

    switch (selection)
    {
    case 1: calculator();
        break;
    case 2: printf("Coming soon\n\n");
        break;
    case 3: printf("Coming soon\n\n");
        break;
    case 4: printf("Coming soon\n\n");
        break;
    case 5: printf("Coming soon\n\n");
        break;
    case 6: noughtsAndCrosses();
        break;
    default: goto fail;
    }

    printf("Operation completed");
    goto exit;
fail:
    printf("Fail.\n");
exit:
    return 0;
}