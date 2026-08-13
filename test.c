#include <stdio.h>
int main()
{
    int bill, tip, total;
    bill = 100;
    tip = bill * 0.2;
    total = bill * tip;

    printf("Total is %d\n", total);
    return 0;
}