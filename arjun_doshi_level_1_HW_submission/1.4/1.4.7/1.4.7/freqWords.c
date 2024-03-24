/*
author: @arjundoshi221
date: 03/24/24
purpose: Count number of digits (0-4) uniquely and other characters - in words if <= 3
version: 1.0
*/

#include <stdio.h>

int main() 
{
  
    int counts[5] = { 0 }; // Initialize counts of 0-4 to 0
    int others = 0; // Count of characters other than 0-4
    int c; // To store the character input

    printf("Enter alphanumeric characters. Press ^Z (EOF) to stop and see the counts of (0-4) uniquely and other characters:\n");

    // Loop until EOF is encountered
    while (1)
    {
        c = getchar();

        // Check for EOF or CTRL+D/CTRL+Z
        if (c == EOF || c == 4 || c == 26)
        {
            others++;
            break;
        }

        switch (c)
        {
        case '0':
            counts[0]++;
            break;
        case '1':
            counts[1]++;
            break;
        case '2':
            counts[2]++;
            break;
        case '3':
            counts[3]++;
            break;
        case '4':
            counts[4]++;
            break;
        default:
            others++;
            break;
        }
    }

    // Printing the frequency of numbers 0-4
    for (int i = 0; i < 5; i++) 
    {
        if (i == 3) 
        { // Special case for number 3
            if (counts[i] < 3) 
            {
                printf("Number three appears ");
                // Print the frequency of 3 in words
                switch (counts[i]) 
                {
                    case 0: 
                        printf("zero times.\n"); 
                        break;

                    case 1: 
                        printf("one time.\n"); 
                        break;

                    case 2: 
                        printf("two times.\n");
                        break;
                }
            }
            else {
                printf("The number three appears more than two times.\n");
            }
        }

        else 
        {
            printf("Number %d appears %d times.\n", i, counts[i]);
        }
    }

    printf("Other characters: %d\n", others);

    return 0;
}
