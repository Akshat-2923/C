#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number :");
    scanf("%d", &x);
    if (x % 5 == 0 || x % 3 == 0)
    {
        printf("The Number is divisible by 3 or 5 \n");
        if (x % 15 != 0)
        {
            printf("The Number is not divisible by 15");
        }
        else
        {
            printf("The Number is divisible by 15");
        }
    }
    else
    {
        printf("The Number is not divisible by 3 or 5");
    }
   
}