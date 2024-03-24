
/*
author: @arjundoshi221
date: 03/24/24
purpose: Count keyboard input types
version: 3.0
*/


#include <stdio.h>
#include <ctype.h> 

int main() {
    int characterCount = 0;
    int wordCount = 0;
    int newlineCount = 0;
    int inWord = 0;
    int c; // Use int to handle EOF and other inputs

    printf("Enter text (press CTRL+D on Unix/Linux or CTRL+Z on Windows then Enter to stop):\n");

    while (1)
    {
        c = getchar();

        // Check for EOF or CTRL+D/CTRL+Z
        if (c == EOF || c == 4 || c == 26)
        {
            break;
        }

        // Increment character count for each character read, excluding newlines
        if (c != '\n' && c != '\r')
        {
            characterCount++;
        }

        // Check for newlines
        if (c == '\n')
        {
            newlineCount++;
        }

        // If current character is whitespace (includes '\n', which we already checked for)
        if (isspace(c))
        {
            if (inWord)
            {
                // Exiting a word
                inWord = 0;
                wordCount++;
            }
        }
        else if (!inWord) // Current character is not a whitespace and we're not already in a word
        {
            inWord = 1; // Entering a word
        }
    }

    // If we end in the middle of a word, count it
    if (inWord)
    {
        wordCount++;
    }

    // Print the results
    printf("\nCharacters (excluding EOF): %d\n", characterCount);
    printf("Words: %d\n", wordCount);
    printf("Newlines: %d\n", newlineCount);

    return 0;
}
