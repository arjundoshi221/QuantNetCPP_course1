/*
author: @arjundoshi221
date: 03/24/24
purpose: Create methods to validate inputs from users
version: 1.0
*/

#include "input_validation.h" // Include the header file for this implementation

// Function to validate and convert user input into an integer value
int validate_numerical_input_int(int *number)
{
    char buffer[100];      // Buffer to store the raw input string
    char extraChar;        // Variable to check for any extra characters after the number
    int conversionSuccess; // To store the result of the sscanf function

    // Attempt to read a line of input from the user into the buffer
    if (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        // Pointer to iterate over the buffer, initially pointing to the start
        char *start = buffer;
        // Trim leading whitespace by advancing the pointer past any whitespace characters
        while (isspace((unsigned char)*start))
            start++;

        // Check if the trimmed input is empty (i.e., only whitespace was entered)
        if (strlen(start) == 0)
        {
            return 0; // Return 0 to indicate failure in validation
        }

        // Attempt to convert the string to an integer, also checking for extra characters
        conversionSuccess = sscanf_s(start, "%d%c", number, &extraChar, 100);
        // Check if conversion was successful and no invalid extra characters were found
        if (conversionSuccess == 1 || (conversionSuccess == 2 && (extraChar == '\n' || extraChar == ' ')))
        {
            return 1; // Return 1 to indicate successful conversion and validation
        }
    }

    // If input is too long or conversion fails, clear the input buffer to prevent issues on subsequent reads
    while (getchar() != '\n')
        ;
    return 0; // Return 0 to indicate failure in validation
}

// Function to validate and convert user input into a floating-point value
int validate_numerical_input_float(float *number)
{
    char buffer[100];      // Buffer to store the raw input string
    char extraChar;        // Variable to check for any extra characters after the number
    int conversionSuccess; // To store the result of the sscanf function

    // Attempt to read a line of input from the user into the buffer
    if (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        // Pointer to iterate over the buffer, initially pointing to the start
        char *start = buffer;
        // Trim leading whitespace by advancing the pointer past any whitespace characters
        while (isspace((unsigned char)*start))
            start++;

        // Check if the trimmed input is empty (i.e., only whitespace was entered)
        if (strlen(start) == 0)
        {
            return 0; // Return 0 to indicate failure in validation
        }

        // Attempt to convert the string to a float, also checking for extra characters
        conversionSuccess = sscanf_s(start, "%f%c", number, &extraChar, 100);
        // Check if conversion was successful and no invalid extra characters were found
        if (conversionSuccess == 1 || (conversionSuccess == 2 && (extraChar == '\n' || extraChar == ' ')))
        {
            return 1; // Return 1 to indicate successful conversion and validation
        }
    }

    // If input is too long or conversion fails, clear the input buffer to prevent issues on subsequent reads
    while (getchar() != '\n')
        ;
    return 0; // Return 0 to indicate failure in validation
}
