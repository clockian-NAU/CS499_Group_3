/*
 * @file test_parser.c
 *
 * @author Jasque Saydyk
 *
 * @brief Unit tests for the parser.c
 */
#include <stdlib.h>
#include <stdio.h>
#include "../src/string_to_int_converter.h"
#include "../src/parser.h"

void test_isDigit_Success1(void){
    char test = '5';

    bool output = isDigit(test);

    if(output == true){
        printf("Success: test_isDigit_Success1\n");
    } else {
        printf("Error: test_isDigit_Success1\n");
    }
}

void test_isDigit_Fail1(void){
    char test = '.';

    bool output = isDigit(test);

    if(output == false){
        printf("Success: test_isDigit_Fail1\n");
    } else {
        printf("Error: test_isDigit_Fail1\n");
    }
}

void test_isDigit_Fail2(void){
    char test = 'a';

    bool output = isDigit(test);

    if(output == false){
        printf("Success: test_isDigit_Fail2\n");
    } else {
        printf("Error: test_isDigit_Fail2\n");
    }
}

void test_isValid_Success1(void){
    char test_string[] = "12.34";

    bool output = isValid(test_string);

    if(output == true){
        printf("Success: test_isValid_Success1\n");
    } else {
        printf("Error: test_isValid_Success1\n");
    }
}

void test_isValid_Success2(void){
    char test_string[] = ".34";

    bool output = isValid(test_string);

    if(output == true){
        printf("Success: test_isValid_Success2\n");
    } else {
        printf("Error: test_isValid_Success2\n");
    }
}

void test_isValid_Success3(void){
    char test_string[] = "-12.34";

    bool output = isValid(test_string);

    if(output == true){
        printf("Success: test_isValid_Success3\n");
    } else {
        printf("Error: test_isValid_Success3\n");
    }
}

void test_isValid_Success4(void){
    char test_string[] = "0.34";

    bool output = isValid(test_string);

    if(output == true){
        printf("Success: test_isValid_Success4\n");
    } else {
        printf("Error: test_isValid_Success4\n");
    }
}

void test_isValid_Success5(void){
    char test_string[] = "     00.34";

    bool output = isValid(test_string);

    if(output == true){
        printf("Success: test_isValid_Success5\n");
    } else {
        printf("Error: test_isValid_Success5\n");
    }
}

void test_isValid_Success6(void){
    char test_string[] = "1.1000";

    bool output = isValid(test_string);

    if(output == true){
        printf("Success: test_isValid_Success6\n");
    } else {
        printf("Error: test_isValid_Success6\n");
    }
}

void test_isValid_Success7(void){
    char test_string[] = "1.1    ";

    bool output = isValid(test_string);

    if(output == true){
        printf("Success: test_isValid_Success7\n");
    } else {
        printf("Error: test_isValid_Success7\n");
    }
}

void test_isValid_Success8(void){
    char test_string[] = "1.0";

    bool output = isValid(test_string);

    if(output == true){
        printf("Success: test_isValid_Success8\n");
    } else {
        printf("Error: test_isValid_Success8\n");
    }
}

void test_isValid_Success9(void){
    char test_string[] = "1.";

    bool output = isValid(test_string);

    if(output == true){
        printf("Success: test_isValid_Success9\n");
    } else {
        printf("Error: test_isValid_Success9\n");
    }
}

void test_isValid_Success10(void){
    char test_string[] = "1";

    bool output = isValid(test_string);

    if(output == true){
        printf("Success: test_isValid_Success10\n");
    } else {
        printf("Error: test_isValid_Success10\n");
    }
}

void test_isValid_Fail1(void){
    char test_string[] = ".12.34";

    bool output = isValid(test_string);

    if(output == false){
        printf("Success: test_isValid_Fail1\n");
    } else {
        printf("Error: test_isValid_Fail1\n");
    }
}


void test_isValid_Fail2(void){
    char test_string[] = "12.34a";

    bool output = isValid(test_string);

    if(output == false){
        printf("Success: test_isValid_Fail2\n");
    } else {
        printf("Error: test_isValid_Fail2\n");
    }
}

void test_isValid_Fail3(void){
    char *test_string = NULL;

    bool output = isValid(test_string);

    if(output == false){
        printf("Success: test_isValid_Fail3\n");
    } else {
        printf("Error: test_isValid_Fail3\n");
    }
}

void test_isValid_Fail4(void){
    char *test_string = "-a.1";

    bool output = isValid(test_string);

    if(output == false){
        printf("Success: test_isValid_Fail4\n");
    } else {
        printf("Error: test_isValid_Fail4\n");
    }
}

void test_isValid_Fail5(void){
    char *test_string = "-0a.1";

    bool output = isValid(test_string);

    if(output == false){
        printf("Success: test_isValid_Fail5\n");
    } else {
        printf("Error: test_isValid_Fail5\n");
    }
}

