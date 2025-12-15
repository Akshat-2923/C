#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d", &a);
    int nst = 1;
    int nsp = a - 1;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j <= nsp; j++)
        {
            printf(" ");
        }
        nsp = nsp - 1;
        for (int k = 1; k <= nst; k++)
        {
            printf("*");
        }
        nst = nst + 2;
        printf("\n");
    }
    return 0;
}