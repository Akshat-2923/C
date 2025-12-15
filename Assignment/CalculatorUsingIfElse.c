#include <stdio.h>
int main()
{
    char operator;
    double x, y;
    printf("Enter the Operator (+,-,*,/):");
    scanf("%s", &operator);
    printf("Enter First Number :");
    scanf("%lf", &x);
    printf("Enter Second Number :");
    scanf("%lf", &y);
    if (operator == '+')
    {
        printf("Answer : %lf", x + y);
    }
    else if (operator == '-')
    {
        printf("Answer : %lf", x - y);
    }
    else if (operator == '*')
    {
        printf("Answer : %lf", x * y);
    }
    else if (operator == '/')
    {
        printf("Answer : %lf", x / y);
    }
    else if (y == 0)
    {
        printf("Division by 0 is not allowed");
    }
    else
    {
        printf("Enter the valid operator");
    }

    return 0;
}
