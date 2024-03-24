/*
author: @arjundoshi221
date: 03/24/24
purpose: Temperatures in Fahrenheit and their Celsius equivalents
version: 1.0
*/

#include <stdio.h>

int main()
{
    float fahrenheit, celsius;
    int start = 0; // Start temperature in Fahrenheit
    int end = 300; // End temperature in Fahrenheit
    int step = 20; // Step size

    // Print header
    printf("Fahrenheit    Celsius\n");
    printf("-----------   -------\n");

    fahrenheit = start;
    while (fahrenheit <= end)
    {
        // Convert temperature in Fahrenheit to temperature in Celsius.
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        printf("%10.1f %10.1f\n", fahrenheit, celsius); // Display

        // Increment to the next temperature in Fahrenheit.
        fahrenheit += step;
    }

    return 0;
}
