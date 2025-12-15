#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year :");
    scanf("%d", &year);
    if (year % 4 == 0 || year % 400 == 0)
    {
        printf("The given year is Leap year");
    }
    else
    {
        printf("The given year is ordinary year");
    }
    return 0;
}