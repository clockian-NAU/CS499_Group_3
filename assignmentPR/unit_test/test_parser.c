/*
 * @file test_parser.c
 *
 * @author Jasque Saydyk
 *
 * @brief Unit tests for the parser.c
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../src/parser.h"

/*
General format of a test

// @brief what case you are testing (.01)

void test_exampleFunction_Success#(void){
    // Declare vars for test

    // Run exampleFunction() and store output

    // Print output with success or failure
    if(output == 0.01){
        printf("Success: test_exampleFunction_Success#");
    } else {
        printf("Error: test_exampleFunction_Success#");
*/

// @brief testing valid floating point string (12.34)
void test_isValid_Success(void){
  char test_string[] = "12.34";
  int output = isValid(test_string);
  // Print output with success or failure
  if(output == 1){
      printf("Success: test_isString_Success1\n");
  } else {
      printf("Error: test_isString_Success1\n");
  }
}

// @brief testing invalid floating point string (\0)
void test_isValid_Failure(void){
    char *test_string = NULL;
    int output = isValid(test_string);
    // Print output with success or failure
    if(output == 0){
      printf("Success: test_isString_Failure1\n");
    } else {
      printf("Error: test_isString_Failure1\n");
    }
}

// @brief test adding leading zero (.10)
void test_addLeadingZero_Success(void){
  char test_string[] = ".10";
  // must pass in a string of '0' for concat
  char new_string[] = "0";
  int output = addLeadingZero(test_string, new_string);
  // Print output with success or failure
  if(output == 1){
      printf("Success: test_addLeadingZero_Success1\n");
  } else {
      printf("Error: test_addLeadingZero_Success1\n");
  }
}

// @brief testing getCharacteristic floating point string (12.34)
void test_getCharacteristic_Success(void){
  char test_string[] = "12.34";
  char new_string[] = "00";
  strcpy(new_string, getCharacteristic(test_string, new_string));
  // Print output with success or failure
  if(strcmp("12", new_string) == 0){
      printf("Success: test_getCharacteristic_Success1\n");
  } else {
      printf("Error: test_getCharacteristic_Success1\n");
  }
}

// @brief testing getMantissa floating point string (12.34)
void test_getMantissa_Success(void){
  char test_string[] = "12.34";
  char new_string[] = "00";
  strcpy(new_string, getMantissa(test_string, new_string));
  // Print output with success or failure
  if(strcmp("34", new_string) == 0){
      printf("Success: test_getMantissa_Success1\n");
  } else {
      printf("Error: test_getMantissa_Success1\n");
  }
}
