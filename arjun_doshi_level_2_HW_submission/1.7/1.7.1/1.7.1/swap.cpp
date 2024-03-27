/*
author: @arjundoshi221
date: 03/27/24
purpose: Exchange the value of two variables using pointers
version: 1.0
*/

#include <stdio.h>            // Include standard input-output library for basic IO operations
#include "input_validation.h" // Include the custom header for input validation functions

// Declare the Swap function which takes two pointers to float as parameters
void Swap(float *a, float *b);

// Main function execution starts here
int main()
{
    // Print introductory text to the console
    printf("| Function to swap the values of two numbers | \n");

    // Declare two float variables to store user inputs
    float i, j;

    // Ask the user to input the first number
    printf("Enter first number: ");

    // Use a loop to ensure the input is a valid float, re-prompt if invalid
    while (!validate_numerical_input_float(&i))
    {
        // Notify the user of invalid input and ask for the first number again
        printf("Invalid input. Please enter a numerical value only.\n");
        printf("Enter first number: ");
    }

    // Prompt for the second number
    printf("Enter second number: ");
    // Similar validation loop for the second input
    while (!validate_numerical_input_float(&j))
    {
        // Notify of invalid input and re-prompt for the second number
        printf("Invalid input. Please enter a numerical value only.\n");
        printf("Enter second number: ");
    }

    // Display the values of i and j before the swap operation
    printf("Before swap: i = %0.4f, j = %0.4f\n", i, j);

    // Call the Swap function with addresses of i and j to swap their values
    Swap(&i, &j);

    // Display the values of i and j after the swap operation
    printf("After swap: i = %0.4f, j = %0.4f\n", i, j);

    // Indicate normal program termination
    return 0;
}

// Implementation of the Swap function
void Swap(float *a, float *b)
{
    // Temporarily store the value pointed by a
    float temp = *a;
    // Copy the value from location pointed by b to location pointed by a
    *a = *b;
    // Copy the value stored in temp (original value of a) to location pointed by b
    *b = temp;
}