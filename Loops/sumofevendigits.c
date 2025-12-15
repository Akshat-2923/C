#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number :");
    scanf("%d", &num);
    int sum = 0;
    while (num != 0)
    {
        int lastdigit = num % 10;
        if (lastdigit % 2 == 0)
            sum = sum + lastdigit;
        else{
            printf("Number Doesn't Have any even digits,hence \n");
            break;
        }
        num = num / 10;
    }
    printf("sum of digits : %d", sum);

    return 0;
}