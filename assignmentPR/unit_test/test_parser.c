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

    if(output == true && strcmp(test, "1.100") == 0){
        printf("Success: test_removeLeadingZeros_Success1\n");
    } else {
        printf("Error: test_removeLeadingZeros_Success1\n");
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

void test_removeTrailingZeros_Success1(void){
    char test[] = "001.100";

    bool output = removeTrailingZeros(test);

    if(output == true && strcmp(test, "001.1") == 0){
        printf("Success: test_removeTrailingZeros_Success1\n");
    } else {
        printf("Error: test_removeTrailingZeros_Success1\n");
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