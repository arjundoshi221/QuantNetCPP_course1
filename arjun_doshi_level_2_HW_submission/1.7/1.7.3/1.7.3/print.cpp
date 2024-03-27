#include <stdio.h>

#define PRD(a) printf("%d", (a)) // Macro to print a decimal number
#define NL printf("\n");         // Macro to print a newline

// Initialize array with 5 elements
int a[] = {0, 1, 2, 3, 4};

int main()
{
    int i;  // Variable for loop iteration
    int *p; // Pointer variable for array traversal

    // Loop 1: Iterates over array using index and prints elements in order
    for (i = 0; i <= 4; i++)
        PRD(a[i]); // Expected output: 01234
    NL;

    // Loop 2: Iterates over array using pointer and prints elements in order
    for (p = &a[0]; p <= &a[4]; p++)
        PRD(*p); // Expected output: 01234
    NL;
    NL;

    // Loop 3: Iterates over array using pointer arithmetic in the index style
    for (p = &a[0], i = 0; i <= 4; i++)
        PRD(p[i]); // Expected output: 01234
    NL;

    // Loop 4: Iterates and prints array elements by incrementing pointer and index separately
    for (p = a, i = 0; p + i <= a + 4; i++)
        PRD(*(p + i)); // Expected output: 01234
    NL;
    NL;

    // Loop 5: Prints array elements in reverse order using pointer decrement
    for (p = a + 4; p >= a; p--)
        PRD(*p); // Expected output: 43210
    NL;

    // Loop 6: Uses negative indexing relative to the end of array to print elements in reverse order
    for (p = a + 4, i = 0; i <= 4; i++)
        PRD(p[-i]); // Expected output: 43210
    NL;

    // Loop 7: Calculates the index difference for each element relative to the array start and prints in reverse order
    for (p = a + 4; p >= a; p--)
        PRD(a[p - a]); // Expected output: 43210
    NL;

    return 0;
}
