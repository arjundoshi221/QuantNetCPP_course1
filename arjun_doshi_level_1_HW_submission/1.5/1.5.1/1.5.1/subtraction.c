/*
author: @arjundoshi221
date: 03/24/24
purpose: Subtraction and print
version: 1.0
*/

#include <stdio.h>

// Function declaration
float minus(float a, float b);

int main() 
{
    float num1, num2, result;
    int readItems;

    // Program header
    printf("Subtraction Program. Enter 2 numbers to start.\n");

    // Asking for input and validating for num1
    printf("Enter first number: ");
    readItems = scanf_s("%f", &num1);
    
    while (readItems != 1) 
    {
        while (getchar() != '\n'); // Clearing input buffer
        printf("Invalid input. Please enter a numerical value: ");
        readItems = scanf_s("%f", &num1);
    }

    // Asking for input and validating for num2
    printf("Enter second number: ");
    readItems = scanf_s("%f", &num2);
    
    while (readItems != 1) 
    {
        while (getchar() != '\n'); // Clearing input buffer
        printf("Invalid input. Please enter a numerical value: ");
        readItems = scanf_s("%f", &num2);
    }

    // Calling the minus function
    result = minus(num1, num2);

    // Printing the result
    printf("The difference is: %.2f\n", result);

    return 0;
}

// Function definition
float minus(float a, float b) 
{
    return a - b;
}
