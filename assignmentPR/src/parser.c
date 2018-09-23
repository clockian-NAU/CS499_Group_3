/*
 * @file parser.c
 *
 * @author Jasque Saydyk
 *
 * @brief Provides functions to read numString[] and determine if
 *        it is formatted correctly or not
 *
 * @note Design around edge cases like "10", "0.01", ".01"
 */
#ifndef PARSER_C
#define PARSER_C

#include <stdlib.h>
#include <stdio.h>
#include "parser.h"
#include <string.h>

/*
 * @brief Determines if char is a integer
 *
 * @param curr Is a single char
 *
 * @return Bool indicating success or failure
 */
bool isDigit(char curr){
    if (curr >= '0' && curr <= '9') return true;
    return false;
}

/*
 * @brief Determines if inputted string contains only numbers and a single "."
 *
 * @param numString[] Null terminated string containing a floating
 *        point number
 *
 * @return Bool indicating success or failure
 */
bool isValid(char *numString){
    if(numString == NULL){
        return false;
    }

    int index = 0;
    int decimal_occured = 0;

    if(numString[0] == '-'){
        index = 1;
    }

    for(int i = index; numString[i] != '\0'; i++) {
        if(!isDigit(numString[i]) && numString[i] != '.'){
            return false;
        }
        else if (numString[i] == '.'){
            if (decimal_occured == 1){
                return false;
            } else {
                decimal_occured = 1;
            }
        }
    }
    return true;
}

/*
 * @brief Determines the length of a given string
 *
 * @param *str Null terminated string to be measured
 *
 * @return The number of char's in the string, not
 *         including the terminating null. 0 if null or
 *         first char is null
 */
int strLength(char *str){
    int strLen = 0;

    if(str == NULL){
        return 0;
    }

    while( *str != '\0'){
        strLen++;
        str++;
    }

    return strLen;
}

/*
 * @brief Removes any leading zeros from the given string
 *
 * @param *numString The str representing the floating point num
 *
 * @return Bool stating whether leading zeros were removed or not
 */
bool removeLeadingZeros(char *numString){
    // Determine the # of 0's
    char * numStrIter = numString;
    int numZeros = 0;

    if(numString == NULL){
        return false;
    }

    while(*numStrIter == '0'){
        numZeros++;
        numStrIter++;
    }

    // Move chars down str for the # of zeros
    char *numStrBase = numString;
    numStrIter = numString;

    numStrIter += numZeros;

    if(numZeros != 0){
        while(*numStrIter != '\0'){
            *numStrBase = *numStrIter;
            numStrBase++;
            numStrIter++;
        }

        *numStrBase = '\0';

        return true;
    } else {
        return false;
    }
}

/*
 * @brief Removes any trailing zeros from the given string
 *
 * @param *numString The str representing the floating point num
 *
 * @return Bool stating whether leading zeros were removed or not
 */
bool removeTrailingZeros(char *numString){
    if(numString == NULL){
        return false;
    }

    int strLen = strLength(numString);
    int numZeros = 0;

    for(int i = strLen - 1; numString[i] == '0'; i--){
        numZeros++;
        numString[i] = '\0';
    }

    if(numZeros > 0){
        return true;
    } else {
        return false;
    }
    return true;
}

/*
 * @brief Function to add a leading 0 if there is no number in
 *        front of ".", i.e. ".01"
 *
 * @param numString[] Null terminated string containing a floating
 *        point number, newString[] is the updated string with leading zero.
 *        If a zero is not needed the numString will not be changed
 *
 * @return new char array with added 0
 */
bool addLeadingZero(char *numString, char *new_string){
    if(numString[0] != '.'){
        return false;
    } else {
        strcat(new_string, numString);
    }
    return true;
}

/*
 * @brief function to return string left of  "."
 *
 * @param numString[] Null terminated string containing a floating
 *        point number, newString[] is placeholder where the Characteristic
 *        will be stored into
 *
 * @return char array of characteristic
 */
char *getCharacteristic(char *numString, char *newString){
    for(int i = 0; numString[i] != '.'; i++){
        newString[i] = numString[i];
    }
    return newString;
}

/*
 * @brief function to return string right of  "."
 *
 * @param numString[] Null terminated string containing a floating
 *        point number, newString[] is placeholder where the Mantissa
 *        will be stored into
 *
 * @return char array of mantissa
 */
char *getMantissa(char *numString, char *newString){
    int numStringIndex = 0;
    int newStringIndex = 0;
    while(numString[numStringIndex] != '.'){
        numStringIndex++;
    }
    for(int i = numStringIndex+1; numString[i] != '\0'; i++){
        newString[newStringIndex] = numString[i];
        newStringIndex++;
    }
    return newString;
}

// TODO: Maybe a function to convert a given string to int

// TODO: Maybe a function to return a string representing the
//       10 to the power of X based on the inputted int/string
//       i.e. input->123 for 0.123 output->"1000"

// Some of the above functions maybe better placed in
// string_to_int_converter.c

// Any other functions necessary for operation of stringtoint

#endif  // PARSER_C
