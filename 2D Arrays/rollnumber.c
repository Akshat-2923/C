#include <stdio.h>
int main()
{
    int r = 4, c = 2;
    int arr[4][2] = {{1, 76}, {2, 89}, {3, 98}, {4, 67}};
    char *brr[] = {"Akshat", "Ram", "Shyam", "Karan"};
    for (int i = 0; i < r; i++)
    {
        printf("%s",brr[i]);
        for (int j = 0; j < c; j++)
        {
            printf(" %d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}