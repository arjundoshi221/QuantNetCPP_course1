#include "input_validation.h"

int validate_numerical_input_int(int* number)
{
    char buffer[100];
    char extraChar;
    int conversionSuccess;

    // Read input into buffer
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        // Trim leading whitespace
        char* start = buffer;
        while (isspace((unsigned char)*start)) start++;

        if (strlen(start) == 0) {  // Only whitespace was entered
            return 0; // Indicate failure
        }

        // Check for successful conversion and no extra characters (except possibly a newline)
        conversionSuccess = sscanf_s(start, "%d%c", number, &extraChar, 100);
        if (conversionSuccess == 1 || (conversionSuccess == 2 && (extraChar == '\n' || extraChar == ' '))) {
            return 1; // Success
        }
    }

    // Handle error in reading input or invalid input
    while (getchar() != '\n'); // Clearing the input buffer in case it's full
    return 0; // Indicate failure
}

int validate_numerical_input_float(float* number)
{
    char buffer[100];
    char extraChar;
    int conversionSuccess;

    // Read input into buffer
    if (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {

        // Trim leading whitespace
        char* start = buffer;
        while (isspace((unsigned char)*start)) start++;

        if (strlen(start) == 0)
        {  // Only whitespace was entered
            return 0; // Indicate failure
        }

        // Check for successful conversion and no extra characters (except possibly a newline)
        conversionSuccess = sscanf_s(start, "%f%c", number, &extraChar, 100);
        if (conversionSuccess == 1 || (conversionSuccess == 2 && (extraChar == '\n' || extraChar == ' ')))
        {
            return 1; // Success
        }
    }

    // Handle error in reading input or invalid input
    while (getchar() != '\n'); // Clearing the input buffer in case it's full
    return 0; // Indicate failure
}
