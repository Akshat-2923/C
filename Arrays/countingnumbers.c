#include <stdio.h>
int main()
{
    int n = 303;
    int arr[5] = {301, 302, 303, 304, 305};
    int count = 0;
    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] > n)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}