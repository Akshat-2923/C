#include <stdio.h>

int fibonacci(int a)
{
    if (a == 1 || a == 2)
        return 1;
    int ans1 = fibonacci(a-1);
    int ans2 = fibonacci(a-2);
    int recAns = ans1 + ans2;
    return recAns;
}
int main()
{
    int a;
    printf("Enter the no of terms: ");
    scanf("%d", &a);

    int fib = fibonacci(a);
    printf("%d", fib);
    return 0;
}