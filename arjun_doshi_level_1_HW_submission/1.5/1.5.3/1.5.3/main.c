
/*
author: @arjundoshi221
date: 03/24/24
purpose: Multiply input by 2 using print.c 
version: 8.0
*/


#include <stdio.h>
#include "print.h"

int main() 
{
    char buffer[100]; // Buffer to hold the input (also length of the scanning in scanf)
    double i;
    char extraChar; // To check for extra characters after the number
    int conversionSuccess;

    while (1) 
    {   // Infinite loop to keep asking for input until valid input is received
        printf("Enter a number to multiply by 2: ");

        // Read input into buffer
        if (fgets(buffer, sizeof(buffer), stdin) != NULL) 
        {
            // Check if there's exactly one successfully parsed item and no extra characters
            conversionSuccess = sscanf_s(buffer, "%lf%c", &i, &extraChar, 100);

            // Validate input: conversionSuccess == 1 for successful double parsing,
            // and no extra non-whitespace characters are allowed (except for a newline at the end)
            
            if (conversionSuccess == 1 || (conversionSuccess == 2 && (extraChar == '\n' || extraChar == ' '))) 
            {
                print(i); // Call the print function with valid input
                break; // Exit the loop after successful input
            }
            else 
            {
                // Handle invalid input
                printf("Invalid input. Please enter a numerical value only.\n");
                // Loop will continue to prompt for input
            }
        }
        else 
        {
            // Handle error in reading input
            printf("Error reading input. Please try again.\n");
            
            // Clearing the input buffer in case it's full
            while (getchar() != '\n');
        }
    }

    return 0;
}
