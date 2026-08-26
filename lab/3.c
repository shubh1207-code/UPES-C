#include <stdio.h>
int main()
{
    unsigned short int b = 65535; // Maximum for 2-byte unsigned
    printf("b = %u\n", b);        // 65535
    b = b + 1;
    printf("b = %u\n", b); // 0   ← Wrapped around to 0
    return 0;
}