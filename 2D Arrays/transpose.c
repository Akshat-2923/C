#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int r, c;
    printf("Enter number of rows and col: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];
    printf("Enter The Elements of matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            arr[i][j] = rand() % 11; // rand() %(max - min + 1) + 1 // range
    printf("Original matrix:\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    printf("Transpose matrix:\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}