void test_isValid_Fail6(void){
    char *test_string = "-1a.1";

    bool output = isValid(test_string);

    if(output == false){
        printf("Success: test_isValid_Fail6\n");
    } else {
        printf("Error: test_isValid_Fail6\n");
    }
}

void test_isValid_Fail7(void){
    char *test_string = "-1.a1";

    bool output = isValid(test_string);

    if(output == false){
        printf("Success: test_isValid_Fail7\n");
    } else {
        printf("Error: test_isValid_Fail7\n");
    }
}

void test_isValid_Fail8(void){
    char *test_string = "-1a.0";

    bool output = isValid(test_string);

    if(output == false){
        printf("Success: test_isValid_Fail8\n");
    } else {
        printf("Error: test_isValid_Fail8\n");
    }
}

void test_isValid_Fail9(void){
    char *test_string = "1-.1";

    bool output = isValid(test_string);

    if(output == false){
        printf("Success: test_isValid_Fail9\n");
    } else {
        printf("Error: test_isValid_Fail9\n");
    }
}

void test_isValid_Fail10(void){
    char *test_string = "1.-1";

    bool output = isValid(test_string);

    if(output == false){
        printf("Success: test_isValid_Fail10\n");
    } else {
        printf("Error: test_isValid_Fail10\n");
    }
}
void test_strLength_Success1(void){
    char test[] = "1234\0";

    int output = strLength(test);

    if(output == 4){
        printf("Success: test_strLength_Success1\n");
    } else {
        printf("Error: test_strLength_Success1\n");
    }
}


void test_strLength_Success2(void){
    char *test = NULL;

    int output = strLength(test);

    if(output == 0){
        printf("Success: test_strLength_Success2\n");
    } else {
        printf("Error: test_strLength_Success2\n");
    }
}

void test_strLength_Success3(void){
    char test[] = "\0";

    int output = strLength(test);

    if(output == 0){
        printf("Success: test_strLength_Success3\n");
    } else {
        printf("Error: test_strLength_Success3\n");
    }
}

void test_removeLeadingZeros_Success1(void){
    char test[] = "001.100\0";

    bool output = removeLeadingZeros(test);

    if(output == true && strCmp(test, "1.100") == 0){
        printf("Success: test_removeLeadingZeros_Success1\n");
    } else {
        printf("Error: test_removeLeadingZeros_Success1\n");
    }
}

void test_removeLeadingZeros_Success2(void){
    char test[] = "-001.100\0";

    bool output = removeLeadingZeros(test);

    if(output == true && strCmp(test, "-1.100") == 0){
        printf("Success: test_removeLeadingZeros_Success2\n");
    } else {
        printf("Error: test_removeLeadingZeros_Success2\n");
    }
}

void test_removeLeadingZeros_Success3(void){
    char test[] = "0.100";

    bool output = removeLeadingZeros(test);

    if(output == true && strCmp(test, ".100") == 0){
        printf("Success: test_removeLeadingZeros_Success3\n");
    } else {
        printf("Error: test_removeLeadingZeros_Success3\n");
    }
}
void test_removeLeadingZeros_Fail1(void){
    char test[] = "1.100\0";

    bool output = removeLeadingZeros(test);

    if(output == false){
        printf("Success: test_removeLeadingZeros_Fail1\n");
    } else {
        printf("Error: test_removeLeadingZeros_Fail1\n");
    }
}

void test_removeLeadingZeros_Fail2(void){
    char *test = NULL;

    bool output = removeLeadingZeros(test);

    if(output == false){
        printf("Success: test_removeLeadingZeros_Fail2\n");
    } else {
        printf("Error: test_removeLeadingZeros_Fail2\n");
    }
}

void test_removeLeadingZeros_Fail3(void){
    char *test = ".100";

    bool output = removeLeadingZeros(test);

    if(output == false){
        printf("Success: test_removeLeadingZeros_Fail3\n");
    } else {
        printf("Error: test_removeLeadingZeros_Fail3\n");
    }
}

void test_removeTrailingZeros_Success1(void){
    char test[] = "001.100";

    bool output = removeTrailingZeros(test);

    if(output == true && strCmp(test, "001.1") == 0){
        printf("Success: test_removeTrailingZeros_Success1\n");
    } else {
        printf("Error: test_removeTrailingZeros_Success1\n");
    }
}

void test_removeTrailingZeros_Success2(void){
    char test[] = "-001.100";

    bool output = removeTrailingZeros(test);

    if(output == true && strCmp(test, "-001.1") == 0){
        printf("Success: test_removeTrailingZeros_Success2\n");
    } else {
        printf("Error: test_removeTrailingZeros_Success2\n");
    }
}

