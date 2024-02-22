/*
author: @arjundoshi221
date: 02/22/24
purpose: multiply a number by a factor 2 to the power n, using left shift operator.
version: 1.0
*/


#include <stdio.h>

int main() {
    int number, n, result;

    // Prompt for the number to multiply
    printf("Enter the number to multiply: ");
    while (scanf_s("%d", &number) != 1) {
        // Clear the input buffer
        while (getchar() != '\n');
        printf("Invalid input. Please enter a valid integer for the number: ");
    }

    // Prompt for the power of 2 to multiply by (n in 2^n)
    printf("Enter the power of 2 to multiply by (n in 2^n): ");
    while (scanf_s("%d", &n) != 1 || n < 0) {
        // Clear the input buffer
        while (getchar() != '\n');
        printf("Invalid input. Please enter a non-negative integer for the power: ");
    }

    // Calculate the multiplication by shifting
    result = number << n;

    // Print the result
    printf("%d multiplied by 2 to the power of %d is: %d\n", number, n, result);

    return 0;
}
