/*
author: @arjundoshi221
date: 03/24/24
purpose: Create 2 macro functions for printing values
version: 1.0
*/

// Macro.c
#include "Defs.h"
#include "input_validation.h" // my own custom functions for input validation

int main() 
{
    float a, b;

    printf("Enter first number: ");
    while (!validate_numerical_input_float(&a)) 
    {
        printf("Invalid input. Please enter a integer numerical value only.\n");
        printf("Enter first number: ");
    }

    printf("Enter second number: ");
    while (!validate_numerical_input_float(&b)) 
    {
        printf("Invalid input. Please enter a integer numerical value only.\n");
        printf("Enter second number: ");
    }


    PRINT1(a);  // Prints the value of a

    PRINT2(a, b);  // Prints the values of a and b

    return 0;
}
