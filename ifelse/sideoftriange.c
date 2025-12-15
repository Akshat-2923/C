#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter First side :");
    scanf("%d", &x);
    printf("Enter second side :");
    scanf("%d", &y);
    printf("Enter third side :");
    scanf("%d", &z);
    if ((x + y) > z && (y + z) > x && (x + z) > y)
    {
        printf("These sides can make a triangle");
    }
    else
    {
        printf("These sides can not make a triangle");
    }
}