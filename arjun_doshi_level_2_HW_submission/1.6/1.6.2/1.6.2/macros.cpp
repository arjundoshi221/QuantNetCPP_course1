
/*
author: @arjundoshi221
date: 03/24/24
purpose: Create 2 macro functions for getting max values
version: 1.0
*/

#include "Defs.h" // Include a header file named Defs.h which contains macro definitions
#include <stdio.h> // Include the standard input/output library for basic I/O operations
#include "input_validation.h" // Include a custom header file for input validation functions

int main() // Main function where the execution of the program begins
{
    float a = 0, b = 0, c = 0; // Declare three floating-point variables initialized to 0

    printf("Enter first number: "); // Prompt the user to enter the first number
    while (!validate_numerical_input_float(&a)) // Validate the input. Loop until a valid float is entered
    {
        printf("Invalid input. Please enter a numerical value only.\n"); // Error message for invalid input
        printf("Enter first number: "); // Prompt to re-enter the first number
    }

    printf("Enter second number: "); // Prompt the user to enter the second number
    while (!validate_numerical_input_float(&b)) // Validate the second input. Loop until a valid float is entered
    {
        printf("Invalid input. Please enter a numerical value only.\n"); // Error message for invalid input
        printf("Enter second number: "); // Prompt to re-enter the second number
    }

    printf("Enter third number: "); // Prompt the user to enter the third number
    while (!validate_numerical_input_float(&c)) // Validate the third input. Loop until a valid float is entered
    {
        printf("Invalid input. Please enter a numerical value only.\n"); // Error message for invalid input
        printf("Enter third number: "); // Prompt to re-enter the third number
    }

    // Print the maximum of the first two numbers using the MAX2 macro
    printf("Max of %0.4f and %0.4f is %0.4f\n", a, b, MAX2(a, b));
    // Print the maximum of all three numbers using the MAX3 macro
    printf("Max of %0.4f, %0.4f, and %0.4f is %0.4f\n", a, b, c, MAX3(a, b, c));

    return 0; // Return 0 to indicate successful execution
}
