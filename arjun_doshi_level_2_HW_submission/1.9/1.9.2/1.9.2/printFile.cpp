/*
author: @arjundoshi221
date: 03/27/24
purpose: To read characters from the keyboard and write them to a user-specified file once enter is hit
version: 1.0
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int c;              // Variable to hold character input by user
    char fileName[225]; // Array to hold the file name, limited to 99 characters + null terminator
    FILE *fptr = NULL;  // File pointer initialized to NULL

    // Prompt user for the name of the file
    printf("Enter the name of the file to write to: eg file.txt (Add the extension .txt): ");

    // Read the file name from standard input and check for read error
    if (fgets(fileName, sizeof(fileName), stdin) == NULL)
    {
        printf("Error reading file name.\n");
        exit(1); // Exit if there's an error reading the file name
    }

    // Remove the newline character that fgets includes from the user's input
    if (fileName[0] != '\0' && fileName[strlen(fileName) - 1] == '\n')
    {
        fileName[strlen(fileName) - 1] = '\0';
    }

    // Try to open the file for writing and check for errors
    int err = fopen_s(&fptr, fileName, "w");
    if (err != 0 || fptr == NULL)
    {
        printf("Error opening file! Exiting program.\n");
        exit(1); // Exit if file cannot be opened
    }

    // Prompt the user to start entering text
    printf("Enter text. Press CTRL+A to exit.\n");

    // Loop to read characters from the keyboard until CTRL+A (ASCII code 1) is pressed
    while ((c = getchar()) != 1)
    {
        fputc(c, fptr); // Write the character to the file
    }

    // Inform the user that the program has ended correctly
    printf("CTRL + A is a correct ending.\n");
    fclose(fptr); // Close the file to ensure data is saved

    return 0; // Return 0 to indicate the program ended successfully
}
