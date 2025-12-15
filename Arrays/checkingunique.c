#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n = 7;
    int arr[n] = {1, 3, 6, 1, 1, 2, 3};
    for (int i = 0; i <= n - 1; i++)
    {
        bool flag = false;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }
        if (flag == false)
        {
            printf("%d", arr[i]);
            break;
        }
    }
    return 0;
}