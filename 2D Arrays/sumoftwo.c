#include <stdio.h>
int main()
{
    int arr[2][2] = {{1, 2}, {3, 4}};
    int brr[2][2] = {{5, 6}, {7, 8}};
    printf("Matrix 1 is:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int l = 0; l < 2; l++)
        {
            printf("%d ", arr[i][l]);
        }
        printf("\n");
    }
    printf("\nMatrix 2 is:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int l = 0; l < 2; l++)
        {
            printf("%d ", brr[i][l]);
        }
        printf("\n");
    }
    printf("\nSum of Two is:\n");
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum = arr[i][j] + brr[i][j];
            printf("%d ", sum);
        }
        printf("\n");
    }
}