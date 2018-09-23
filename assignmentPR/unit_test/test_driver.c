/*
 * @file test_driver.c
 *
 * @author Jasque Saydyk
 *
 * @brief Runs all the tests
 */
#include <stdlib.h>
#include <stdio.h>
#include "test_string_to_int_converter.h"
#include "test_parser.h"

int main(){
    printf("Test string_to_int_converter.c\n");\


    printf("\nTest parser.c\n");

    test_isDigit_Success1();
    test_isDigit_Fail1();
    test_isDigit_Fail2();
    test_isValid_Success1();
    test_isValid_Success2();
    test_isValid_Success3();
    test_isValid_Fail1();
    test_isValid_Fail2();
    test_isValid_Fail3();
    test_strLength_Success1();
    test_strLength_Success2();
    test_strLength_Success3();
    test_removeLeadingZeros_Success1();
    test_removeLeadingZeros_Fail1();
    test_removeLeadingZeros_Fail2();
    test_removeTrailingZeros_Success1();
    test_removeTrailingZeros_Fail1();
    test_removeTrailingZeros_Fail2();
    test_addLeadingZero_Success();
    test_getCharacteristic_Success();
    test_getMantissa_Success();

    return 0;
}
