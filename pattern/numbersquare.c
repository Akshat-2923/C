#include <stdio.h>
int main()
{
    int a , b;
    printf("Enter the length of rectangle:");
    scanf("%d", &a);
    printf("Enter the bredth of rectangle:");
    scanf("%d", &b);
    for (int i = 1; i <= b; i++)
    {
        printf("\n");
        for (int j = 1; j <= a; j++)
        {
            printf(" %d ",j);
        }
    }
    return 0;
}