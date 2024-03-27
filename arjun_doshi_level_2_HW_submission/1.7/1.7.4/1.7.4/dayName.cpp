/*
author: @arjundoshi221
date: 03/27/24
purpose: Print the day of the week based on integer input
version: 1.0
*/

#include <stdio.h>
// Include the custom header file for input validation functions.
#include "input_validation.h"

// Function declaration for DayName.
void DayName(int dayNumber);

int main()
{
    int dayNumber;

    // Display the program's purpose to the user.
    printf("| Print the day of the week based on integer input | \n");
    printf("Enter a day number (1-7): ");

    // Loop to validate user input.
    while (1)
    {
        // Call to custom function to validate integer input.
        if (!validate_numerical_input_int(&dayNumber))
        {
            // User input was not an integer.
            printf("Invalid input. Please enter a numerical value only.\n");
            printf("Enter day number: ");
        }
        else if (dayNumber < 1 || dayNumber > 7)
        {
            // User input was not in the range 1-7.
            printf("Invalid day number. Please enter a number between 1 and 7.\n");
            printf("Enter day number: ");
        }
        else
        {
            // Valid input received, exit the loop.
            break;
        }
    }

    // Call the function to print the day name with the valid input.
    DayName(dayNumber);

    return 0;
}

// Function to print the name of the day corresponding to the given day number.
void DayName(int dayNumber)
{
    // Array of string literals containing names of days, indexed 0-6.
    const char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    // Print the day name by indexing into the array with dayNumber - 1.
    printf("Day %d is a %s.\n", dayNumber, days[dayNumber - 1]);
}
