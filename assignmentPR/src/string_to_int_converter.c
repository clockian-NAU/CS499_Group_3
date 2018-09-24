/*
 * @file string_to_int_converter.c
 *
 * @author Jasque Saydyk
 *
 * @brief Converts a null terminated string containing a floating
 *        point number into integers representing the
 *        characteristic, numbers before the ".", and the
 *        mantissa, numbers after the "."
 *
 *        The mantissa will be divided into two separate numbers,
 *        the numerator and the denominator, which are used to
 *        construct the number as a float
 *
 * @note Design around edge cases like "10", "0.01", ".01"
 */

#ifndef STRING_TO_INT_CONVERTER_C
#define STRING_TO_INT_CONVERTER_C

#include <stdlib.h>
#include <stdio.h>
#include "parser.h"
#include "string_to_int_converter.h"

/*
 * @brief Finds, creates, and stores the characteristic
 *
 * @param numString[] Null terminated string containing a floating
 *        point number
 *
 * @param c Stores the characteristic, pointer to in declared on
 *        the stack
 *
 * @return Bool indicating success or failure
 */
bool characteristic(char numString[], int *c){
    // TODO: Check numstring for proper formatting

    // TODO: Obtain string of the characteristic

    // TODO: Convert string to int

    // TODO: Store in c pointer and return True

    return false;
}

/*
 * @brief Finds, creates, and stores the mantissa
 *
 * @param numString[] Null terminated string containing a floating
 *        point number
 *
 * @param numerator Stores the numerator, pointer to int declared
 *        on the stack
 *
 * @param denominator Stores the denominator, pointer to int
 *        declared on the stack
 *
 * @return Bool indicating success or failure
 */
bool mantissa(char numString[], int *numerator, int *denominator){

    removeTrailingSpaces(numString);
    removeLeadingSpaces(numString);

    removeTrailingZeros(numString);
    removeLeadingZeros(numString);

    if( isValid(numString) == false){
        return false;
    }

    // Variable declarations
    int length = strLength(numString);
    char newString[length];

    strCpy(newString, numString);

    // Get the digits to the right of the decimal point
    char mantissaRAW[length];
    strCpy(mantissaRAW, getMantissa(numString, newString));

    // Determine how many figures are to the right of the decimal point
    length = strLength(mantissaRAW);
    removeLeadingZeros(mantissaRAW);
    // Remove leading zeros from the 'mantissa'
    int sanitizedMantissa = atoi(mantissaRAW);
    // Minimum denominator is 10
    int realDenom = 10;

    // Calculate the denominator by repeatedly multiplying by 10
    while(length > 1){
        length = length - 1;
        realDenom = realDenom*10;
    }

    // Set the return values
    *numerator = sanitizedMantissa;
    *denominator = realDenom;
    return true;
}

// Maybe a general function combining characteristic() and
// mantissa(), implementing both to convert a string into int

#endif  // STRING_TO_INT_CONVERTER.C
