#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d", &a);

    int nst = 2 * a - 1;
    int nsp = 0;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        nsp++;
        for (int k = 1; k <= nst; k++)
        {
            printf("*");
        }
        nst = nst - 2;
        printf("\n");
    }
    int nsp2 = a - 2;
    int npt =  a - 1;
    for (int i = 1; i <= a - 1; i++)
    {
        for (int i = 0; i < nsp2; i++)
        {
            printf(" ");
        }
        nsp = nsp - 1;
        for (int p = 1; p <= npt; p++)
        {
            printf("*");
        }
        npt = npt + 2;
        printf("\n");
    }

    return 0;
}