#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter First num :");
    scanf("%d", &x);
    printf("Enter second num :");
    scanf("%d", &y);
    printf("Enter third num :");
    scanf("%d", &z);
    if (x > y && x > z)
    {
        printf("%d is largest",x);
    }
    else if (y > x && y > z)
    {
        printf("%d is largest",y);
    }
    else if (z > x && z > y)
    {
        printf("%d is largest",z);
    }
    else 
    {
        printf("%d = %d = %d \n",x,y,z);
        printf("All numbers are equal");
    }
    return 0;
}