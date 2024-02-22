/*
author: @arjundoshi221
date: 02/22/24
purpose: Predict what will be printed on screen based on operations
version: 1.0
*/

#include <stdio.h>

int main()
{
    int x = 2;
    int y;
    int z;

    // x = x * (3 + 2)
    // x = 2 * 5 = 10
    x *= 3 + 2;
    printf("x=%d\n", x); // x=10

    // x *= (y = z = 4)
    // x = x * 4
    // z is assigned 4, then y is assigned the value of z, which is also 4
    // x = 10 * 4 = 40
    x *= y = z = 4;
    printf("x=%d\n", x); // x=40

    // x = (y == z) checks if y is equal to z
    // y and z both equal 4, the condition (y == z) is true = 1 in C
    // x = 1
    x = y == z;
    printf("x=%d\n", x); // x=1

    return 0;
}
