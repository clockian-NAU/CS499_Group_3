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
#include "parser.h"
#include <string.h>

/*
 * @brief Determines if char is a interger
 *
 * @param curr is a single char
 *
 * @return Bool indicating success or failure
 */
bool isdigit(int curr){
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
  int decimal_occured = 0;

  for(int i = 0; numString[i] != '\0'; i++) {
    if(!isdigit(numString[i]) && numString[i] != '.'){
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

// TODO: Function to remove leading and trailing 0's from number
//       may need to split into two different functions

/*
 * @brief Function to add a leading 0 if there is no number in
 *        front of ".", i.e. ".01"
 *
 * @param numString[] Null terminated string containing a floating
 *        point number
 *
 * @return new char array with added 0
 */
char *addLeadingZero(char *numString){
    char new_string[50] = "0";
    return strcat(new_string, numString);
}

// TODO: Maybe a function to convert a given string to int

// TODO: Maybe a function to return two strings split along "."

// TODO: Maybe a function to return a string representing the
//       10 to the power of X based on the inputted int/string
//       i.e. input->123 for 0.123 output->"1000"

// Some of the above functions maybe better placed in
// string_to_int_converter.c

// Any other functions necessary for operation of stringtoint

#endif  // PARSER_C
