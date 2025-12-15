#include <stdio.h>
int main()
{
    int a;

    printf("Enter a number :");
    scanf("%d", &a);

    int nsp = a - 1;
    int y = 1;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j <= nsp; j++)
        {
            printf(" ");
        }
        nsp = nsp - 1;
        for (int k = 1; k <= i; k++)
        {
            printf("%d", y);
        }
        for (int m = 0; m < i - 1; m++)
        {
            printf("%d", y);
        }
        y++;
        printf("\n");
    }

    int nsk = 3;
    y = a - 1;
    int nsi = (2 * a - 1) - 2;
    for (int j = a - 1; j <= a - 1 && j > 0; j--)
    {
        for (int i = 1; i < nsk; i++)
        {
            printf(" ");
        }
        nsk++;

        for (int f = 0; f < nsi; f++)
        {
            printf("%d", y);
        }
        y--;
        nsi = nsi - 2;
        printf("\n");
    }

    return 0;
}