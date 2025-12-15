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
        switch (sum = sum % 7)
    {
    case 0:
        printf("Sunday");
        break;
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thusday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("Saturday");
        break;

    default:
        break;
    }

    return 0;
}
