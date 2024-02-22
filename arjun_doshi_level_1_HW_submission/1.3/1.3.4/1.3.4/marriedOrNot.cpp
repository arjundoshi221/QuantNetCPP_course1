/*
author: @arjundoshi221
date: 02/22/24
purpose: demonstrate the use of 0 as FALSE and non-zero as TRUE, in conjunction with the ?: (ternary) operator
version: 1.0
*/

#include <stdio.h>

int main() 
{
    int married = -1; // Use -1 as an initial value to indicate uninitialized status
    int result;

    while (1) 
    { // Infinite loop to keep asking for input until valid input is received
        printf("Please input 0 if you're not married, or any non-zero number if you are married: ");
        result = scanf_s("%d", &married);

        if (result == 1) 
        {   // Check if scanf successfully read an integer
            // Input is successful, break out of the loop
            break;
        }
        else 
        {
            // If the input was not an integer, clear the input buffer
            while (getchar() != '\n'); // Discard non-integer input
            printf("Input Error: Please enter a numerical value.\n");
        }
    }

    // Using the ?: operator to print the marital status based on the input
    printf("Marital status: %s\n", married ? "Married" : "Not Married");

    return 0;
}

