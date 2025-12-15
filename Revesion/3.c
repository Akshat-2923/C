#include <stdio.h>
int main()
{
    int a, d, n;
    printf("Enter the first term: ");
    scanf("%d", &a);
    printf("Enter the common difference: ");
    scanf("%d", &d);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int p = a;
    for (int i = 1; i <= n; i++)
    {
        // for (int j = a; j <= a + (n - 1) * d; j = j + d)
        // {
        //     printf("%d ", j);
        // }
        printf("%d ", p);
        p = p + d;
    }
    return 0;
}