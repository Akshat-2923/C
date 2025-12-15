#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if (x % 5 == 0 || x % 11 == 0)
    {
        printf("divisible by 5 or 11");
    }
    else
    {
        printf(" not divisible by 5 or 11");
    }

    return 0;
}