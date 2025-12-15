#include <stdio.h>

int main()
{
    int arr[5];
    int sum = 0;

    printf("Enter 5 numbers:\n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of all elements = %d", sum);
    return 0;
}
