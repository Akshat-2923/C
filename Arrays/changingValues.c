#include <stdio.h>
int main()
{
    int arr[5] = {301, 302, 303, 304, 305};
    for (int i = 0; i <= 4; i++)
    {
        if (i == 0 || i % 2 == 0)
        {
            arr[i] = arr[i] + 10;
            printf("%d ", arr[i]);
        }
        else
        {
            arr[i] = 2 * arr[i];
            printf("%d ", arr[i]);
        }
    }
    return 0;
}