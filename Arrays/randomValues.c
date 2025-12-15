#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int arr[100];
    srand(time(0));//gives new values each time we rum the program
    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand() % 100 + 1; // gives random values to the array
        printf("%d ", arr[i]);
    }
}