void test_removeTrailingZeros_Success3(void){
    char test[] = "1.0";

    bool output = removeTrailingZeros(test);

    if(output == true && strCmp(test, "1.") == 0){
        printf("Success: test_removeTrailingZeros_Success3\n");
    } else {
        printf("Error: test_removeTrailingZeros_Success3\n");
    }
}
void test_removeTrailingZeros_Fail1(void){
    char test[] = "001.1";

    bool output = removeTrailingZeros(test);

    if(output == false){
        printf("Success: test_removeTrailingZeros_Fail1\n");
    } else {
        printf("Error: test_removeTrailingZeros_Fail1\n");
    }
}

void test_removeTrailingZeros_Fail2(void){
    char *test = NULL;

    bool output = removeTrailingZeros(test);

    if(output == false){
        printf("Success: test_removeTrailingZeros_Fail2\n");
    } else {
        printf("Error: test_removeTrailingZeros_Fail2\n");
    }
}

void test_removeTrailingZeros_Fail3(void){
    char *test = "1.";

    bool output = removeTrailingZeros(test);

    if(output == false){
        printf("Success: test_removeTrailingZeros_Fail3\n");
    } else {
        printf("Error: test_removeTrailingZeros_Fail3\n");
    }
}

void test_removeLeadingSpaces_Success1(void){
    char test[] = "   1.100";

    bool output = removeLeadingSpaces(test);

    if(output == true && strCmp(test, "1.100") == 0){
        printf("Success: test_removeLeadingSpaces_Success1\n");
    } else {
        printf("Error: test_removeLeadingSpaces_Success1\n");
    }
}

void test_removeLeadingSpaces_Success2(void){
    char test[] = "   -1.100 ";

    bool output = removeLeadingSpaces(test);

    if(output == true && strCmp(test, "-1.100 ") == 0){
        printf("Success: test_removeLeadingSpaces_Success2\n");
    } else {
        printf("Error: test_removeLeadingSpaces_Success2\n");
    }
}

void test_removeLeadingSpaces_Success3(void){
    char test[] = "  001.1";

    bool output = removeLeadingSpaces(test);

    if(output == true && strCmp(test, "001.1") == 0){
        printf("Success: test_removeLeadingSpaces_Success3\n");
    } else {
        printf("Error: test_removeLeadingSpaces_Success3\n");
    }
}


void test_removeLeadingSpaces_Success4(void){
    char test[] = "   .1";

    bool output = removeLeadingSpaces(test);

    if(output == true && strCmp(test, ".1") == 0){
        printf("Success: test_removeLeadingSpaces_Success4\n");
    } else {
        printf("Error: test_removeLeadingSpaces_Success4\n");
    }
}

void test_removeLeadingSpaces_Fail1(void){
    char test[] = "1.100";

    bool output = removeLeadingSpaces(test);

    if(output == false){
        printf("Success: test_removeLeadingSpaces_Fail1\n");
    } else {
        printf("Error: test_removeLeadingSpaces_Fail1\n");
    }
}

void test_removeLeadingSpaces_Fail2(void){
    char test[] = "0.1";

    bool output = removeLeadingSpaces(test);

    if(output == false){
        printf("Success: test_removeLeadingSpaces_Fail2\n");
    } else {
        printf("Error: test_removeLeadingSpaces_Fail2\n");
    }
}

void test_removeLeadingSpaces_Fail3(void){
    char test[] = ".1";

    bool output = removeLeadingSpaces(test);

    if(output == false){
        printf("Success: test_removeLeadingSpaces_Fail3\n");
    } else {
        printf("Error: test_removeLeadingSpaces_Fail3\n");
    }
}

void test_removeTrailingSpaces_Success1(void){
    char test[] = "1.100   ";

    bool output = removeTrailingSpaces(test);

    if(output == true && strCmp(test, "1.100") == 0){
        printf("Success: test_removeTrailingSpaces_Success1\n");
    } else {
        printf("Error: test_removeTrailingSpaces_Success1\n");
    }
}

void test_removeTrailingSpaces_Success2(void){
    char test[] = "-1.100   ";

    bool output = removeTrailingSpaces(test);

    if(output == true && strCmp(test, "-1.100") == 0){
        printf("Success: test_removeTrailingSpaces_Success2\n");
    } else {
        printf("Error: test_removeTrailingSpaces_Success2\n");
    }
}

void test_removeTrailingSpaces_Success3(void){
    char test[] = "1.   ";

    bool output = removeTrailingSpaces(test);

    if(output == true && strCmp(test, "1.") == 0){
        printf("Success: test_removeTrailingSpaces_Success3\n");
    } else {
        printf("Error: test_removeTrailingSpaces_Success3\n");
    }
}

