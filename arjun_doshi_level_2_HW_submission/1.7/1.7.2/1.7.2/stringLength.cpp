/*
author: @arjundoshi221
date: 03/27/24
purpose: Calculate length of a string
version: 1.0
*/

#include <stdio.h>
#define MAXLINE 30 // String length declaration

// Function declaration to determine the length of a string
int Length(char *str);

int main()
{
    char string[MAXLINE + 1]; // Line of maximum 30 chars + \0
    int c;                    // The input character
    int i = 0;                // The counter

    // Print intro text
    printf("Type up to %d chars. Exit with CTRL+D on Unix/Linux or CTRL+Z on Windows then Enter to stop.\n", MAXLINE);

    // Get the characters

    while (1)
    {
        c = getchar();

        // Check for EOF or CTRL+D/CTRL+Z
        if (c == EOF || c == 4 || c == 26 || i >= MAXLINE)
        {
            break;
        }

        // Append entered character to string
        string[i++] = (char)c;
    }

    string[i] = '\0'; // String must be closed with \0

    printf("String length is %d\n", Length(string));
    return 0;
}

// Function to determine the length of a string
int Length(char *str)
{
    int length = 0; // Initialize length counter
    // Increment length for each character until the null terminator is reached
    while (str[length] != '\0')
    {
        length++; // increment count of length
    }
    return length; // Return the computed length
}
