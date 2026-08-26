#include <stdio.h>

int main()
{
    int decimal = 26;
    int octal = 032;
    int hexadecimal = 0x1A;
    printf("Decimal      = %d\n", decimal);
    printf("Octal        = %o\n", decimal);
    printf("Hexadecimal  = %X\n", decimal);
    printf("Hexadecimal  = %x\n", decimal);
    printf("\nValues assigned using different forms:\n");
    printf("decimal      = %d\n", decimal);
    printf("octal        = %d\n", octal);
    printf("hexadecimal  = %d\n", hexadecimal);
    return 0;
}