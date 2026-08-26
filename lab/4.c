#include <stdio.h>
int main()
{
    short int a = 32767;   // Maximum value of signed int (2 bytes)
    printf("a = %d\n", a); // Output: 32767
    a = a + 1;             // Overflow!
    printf("a = %d\n", a); // Output: -32768   ← Wrapped around
    return 0;
}