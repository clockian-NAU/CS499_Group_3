/*
 * @file test_string_to_int_converter.c
 *
 * @author Jasque Saydyk
 *
 * @brief Unit tests for the string_to_int_converter.c
 */
#include <stdlib.h>
#include <stdio.h>
#include "../src/string_to_int_converter.h"

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

// @brief testing mantissa floating point string (2.351)
void test_mantissa_Success1(void){
    char test_string[] = "2.351";
    int numerator = 0;
    int denominator = 0;

    bool output = mantissa(test_string, &numerator, &denominator);

    if(output == true && numerator == 351 && denominator == 10000){
        printf("Success: test_mantissa_Success1\n");
    } else {
        printf("Error: test_mantissa_Success1\n");
    }
}

// @brief testing mantissa floating point string (2.351.0)
void test_mantissa_Fail1(void){
    char test_string[] = "2.351.0";
    int numerator = 0;
    int denominator = 0;

    bool output = mantissa(test_string, &numerator, &denominator);

    if(output == false){
        printf("Success: test_mantissa_Fail1\n");
    } else {
        printf("Error: test_mantissa_Fail1\n");
    }
}

// @brief testing characteristic floating point string (02.351)
void test_characteristic_Success1(void){
    char test_string[] = "02.351";
    int c = 0;

    bool output = characteristic(test_string, &c);

    if(output == true && c == 2){
        printf("Success: test_characteristic_Success1\n");
    } else {
        printf("Error: test_characteristic_Success1\n");
    }
}

// @brief testing characteristic floating point string (2.2.351)
void test_characteristic_Fail1(void){
    char test_string[] = "2.2.351";
    int c = 0;

    bool output = characteristic(test_string, &c);

    if(output == false){
        printf("Success: test_characteristic_Fail1\n");
    } else {
        printf("Error: test_characteristic_Fail1\n");
    }
}
