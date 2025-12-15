#include <stdio.h>
int main()
{
    int x;
    printf("Enter the integer :");
    scanf("%d", &x);
    if (x < 0)
    {
        printf("This is a negative integer");
    }
    else if (x > 0)
    {
        printf("This is a positive integer");
    }
    else
    {
        printf("Number = 0");
    }
}