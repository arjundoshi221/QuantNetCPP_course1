// Defs.h
// Check if the DEFS_H symbol has not been defined yet to prevent double inclusion

#ifndef DEFS_H
#define DEFS_H

//Define macros as in the question given

// Macro to find the maximum of two values
#define MAX2(x, y) ((x) > (y) ? (x) : (y))

// Macro to find the maximum of three values, using MAX2
#define MAX3(x, y, z) (MAX2(MAX2((x), (y)), (z)))

#endif // DEFS_H

