#include <stdio.h>
#include <string.h>
int main()
{
    char arr[5] = {'a','b','c','d','e'};
    printf("%c",arr[3]);
    printf("%p",arr[0]);
    printf("%p",arr[1]);
    printf("%p",arr[2]);
    printf("%p",arr[3]);
    printf("%p",arr[4]);
    return 0;
}