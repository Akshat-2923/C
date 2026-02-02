#include <stdio.h>

int fib(int a)
{
    if (a == 1 || a == 2)
        return 1;
    int recAns = fib(a - 1) + fib(a - 2);
    return recAns;
}
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    int fibonacci = fib(a);
    printf("%d", fibonacci);
    return 0;
}
