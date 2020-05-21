#include <stdio.h>
#include <stdlib.h>
#include "../Wiring/WString.h"


String ss = "sssssaaa";

int main(void)
{
    
    printf("%s\n", (ss+"ss").c_str());

    return 0;
}

/* 
 * test method(windows cmd):
 * cd test
 * g++ test_string.cpp ../Wiring/itoa.c ../Wiring/avr/dtostrf.c ../Wiring/WString.cpp -o test_string
 * .\test_string.exe
 */