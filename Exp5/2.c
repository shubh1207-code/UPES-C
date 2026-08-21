#include <stdio.h>
int main()
{
    short int a = 32767;   // Maximum value of signed int (2 bytes)
    printf("a = %d\n", a); // Output: 32767
    a = a + 1;             // Overflow!
    printf("a = %d\n", a); // Output: -32768   ← Wrapped around
    return 0;
}
/*Creates a signed short int (2 bytes) with the maximum possible value: 32767
Prints that value
Increments it by 1, which exceeds the maximum
Shows that it wraps around to -32768 due to overflow*/