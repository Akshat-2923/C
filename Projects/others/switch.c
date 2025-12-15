#include <stdio.h>
int main()
{
    int x, y;
    char op;
    printf("Enter First Num :");
    scanf("%d", &x);

    printf("Enter second Num :");
    scanf("%d", &y);

    printf("Enter the Operator (+,*,-,/) :\n");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("Result :%d", x + y);
        break;
    case '*':
        printf("Result :%d", x * y);
        break;

    case '-':
        printf("Result :%d", x - y);
        break;
    case '/':
        if (y != 0)
        {
            printf("Result :%.2f", (float)x / (float)y);
        }
        else
        {
            printf("Division by zero is invalid");
        }
        break;
    default:
        printf("Invalid operator entered.\n");
        break;
    }

    return 0;
}