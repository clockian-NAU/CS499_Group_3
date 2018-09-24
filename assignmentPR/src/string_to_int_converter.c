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

/*
 * @brief convert a number string to real integer
 *
 * @param str[] A string only combining with numbers 
 *
 * @return int The integer after converting will be returned back
 */


int convertStrToNum (char str[])
{
    int result = 0;
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        result = result * 10 + (str[i] - '0');
    }
    return result;
}



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
    int length = strlen(numString);
    char *resultString;
    resultString = (char*)malloc(length*sizeof(char));
    bool flag1 = true;
    bool flag2 = true;
    int countFloat = 0;
    for (int i = 0; i < length; ++i)
    {
        if (numString[i] == '.')
        {
            flag1 = false;
            countFloat = i;
        }
        if (numString[i] == '-')
        {
            flag2 = false;
        }
    }
    if(flag2 == false)
    {
        if (flag1 == false)
        {
            for (int i = 1; i < countFloat; ++i)
            {
                resultString[i-1] = numString[i];
            }
        }
        else
        {
            for (int i = 1; i < length; ++i)
            {
                resultString[i-1] = numString[i];
            }
        }
    }
    else
    {
        if (flag1 == false)
        {
            for (int i = 0; i < countFloat; ++i)
            {
                resultString[i] = numString[i];
            }
        }
        else
        {
            strcpy(resultString, numString);
        }
    }
    
    
    // TODO: Convert string to int
    int result;
    if(flag2 == false)
    {
        result = 0 - convertStrToNum(resultString);
    }
    else
    {
        result = convertStrToNum(resultString);
    }
    // TODO: Store in c pointer and return True
    *c = result;
    return true;
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
    int power = 1;
    double result = 0;
    int length = strlen(numString);
    char *resultString;
    resultString = (char*)malloc(length*sizeof(char));
    bool flag = true;
    int countFloat = 0;
    for (int i = 0; i < length; ++i)
    {
        if (numString[i] == '.')
        {
            flag = false;
            countFloat = i;
        }
    }
    
    if (flag == false)
    {
        for (int i = countFloat + 1; i < length; ++i)
        {
            resultString[i-(countFloat+1)] = numString[i];
            power *= 10;
        }
    }
    else
    {
        return false;
    }
    // TODO: Construct denominator to be an int that is a power of
    //       10 that creates a proper float representing the
    //       mantissa and the numerator and denomiator are divided

    // TODO: Store numerator and denominator and return True
    int template = convertStrToNum(resultString);
    result = (double)template / power;
    
    *numerator = template;
    *denominator = power;
    return true;
}

// Maybe a general function combining characteristic() and 
// mantissa(), implementing both to convert a string into int
bool finalResult(char numString[], int * c, int *numerator, int *denominator)
{
    
    bool result1 = characteristic(numString, c);
    bool result2 = mantissa(numString, numerator, denominator);
    printf("c is %d, numerator is %d, denominator is %d\n",*c, *numerator, *denominator );
    return true;
}
#endif  // STRING_TO_INT_CONVERTER.C
