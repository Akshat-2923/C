#include <stdio.h>
int stairs(int n)
{
    if (n == 1 || n == 2)
        return n;
    if(n == 3) return 4;
    int ans1 = stairs(n - 1);
    int ans2 = stairs(n - 2);
    int ans3 = stairs(n - 3);
    int recAns = ans1 + ans2 + ans3;
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