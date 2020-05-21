#include <stdio.h>
#include <stdlib.h>
#include "../WString.h"


String ss = "sssssaaa";

int main(void)
{
    
    printf("%s\n", (ss+"ss").c_str());

    return 0;
}

/* 
 * test method(windows cmd):
 * cd wring/test
 * g++ test_string.cpp ../itoa.c ../avr/dtostrf.c ../WString.cpp -o test_string
 * .\test_string.exe
 */