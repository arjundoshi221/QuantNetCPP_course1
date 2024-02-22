/*
author: @arjundoshi221
date: 02/22/24
purpose: print output of the expressions given based on operator precedence
version: 1.0
*/

// PEMDAS - Paranthesis, Exponents, Multiplication/Division/Modulus, Addition/Subtraction

#include <stdio.h>

int main() {
    int x;

    // Multiplication (*) has higher precedence than addition (+) and subtraction (-).
    // So, it's evaluated as: -3 + (4*5) - 6 = -3 + 20 - 6 = 11
    x = -3 + 4 * 5 - 6;
    printf("x=%d\n", x);  // Output: x=11

    // The modulus (%) operator has the same precedence as multiplication (*), and it's evaluated before addition and subtraction.
    // So, it's evaluated as: 3 + (4%5) - 6 = 3 + 4 - 6 = 1
    // Note: 4%5 is 4 because 4 divided by 5 has a remainder of 4.
    x = 3 + 4 % 5 - 6;
    printf("x=%d\n", x);  // Output: x=1

    // Multiplication (*), modulus (%), and division (/) have the same precedence and are evaluated from left to right.
    // The expression is evaluated as: (-3*4)%(-6/5) = -12 % -1 = 0 (since -12 divided by -1 has no remainder).
    x = -3 * 4 % -6 / 5;
    printf("x=%d\n", x);  // Output: x=0

    // The parentheses take highest precedence
    // Then the modulus operation is performed, followed by the division.
    // It's evaluated as: ((7+6)%5)/2 = (13%5)/2 = 3/2 = 1 
    x = (7 + 6) % 5 / 2;
    printf("x=%d\n", x);  // Output: x=1

    return 0;
}
