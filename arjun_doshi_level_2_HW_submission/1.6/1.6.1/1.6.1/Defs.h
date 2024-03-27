// Defs.h
// Check if the DEFS_H symbol has not been defined yet to prevent double inclusion
#ifndef DEFS_H
#define DEFS_H

#include <stdio.h>

//Define macros as in the question given, round to 4 decimal places

#define PRINT1(a) printf(#a " = %0.4f\n", a)
#define PRINT2(a, b) printf(#a " = %0.4f, " #b " = %0.4f\n", a, b)

#endif // DEFS_H