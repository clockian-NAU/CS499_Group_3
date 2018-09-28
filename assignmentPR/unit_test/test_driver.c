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
    printf("Test string_to_int_converter.c\n");

    test_mantissa_Success1();
    test_mantissa_Success2();
    test_mantissa_Success3();
    test_mantissa_Success4();
    test_mantissa_Success5();
    test_mantissa_Success6();
    test_mantissa_Success7();
    test_mantissa_Fail1();
    test_mantissa_Fail2();
    test_mantissa_Fail3();
    test_characteristic_Success1();
    test_characteristic_Success2();
    //test_characteristic_Success3();
    test_characteristic_Success4();
    test_characteristic_Fail1();
    test_characteristic_Fail2();
    test_characteristic_Fail3();


    printf("\nTest parser.c\n");

    test_isDigit_Success1();
    test_isDigit_Fail1();
    test_isDigit_Fail2();
    test_isValid_Success1();
    test_isValid_Success2();
    test_isValid_Success3();
    test_isValid_Success4();
    test_isValid_Success5();
    test_isValid_Success6();
    test_isValid_Success7();
    test_isValid_Success8();
    test_isValid_Success9();
    test_isValid_Success10();
    test_isValid_Fail1();
    test_isValid_Fail2();
    test_isValid_Fail3();
    test_isValid_Fail4();
    test_isValid_Fail5();
    test_isValid_Fail6();
    test_isValid_Fail7();
    test_isValid_Fail8();
    test_isValid_Fail9();
    test_isValid_Fail10();
    test_strLength_Success1();
    test_strLength_Success2();
    test_strLength_Success3();
    test_removeLeadingZeros_Success1();
    test_removeLeadingZeros_Success2();
    test_removeLeadingZeros_Success3();
    test_removeLeadingZeros_Fail1();
    test_removeLeadingZeros_Fail2();
    test_removeLeadingZeros_Fail3();
    test_removeTrailingZeros_Success1();
    test_removeTrailingZeros_Success2();
    test_removeTrailingZeros_Success3();
    test_removeTrailingZeros_Fail1();
    test_removeTrailingZeros_Fail2();
    test_removeTrailingZeros_Fail3();
    test_removeLeadingSpaces_Success1();
    test_removeLeadingSpaces_Success2();
    test_removeLeadingSpaces_Success3();
    test_removeLeadingSpaces_Success4();
    test_removeLeadingSpaces_Fail1();
    test_removeLeadingSpaces_Fail2();
    test_removeLeadingSpaces_Fail3();
    test_removeTrailingSpaces_Success1();
    test_removeTrailingSpaces_Success2();
    test_removeTrailingSpaces_Success3();
    test_removeTrailingSpaces_Fail1();
    test_removeTrailingSpaces_Fail2();
    test_addLeadingZero_Success1();
    test_addLeadingZero_Fail1();
    test_getCharacteristic_Success1();
    test_getCharacteristic_Success2();
    test_getCharacteristic_Success3();
    test_getCharacteristic_Success4();
    test_getCharacteristic_Success5();
    test_getMantissa_Success1();
    test_getMantissa_Success2();
    test_getMantissa_Success3();
    test_getMantissa_Success4();

    return 0;
}
