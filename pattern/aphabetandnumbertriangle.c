#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        printf("\n");
        int m = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d",m);
            m++;
        }
        printf("\n");
        char n = 65;
        for (int j = 0; j < i; j++)
        {
            printf("%c ",n);
            n++;
        }
    }
    return 0;
}