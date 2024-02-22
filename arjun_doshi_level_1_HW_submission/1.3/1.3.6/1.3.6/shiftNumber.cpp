/*
author: @arjundoshi221
date: 02/22/24
purpose: Shift an integer two places to the right.
version: 1.0
*/

#include <stdio.h>

int main() {
    int num;
    printf("Please enter an integer to be shifted right by two places: ");

    // Validate user input
    while (scanf_s("%d", &num) != 1) {
        // Clear the input buffer
        while (getchar() != '\n');
        printf("Invalid input. Please enter a valid integer: ");
    }

    // Perform the right shift by two places
    int shifted = num >> 2;

    // Display the result of the shift
    printf("Result after shifting: %d\n", shifted);

    // Determine the type of shift 
    if (num >= 0) {
        if (shifted >= 0) {
            printf("An arithmetic shift was performed.\n");
        }
        else {
            // This condition should not normally be met; included for completeness
            printf("Error: Positive number shifted into negative range.\n");
        }
    }
    else { // num < 0
        if (shifted >= 0) {
            // This condition should not normally be met with signed integers; included for completeness
            printf("A logical shift was performed, which is unusual for signed integers.\n");
        }
        else {
            printf("An arithmetic shift was performed.\n");
        }
    }

    return 0;
}

