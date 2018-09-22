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

// @brief test adding leading zero (.10)
void test_addLeadingZero_Success(void){
  char test_string[] = ".10";
  char new_string[] = "0.00000";
  strcpy(new_string, addLeadingZero(test_string));
  // Print output with success or failure
  if(strcmp("0.10", new_string) == 0){
      printf("Success: test_addLeadingZero_Success1\n");
  } else {
      printf("Error: test_addLeadingZero_Success1\n");
  }
}
