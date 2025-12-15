#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int r, c, m, n;
    printf("Enter the number of rows and col for matrix 1: ");
    scanf("%d %d", &r, &c);

    printf("Enter the number of rows and col for matrix 2: ");
    scanf("%d %d", &m, &n);
    
    int arr[r][c];
    int brr[m][n];
    int crr[r][n];

    if (c != m)
    {
        printf("Error: number of columns of matrix1 (%d) must equal number of rows of matrix2 (%d)\n", c, m);
        return 1;
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            brr[i][j] = rand() % 10;
        }
    }
    for (int i = 0; i < r; i++)
        for (int j = 0; j < n; j++)
            crr[i][j] = 0;

    printf("First Matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Second Matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    printf("Multiplication Matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < c; k++)
            {
                crr[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
