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

// Function Prototypes
bool isDigit(char curr);
bool isValid(char *numString);
int strLength(char *str);
bool removeLeadingZeros(char *numString);
bool removeTrailingZeros(char *numString);
bool addLeadingZero(char *numString, char *new_string);
char *getCharacteristic(char *numString, char *newString);
char *getMantissa(char *numString, char *newString);

#endif  // PARSER_H
