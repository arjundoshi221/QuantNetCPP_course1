/*
author: @arjundoshi221
date: 03/24/24
purpose: Temperatures in Celsius and their  Fahrenheit equivalents
version: 1.0
*/

#include <stdio.h>

int main() {
    int start = 0;    // Start temperature in Celsius
    int end = 19;     // End temperature in Celsius
    int step = 1;     // Step size
    float celsius, fahrenheit;

    // Print header
    printf("Celsius  Fahrenheit\n");
    printf("-------  ----------\n");

    for (celsius = start; celsius <= end; celsius += step) 
    {
        // Convert C to F
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        printf("%7.1f %11.1f\n", celsius, fahrenheit); // Display
    }

    return 0;
}

