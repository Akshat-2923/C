#include <stdio.h>
// int factorial(int x)
// {
//     int fact = 1;
//     for (int i = 1; i <= x; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }
// int combination(int n, int r)
// {
//     int ncr = factorial(n) / (factorial(r) * factorial(n - r));
//     return ncr;
// }
int main()
{
    int n;

    printf("Enter n:");
    scanf("%d", &n);

    int nsp = n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        nsp--;
        int first = 1;
        for (int k = 0; k <= i; k++)
        {
            int n = i;
            int r = k;
            printf("%d ", first);
            first = first * (n - r) / (r + 1);
            // int ncr = combination(n, r);
            // printf("%d ", ncr);
        }
        printf("\n");
    }
}