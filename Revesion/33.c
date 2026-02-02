// Factorial using recursion
int fact(int a)
{
    if (a == 0 || a == 1)
        return 1;
    int recAns = a * fact(a - 1);
    return recAns;
}
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d", &a);

    int factorial = fact(a);
    printf("%d", factorial);
    return 0;
}