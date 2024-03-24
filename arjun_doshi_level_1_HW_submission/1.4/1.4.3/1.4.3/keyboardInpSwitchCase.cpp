/*
author: @arjundoshi221
date: 03/24/24
purpose: Count keyboard input types using switch case
version: 6.0
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    int characterCount = 0;
    int wordCount = 0;
    int newlineCount = 0;
    int inWord = 0; // 0 = false, 1 = true
    int c;

    printf("Enter text (press CTRL+D on Unix/Linux or CTRL+Z on Windows then Enter to stop):\n");

    while (1) 
    {
        c = getchar();

        switch (c) 
        {
            case EOF:
            case 4:  // CTRL+D
            case 26: // CTRL+Z
                goto endOfInput;
            
            case '\n':
                newlineCount++;
                switch (inWord)    
                {
                    case 1:
                       inWord = 0;
                       wordCount++;
                       break;
                }
            break;

            case ' ':
            case '\t':
            case '\r':
                switch (inWord) 
                {
                    case 1:
                    inWord = 0;
                    wordCount++;
                    break;
                }

            characterCount++;
            break;

        default:
            switch (inWord) 
            {
                case 0:
                inWord = 1;
                break;
            }
            characterCount++;
        }
    }

endOfInput:
    switch (inWord) 
    {
        case 1:
        wordCount++;
        break;
    }

    printf("\nCharacters (excluding EOF): %d\n", characterCount);
    printf("Words: %d\n", wordCount);
    printf("Newlines: %d\n", newlineCount);

    return 0;
}

