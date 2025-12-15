#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    switch (x)
    {
    case 1 ... 10:
        printf("This is in the given range");
        break;

    default:
        printf("This is outside the given range");
        break;
    }
    return 0;
}