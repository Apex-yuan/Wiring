#include "../Stream.h"

class Serial : public Stream {
    public:
    virtual int available(void);
    virtual int peek(void);
    virtual int read(void);
    virtual void flush(void);
    virtual size_t write(uint8_t);
    inline size_t write(unsigned long n) {
        return write((uint8_t)n);
    }
    inline size_t write(long n) {
        return write((uint8_t)n);
    }
    inline size_t write(unsigned int n) {
        return write((uint8_t)n);
    }
    inline size_t write(int n) {
        return write((uint8_t)n);
    }
    using Print::write; // pull in write(str) and write(buf, size) from Print
};

size_t Serial::write(uint8_t c) {
    //printf("%c", c);
    putchar(c);
    return 1;
}

int Serial::available(void) {
    return 0;
}

void Serial::flush(void) {

}

int Serial::read(void) {
    return 0;
}

int Serial::peek(void) {
    return 0;
}

int main(void) {
    Serial serial;
    /* print data */
    char a = 55;
    serial.print(a, DEC);
    serial.print('\n');

    /* print string */
    serial.print("hello");
    serial.println();
    serial.println("sdfdfsdfsdfsdfsdf");

    /* print String */
    String aa = "sdf";
    aa += "sdf";
    serial.println(aa);

    return 0;
}

/* 
 * test method(windows cmd):
 * cd wring/test
 * g++ test_stream.cpp ../Stream.cpp ../Print.cpp ../WString.cpp ../avr/dtostrf.c ../itoa.c -o test_stream
 * .\test_stream.exe
 */
