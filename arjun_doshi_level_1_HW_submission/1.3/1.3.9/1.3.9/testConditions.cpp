/*
author: @arjundoshi221
date: 02/22/24
purpose: Predict what will be printed on screen based on conditions given
version: 1.0
*/

#include <stdio.h>

int main() {
    int x = 1; 
    int y = 1; 
    int z = 1; 

    x += y += x; 
    // y += x (y = y + x)
    // y = 1 + 1 = 2
    // x += y (x = x + y)
    // x = 1 + 2 = 3

    printf("%d\n\n", (x < y) ? y : x);   // [3] x is not less than y, so x is printed: x = 3

    printf("%d\n", (x < y) ? x++ : y++); // [2] x is still not less than y, so y = 2 is printed and then incremented: 2 + 1
    
    // y = 2 + 1 = 3 (post increment)

    printf("%d\n", x);     // [3] x = 3

    printf("%d\n", y);     // [3] y = 3 

    return 0;
}

