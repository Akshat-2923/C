#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);
    int sum = 0;
    while (num >= 10)
    {
        while (num != 0)
        {
            int lastdigit = num % 10;
            sum = sum + lastdigit;
            num = num / 10;
        }
        int digit = sum % 10;
        sum = sum / 10;
        sum = sum + digit;
    }
    return 0;
}
