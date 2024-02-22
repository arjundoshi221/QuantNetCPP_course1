/*
author: @arjundoshi221
date: 02/22/24
purpose: calculate surface area of the triangle
version: 1.0
*/

#include <stdio.h>

int main() 
{
    double base, height, area;

    // Prompt the user for input
    printf("Please enter the base and height of the triangle like b,h: ");

    // Read the input from the user. If the input does not match the expected format, prompt again.
    while (scanf_s("%lf,%lf", &base, &height) != 2 || base <= 0 || height <= 0) 
    {
        // Clear the input buffer in case of an invalid input
        while (getchar() != '\n');
        printf("Invalid input. Please make sure to enter positive numbers for base and height like b,h:");
    }

    // Calculate the surface area of the triangle
    area = 0.5 * base * height;

    // Output the result
    printf("The surface of the triangle with base %.2f and height %.2f is %.2f.\n", base, height, area);

    return 0;
}
