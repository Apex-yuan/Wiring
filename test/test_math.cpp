#include <stdint.h>
#include "../WMath.h"
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
 * cd wring/test
 * g++ test_math.cpp ../WMath.cpp -o test_math
 * .\test_math.exe
 */