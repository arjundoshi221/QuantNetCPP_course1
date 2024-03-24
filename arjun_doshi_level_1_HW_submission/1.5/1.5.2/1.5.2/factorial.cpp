
/*
author: @arjundoshi221
date: 03/24/24
purpose: Calculate factorial of a number usinf recursion
version: 3.0
*/

#include <stdio.h>

long long factorial(int n);

int main()
{
    char buffer[100]; // Buffer to hold the input
    int n;
    int conversionSuccess;

    printf("Enter a number to calculate its factorial: ");
    while (1) // Infinite loop to keep asking for input until a valid one is given
    {
        if (!fgets(buffer, sizeof(buffer), stdin))
        {
            // Handle unexpected EOF or read error
            printf("Error reading input. Please try again.\nEnter number: ");
            continue;
        }

        // Try to convert the input to an integer and check if the entire input was consumed
        conversionSuccess = sscanf_s(buffer, "%d", &n);
        if (conversionSuccess != 1)
        {
            // The input wasn't an integer, prompt again
            printf("This is not the desired input.\nPlease enter a valid integer number: ");
            continue;
        }
        else if (n < 0)
        {
            // Negative input isn't allowed
            printf("Factorial of a negative number doesn't exist.\nPlease enter a valid integer number: ");
            continue;
        }
        else
        {
            // Valid input
            printf("%d! = %lld\n", n, factorial(n));
            break; // Exit the loop on successful input
        }
    }

    return 0;
}

long long factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}