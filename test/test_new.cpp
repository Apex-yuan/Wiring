#include <stdio.h>

int main(void) {
    int *a = new int[4];

    for (int i = 0; i < 4; ++i) {
        *(a+i) = i;
    }
    
    for (int i = 0; i < 4; ++i) {
        printf("%d ",*(a+i));
    }

    delete a;

    return 0;
}

/*
 * test method(windows cmd):
 * cd test
 * g++ test_new.cpp ../Wiring/new.cpp -o test_new
 * .\test_new.exe
 */
