#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("The Value of a is %d\n", a);
    printf("The Value of b is %d\n", b);
    return 0;
}