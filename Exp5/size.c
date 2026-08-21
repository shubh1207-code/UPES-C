#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a;
    printf("Size of int = %zu bytes\n", sizeof(int));
    printf("Size of int_a= %zu bytes\n", sizeof(a));
    printf("Size of short = %zu bytes\n", sizeof(short));
    printf("Size of long = %zu bytes\n", sizeof(long));
    printf("Size of float = %zu bytes\n", sizeof(float));
    printf("Size of double = %zu bytes\n", sizeof(double));
    printf("Size of char = %zu bytes\n", sizeof(char));
    printf("Size of bool = %zu bytes\n", sizeof(bool));
    _Bool boolVar = 0;
    _Bool boolVar1 = 10;
    _Bool boolVar2 = -50;
    printf("Size of boolVar = %i bytes\n", sizeof(boolVar));
    printf("Size of boolVar1 = %i bytes\n", sizeof(boolVar1));
    printf("Size of boolVar2 = %i bytes\n", sizeof(boolVar2));
    printf("Size of bool =%zu bytes\n", sizeof(_Bool));
    int b = -5, c = -2;
    printf("\n-5 %% -2=%i\n", b % c);
    int d = -5, e = 2;
    printf("\n-5 %% 2=%i\n", d % e);
    int l = 5, m = -2;
    printf("\n5 %% -2=%i\n", l % m);
    int p = 5, q = 2;
    printf("\n5 %% 2=%i\n", p % q);
    return 0;
}