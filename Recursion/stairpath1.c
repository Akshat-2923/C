#include <stdio.h>
int stairs(int n)
{
    if (n == 1 || n == 2)
        return n;
    int ans1 = stairs(n - 1);
    int ans2 = stairs(n - 2);
    int recAns = ans1 + ans2;
    return recAns;
}
int main()
{
    int n;
    printf("Enter the number of steps: ");
    scanf("%d", &n);
    int st = stairs(n);
    printf("The number of ways: %d", st);
    return 0;
}