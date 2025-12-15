#include <stdio.h>
int main()
{
    float distance;
    printf("Enter The distance between two cities (in kilometer) :");
    scanf("%f", &distance);
    float inches = distance * 39370.08;
    printf("Your Distance in Inches is : %.1f inches\n", inches);
    float meter = distance * 1000;
    printf("Your Distance in Meters is : %.1f meter \n ", meter);
    float feet = distance * 3280.84;
    printf("Your Distance in feet is : %.1f feet \n", feet);


    return 0;
} 