void test_removeTrailingSpaces_Fail1(void){
    char test[] = "1.100";

    bool output = removeTrailingSpaces(test);

    if(output == false){
        printf("Success: test_removeTrailingSpaces_Fail1\n");
    } else {
        printf("Error: test_removeTrailingSpaces_Fail1\n");
    }
}

void test_removeTrailingSpaces_Fail2(void){
    char test[] = "1.";

    bool output = removeTrailingSpaces(test);

    if(output == false){
        printf("Success: test_removeTrailingSpaces_Fail2\n");
    } else {
        printf("Error: test_removeTrailingSpaces_Fail2\n");
    }
}

void test_addLeadingZero_Success1(void){
    char test_string[] = ".10";
    char zero[] = "0";
    
    int output = addLeadingZero(test_string, zero);
    
    if(output == true){
        printf("Success: test_addLeadingZero_Success1\n");
    } else {
        printf("Error: test_addLeadingZero_Success1\n");
    }
}

void test_addLeadingZero_Fail1(void){
    char test_string[] = "0.1";
    
    int output = addLeadingZero(test_string, "0");
    
    if(output == false){
        printf("Success: test_addLeadingZero_Fail1\n");
    } else {
        printf("Error: test_addLeadingZero_Fail1\n");
    }
}

// Add addTrailingZero() tests here

void test_getCharacteristic_Success1(void){
    char test_string[] = "12.34";
    char *new_string = malloc(sizeof(char) * 60);

    new_string = getCharacteristic(test_string, new_string);

    if(strCmp("12", new_string) == 0){
        printf("Success: test_getCharacteristic_Success1\n");
    } else {
        printf("Error: test_getCharacteristic_Success1\n");
    }

    free(new_string);
}

void test_getCharacteristic_Success2(void){
    char test_string[] = "-12.34";
    char *new_string = malloc(sizeof(char) * 60);

    new_string = getCharacteristic(test_string, new_string);

    if(strCmp("-12", new_string) == 0){
        printf("Success: test_getCharacteristic_Success2\n");
    } else {
        printf("Error: test_getCharacteristic_Success2\n");
    }

    free(new_string);
}

void test_getCharacteristic_Success3(void){
    char test_string[] = "0.34";
    char *new_string = malloc(sizeof(char) * 60);

    new_string = getCharacteristic(test_string, new_string);

    if(strCmp("0", new_string) == 0){
        printf("Success: test_getCharacteristic_Success3\n");
    } else {
        printf("Error: test_getCharacteristic_Success3\n");
    }

    free(new_string);
}

void test_getCharacteristic_Success4(void){
    char test_string[] = "1";
    char *new_string = malloc(sizeof(char) * 60);

    new_string = getCharacteristic(test_string, new_string);

    if(strCmp("1", new_string) == 0){
        printf("Success: test_getCharacteristic_Success4\n");
    } else {
        printf("Error: test_getCharacteristic_Success4\n");
    }

    free(new_string);
}

void test_getCharacteristic_Success5(void){
    char test_string[] = "0";
    char *new_string = malloc(sizeof(char) * 60);

    new_string = getCharacteristic(test_string, new_string);

    if(strCmp("0", new_string) == 0){
        printf("Success: test_getCharacteristic_Success5\n");
    } else {
        printf("Error: test_getCharacteristic_Success5\n");
    }

    free(new_string);
}

void test_getMantissa_Success1(void){
    char test_string[] = "12.34";
    char *new_string = malloc(sizeof(char) * 60);

    new_string = getMantissa(test_string, new_string);
    
    if(strCmp("34", new_string) == 0){
        printf("Success: test_getMantissa_Success1\n");
    } else {
        printf("Error: test_getMantissa_Success1\n");
    }

    free(new_string);
}

void test_getMantissa_Success2(void){
    char test_string[] = "12.0";
    char *new_string = malloc(sizeof(char) * 60);

    new_string = getMantissa(test_string, new_string);
    
    if(strCmp("0", new_string) == 0){
        printf("Success: test_getMantissa_Success2\n");
    } else {
        printf("Error: test_getMantissa_Success2\n");
    }

    free(new_string);
}

void test_getMantissa_Success3(void){
    char test_string[] = "12.1";
    char *new_string = malloc(sizeof(char) * 60);

    new_string = getMantissa(test_string, new_string);
    
    if(strCmp("1", new_string) == 0){
        printf("Success: test_getMantissa_Success3\n");
    } else {
        printf("Error: test_getMantissa_Success3\n");
    }

    free(new_string);
}

void test_getMantissa_Success4(void){
    char test_string[] = "0.0";
    char *new_string = malloc(sizeof(char) * 60);

    new_string = getMantissa(test_string, new_string);
    
    if(strCmp("34", new_string) == 0){
        printf("Success: test_getMantissa_Success4\n");
    } else {
        printf("Error: test_getMantissa_Success4\n");
    }

    free(new_string);
}
