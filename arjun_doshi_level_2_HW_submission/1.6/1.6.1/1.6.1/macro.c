/*
author: @arjundoshi221
date: 03/24/24
purpose: Create 2 macro functions for printing values
version: 1.0
*/

// Macro.c

// Include the definition header file for macro and constant definitions.
#include "Defs.h"
// Include the custom header file for input validation functions.
#include "input_validation.h"

// Main function:
int main()
{
    // Declare float variables to store user inputs.
    float a, b;

    // Prompt the user to enter the first number.
    printf("Enter first number: ");

    // Validate the first number input. Keep prompting until a valid float is received.
    while (!validate_numerical_input_float(&a))
    {
        // Inform the user of invalid input and prompt again for the first number.
        printf("Invalid input. Please enter a numerical value only.\n");
        printf("Enter first number: ");
    }

    // Prompt the user to enter the second number.
    printf("Enter second number: ");
    // Validate the second number input. Keep prompting until a valid float is received.
    while (!validate_numerical_input_float(&b))
    {
        // Inform the user of invalid input and prompt again for the second number.
        printf("Invalid input. Please enter a numerical value only.\n");
        printf("Enter second number: ");
    }

    // Print the value of variable 'a' using the PRINT1 macro defined in "Defs.h".
    PRINT1(a);

    // Print the values of variables 'a' and 'b' using the PRINT2 macro defined in "Defs.h".
    PRINT2(a, b);

    // End of main function, return 0 to indicate successful execution.
    return 0;
}
