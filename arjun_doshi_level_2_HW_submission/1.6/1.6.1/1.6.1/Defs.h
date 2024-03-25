// Defs.h
#ifndef DEFS_H
#define DEFS_H

#include <stdio.h>

#define PRINT1(a) printf(#a " = %0.4f\n", a)
#define PRINT2(a, b) printf(#a " = %0.4f, " #b " = %0.4f\n", a, b)

#endif // MACRO_H