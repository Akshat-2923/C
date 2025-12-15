#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
            r = r + i;
        else
            r = r - i;
    }
    printf("%d",r);
}