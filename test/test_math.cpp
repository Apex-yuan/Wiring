#include <stdint.h>
#include "../Wiring/WMath.h"
#include "stdio.h"


int main(void) {

    randomSeed(10);
    printf("%d\n",random(10));
    printf("%d\n",random(10));
    printf("%d\n",random(10));

    return 0;
}

/*
 * test method(windows cmd):
 * cd test
 * g++ test_math.cpp ../Wiring/WMath.cpp -o test_math
 * .\test_math.exe
 */