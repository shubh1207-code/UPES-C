#include <stdio.h>
int main()
{
    int a = 10, b = 5;                                            // Example 1
    printf("Result = %d\n", a > b && b != 10 && b < 11 && a > 5); // 10>5 → true, 5!=10 → true, 5<11 → true, 10>5 → true // Result = 1
    // Example 2 (one condition false)
    printf("Result = %d\n", a < 5 && b != 10); // 10<5 → false → Result = 0
    // Example 3 (OR operator)
    printf("Result = %d\n", a > b || b == 4); // 10>5 → true → Result = 1 (second condition not even needed)
    // Example 4 (NOT operator)
    printf("Result = %d\n", !a);       // a is non-zero → true → !true = 0
    printf("Result = %d\n", !(a > 5)); // a>5 is true → !true = 0
    printf("Result = %d\n", !(a < 5)); // a<5 is false → !false = 1
    // Example 5 (AND and OR operators)
    printf("Result = %d\n", 10 && 5); // both non-zero → Result = 1
    printf("Result = %d\n", 10 && 0); // one is zero → Result = 0
    printf("Result = %d\n", 0 || 5);  // Any non-zero value is treated as true (1) → Result = 1
    printf("Result = %d\n", !0);      // !0 → true → Result = 1
    printf("Result = %d\n", !10);     // !10 → false → Result = 0
    return 0;
}