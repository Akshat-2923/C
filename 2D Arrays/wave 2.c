#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));

    int r, c;
    printf("Enter the number of rows and col: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
    printf("----- Original form -----\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("----- Wave form -----\n");
    for (int i = 0; i < r; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = c - 1; j >= 0; j--)
            {
                printf("%d ", arr[j][i]);
            }
        }
        else
        {
            for (int j = 0; j < c; j++)
            {
                printf("%d ", arr[j][i]);
            }
        }
    }
    return 0;
}