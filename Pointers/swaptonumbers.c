#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x; // temp = a;
    *x = *y;   // a = b;
    *y = temp; // b = temp -> b = a;
    return;
}
int main()
{
    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("The Value of a is %d\n", a);
    printf("The Value of b is %d\n", b);
    return 0;
}