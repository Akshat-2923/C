#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int nsp = n;
    int nst = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = nsp; j > 0; j--)
        {
            printf(" ");
        }
        nsp--;
        for (int q = 1; q < nst; q++)
        {
            printf("*");
        }
        nst++;
        for (int q = 1; q < nst; q++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}