#include <stdio.h>
#include <math.h>
int main()
{
    int x, d, gp, n;
    printf("Enter the first term :");
    scanf("%d", &x);
    printf("Enter the common ratio :");
    scanf("%d", &d);
    printf("Enter the number of terms :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        gp = x * pow(d, i);
        printf("%d ", gp);
    }
    printf("\n");

    return 0;
}