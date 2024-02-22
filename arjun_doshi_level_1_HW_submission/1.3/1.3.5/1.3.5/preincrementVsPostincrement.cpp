/*
author: @arjundoshi221
date: 02/22/24
purpose: Demonstrate pre increment vs post increment operators
version: 1.0
*/

#include <stdio.h>

int main() {
    int startValue;
    printf("Please enter a starting value (integer) greater than 0: ");

    while (scanf_s("%d", &startValue) != 1 || startValue <= 0) {
        // Clear the input buffer
        while (getchar() != '\n');
        printf("Invalid input. Please enter a positive integer greater than 0: ");
    }

    printf("\nStarting value of i: %d\n\n", startValue);

    int i = startValue, j = startValue;
    // Simple demonstration of decrement on a single value
    i = startValue;
    printf("Using i-- decrements i from %d to %d after the operation.\n", startValue, --i);
    // Reset i to startValue for clarity in demonstration
    i = startValue;
    printf("Using --i decrements i from %d to %d before the operation.\n\n", startValue, --i);

    int counter_i = 1;
    int counter_j = 1;
    printf("\nLoop 1: Demonstrating --i (Pre-decrement)\n");
    i = startValue;
    while (i > 0) {
        // In this loop, i is decremented before its value is printed.
        int minus_minus_i = --i;
        printf("Iteration %d: i = %d | i is decremented to %d, then printed.\n",  counter_i, minus_minus_i, minus_minus_i);
        counter_i++;
    }

    printf("\nLoop 2: Demonstrating i-- (Post-decrement)\n");
    j = startValue; // Reset j to the initial value for the second loop
    while (j > 0) {
        // In this loop, j's current value is printed before it is decremented.
        int j_minus_minus = j--;
        printf("Iteration %d: i = %d | i is printed as %d, then decremented.\n",  counter_j, j_minus_minus, j_minus_minus);
        counter_j++;
    }

    return 0;
}

