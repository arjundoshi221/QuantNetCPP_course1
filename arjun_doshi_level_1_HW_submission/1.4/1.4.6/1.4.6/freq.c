/*
author: @arjundoshi221
date: 03/24/24
purpose: Count number of digits (0-4) uniquely and other characters
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Counters for each number and other characters
    int counts[5] = { 0 }; // Initialize counts of 0-4 to 0
    int others = 0;      // Count of characters other than 0-4
    int c;               // To store the character input

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

    // Printing the counts
    printf("\nCounts:\n");
    printf("0: %d\n", counts[0]);
    printf("1: %d\n", counts[1]);
    printf("2: %d\n", counts[2]);
    printf("3: %d\n", counts[3]);
    printf("4: %d\n", counts[4]);
    printf("Other characters: %d\n", others);

    return 0;
}
