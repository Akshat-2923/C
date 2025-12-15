#include<stdio.h>
int main()
{
    int a , n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
            a = 1;
        else
            a = 0;
        for (int q = 0; q <= i; q++)
        {
            printf("%d ", a);
            if (a == 0)
                a = 1;
            else
                a = 0;
        }
        printf("\n");
    }
}
