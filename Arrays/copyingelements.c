#include <stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int brr[5];
    for (int i = 0; i <= 4; i++)
    {
        brr[i] = arr[i];
    }
    for (int j = 0; j <= 4; j++)
    {
        printf("%d ", brr[j]);
    }
    return 0;
}