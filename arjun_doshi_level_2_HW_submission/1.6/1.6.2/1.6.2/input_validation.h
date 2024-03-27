// Check if INPUT_VALIDATION_H is not defined to prevent the header file from being
// included multiple times in the same file, which can lead to redefinition errors.
#ifndef INPUT_VALIDATION_H
#define INPUT_VALIDATION_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function prototype for predfined functions in input_validation.c
int validate_numerical_input_float(float* number);
int validate_numerical_input_int(int* number);

#endif // INPUT_VALIDATION_H
