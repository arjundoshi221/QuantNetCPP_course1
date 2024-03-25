/*
author: @arjundoshi221
date: 03/24/24
purpose: Create 2 macro functions for getting max values
version: 1.0
*/

#include "Defs.h"
#include <stdio.h>
#include "input_validation.h"

int main() 
{
    float a = 0, b = 0, c = 0;

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

    printf("Enter third number: ");
    while (!validate_numerical_input_float(&c))
    {
        printf("Invalid input. Please enter a integer numerical value only.\n");
        printf("Enter third number: ");
    }

    printf("Max of %0.4f and %0.4f is %0.4f\n", a, b, MAX2(a, b));
    printf("Max of %0.4f, %0.4f, and %0.4f is %0.4f\n", a, b, c, MAX3(a, b, c));

    return 0;
}
