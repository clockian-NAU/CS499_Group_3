/*
 * @file test_parser.c
 *
 * @author Jasque Saydyk
 *
 * @brief Unit tests for the parser.c
 */
#include <stdlib.h>
#include <stdio.h>
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

void test_isValid_Success(void){
  char test_string[] = "10.23";
  int output = isValid(test_string);
  // Print output with success or failure
  if(output == 1){
      printf("Success: test_isString_Success#\n");
  } else {
      printf("Error: test_isString_FAILED#\n");
  }
}
