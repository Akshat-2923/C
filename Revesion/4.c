#include <stdio.h>
int power(int d, int n)
{
    int m = 1;
    for (int i = 0; i < n; i++)
    {
        m *= d;
    }
    return m;
}
int main()
{
    int a, d, n;
    printf("Enter the first term: ");
    scanf("%d", &a);
    printf("Enter the common difference: ");
    scanf("%d", &d);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
        // printf("%d ", p);
        // p = p * d;
        for (int q = a; q <= a * power(d, n - 1); q = q * d)
        {
            printf("%d ", q);
        }
    return 0;
}