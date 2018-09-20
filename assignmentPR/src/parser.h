/*
 * @file parser.h
 *
 * @author Jasque Saydyk
 *
 * @brief Provides functions to read numString[] and determine if
 *        it is formatted correctly or not
 *
 * @note Design around edge cases like "10", "0.01", ".01"
 */
#ifndef PARSER_H
#define PARSER_H

#include "string_to_int_converter.h"

// Struct declarations
/*
struct error{
    int code;
    char statement[100];
};
*/

// Function Prototypes
bool isdigit(int curr);
bool isValid(char *numString);

#endif  // PARSER_H
