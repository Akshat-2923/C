#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number :");
    scanf("%d", &num);
    int rnum = 0;
    while (num != 0)
    {
        rnum = rnum * 10;
        rnum = rnum + (num % 10);
        num = num / 10;
    }
    printf("reverse of the number :%d", rnum);

    return 0;
}