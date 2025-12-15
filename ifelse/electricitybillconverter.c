#include <stdio.h>
int main()
{
    float unit;
    float bill;
    printf("Enter your units :");
    scanf("%f", &unit);
    if (unit <= 100)
    {
        bill = unit * 1;
        printf("your bill is : %f", bill);
    }
    else if (unit > 100 && unit <= 200)
    {
        bill = unit * 1.5;
        printf("your bill is : %f", bill);
    }
    else if (unit > 200 && unit <= 300)
    {
        bill = unit * 2;
        printf("your bill is : %f", bill);
    }
    else
    {
        bill = unit * 5;
        printf("your bill is : %f", bill);
    }

    return 0;
}