#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d", &a);
    int nsp = a - 1;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j <= nsp; j++)
        {
            printf(" ");
        }
        nsp = nsp - 1;
        int n = 1;
        for (int k = 1; k <= i; k++)
        {
            printf("%d", n);
            n++;
        }
        int l = i - 1;
        for (int m = 0; m < i - 1; m++)
        {
            printf("%d", l);
            l--;
        }
        printf("\n");
    }
    return 0;
}