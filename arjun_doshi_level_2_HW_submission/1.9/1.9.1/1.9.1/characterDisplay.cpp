/*
author: @arjundoshi221
date: 03/27/24
purpose: To read characters from the keyboard, printing them back to the screen once enter is hit
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Variable to hold the character input by the user.
    int c;

    // Prompt the user to enter text and inform them how to exit the program.
    printf("Enter text. Press CTRL+A to exit.\n");

    // Loop to continuously read characters from the keyboard.
    // This loop will terminate when CTRL+A (ASCII value 1) is entered.
    while ((c = getchar()) != 1)
    {
        if (c == '\n') // Check if the entered character is a newline character (Enter key pressed)
        {
            // When Enter is pressed, output the newline to start a new line
            putchar(c);
            printf("\n");
        }
        else
        {
            // For any character other than newline, output the character as it is.
            // This allows the user to see what they are typing, character by character, without automatic newline.
            putchar(c);
        }
    }

    // Once the loop exits because the user entered CTRL+A, print an ending message.
    printf("CTRL + A is a correct ending.�\n");

    return 0; // Return 0 to indicate the program ended successfully.
}
