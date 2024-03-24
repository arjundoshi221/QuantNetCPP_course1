/*
author: @arjundoshi221
date: 03/24/24
purpose: Print number digit by digit
version: 1.0
*/


#include <stdio.h>

void printnumber(int n) 
{
    if (n < 0) 
    {
        putchar('-'); // Print the minus sign for negative numbers
        n = -n; // Convert n to positive
        putchar('\n');
    }

    // Base case: when n is less than 10
    if (n < 10) 
    {
        putchar(n + '0'); // Convert digit to its ASCII character and print
        putchar('\n');
    }
    else 
    {
        printnumber(n / 10); // Recursive call with all but the last digit
        putchar((n % 10) + '0'); // Print the last digit
        putchar('\n');
    }
}

int main() 
{
    char buffer[100]; // Buffer to hold the input (also length of the scanning in scanf)
    int number;
    char extraChar; // To check for extra characters after the number
    int conversionSuccess;

    while (1)
    {   // Infinite loop to keep asking for input until valid input is received
        printf("Enter a number to print digit by digit: ");

        // Read input into buffer
        if (fgets(buffer, sizeof(buffer), stdin) != NULL)
        {
            // Check if there's exactly one successfully parsed item and no extra characters
            conversionSuccess = sscanf_s(buffer, "%d%c", &number, &extraChar, 100);

            // Validate input: conversionSuccess == 1 for successful double parsing,
            // and no extra non-whitespace characters are allowed (except for a newline at the end)

            if (conversionSuccess == 1 || (conversionSuccess == 2 && (extraChar == '\n' || extraChar == ' ')))
            {
                printnumber(number); // Call the print function with valid input
                break; // Exit the loop after successful input
            }
            else
            {
                // Handle invalid input
                printf("Invalid input. Please enter a integer numerical value only.\n");
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