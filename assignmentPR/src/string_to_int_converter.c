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

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 
#include <string.h>
#include "string_to_int_converter.h"
#include "parser.h"
#include "parser.c"


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
    char *new_string;
    new_string = (char*)malloc(strLength(numString)*sizeof(char));
    char *result_string;
    result_string = (char*)malloc(strLength(numString)*sizeof(char));
    bool error = true;
    error = isValid(&numString);
    if (error == false)
    {
        return error;
    }
    else{
        if (isDigit(numString[0]) == '0' && isDigit(numString[1]) == '0')
        {
        error = removeLeadingZeros(numString);
        }
        if (isDigit(numString[0]) == '.')
        {
        error = addLeadingZero(numString, new_string);
        }
        strcpy(numString, new_string);
        if (isDigit(numString[strLength(numString) - 1]) == '0')
        {
        error = removeTrailingZeros(numString);
        }
        result_string = getCharacteristic(numString, result_string);
        if (result_string)
        {
            int result_number = atoi (&result_string);
            return error;
        }
        else
        {
            error = false;
            return error;
        }
    }
    
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
    // TODO: Check numstring for proper formatting

    // TODO: Obtain string of the mantissa

    // TODO: Convert string to int
    // TODO: Construct denominator to be an int that is a power of
    //       10 that creates a proper float representing the
    //       mantissa and the numerator and denomiator are divided

    // TODO: Store numerator and denominator and return True
}

// Maybe a general function combining characteristic() and 
// mantissa(), implementing both to convert a string into int
bool finalResult(char numString[], int * c, int *numerator, int *denominator)
{
    
    bool result1 = characteristic(numString, c);
    bool result2 = mantissa(numString, numerator, denominator);
    printf("c is %d, numerator is %d, denominator is %d\n",*c, *numerator, *denominator );
    if (result1 == true && result2 == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}
#endif  // STRING_TO_INT_CONVERTER.C
