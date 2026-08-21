#include <stdio.h>

int main()
{
    unsigned short int b = 65535; // Maximum for 2-byte unsigned
    printf("b = %u\n", b);        // 65535
    b = b + 1;
    printf("b = %u\n", b); // 0   ← Wrapped around to 0
    return 0;
}
/*Creates an unsigned short int (2 bytes) with the maximum possible value: 65535
Prints that value
Increments it by 1, which exceeds the maximum
Shows that it wraps around to 0 due to overflow*/