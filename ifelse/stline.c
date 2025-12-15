#include <stdio.h>
int main()
{
    int x1, x2, x3;
    int y1, y2, y3;
    float m1, m2;
    printf("Enter First point :");
    scanf("%d %d", &x1, &y1);
    printf("Enter Second point :");
    scanf("%d %d", &x2, &y2);
    printf("Enter Third point :");
    scanf("%d %d", &x3, &y3);
    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2);
    if (m1 == m2)
    {
        printf("Slope Match\n");
        printf("All the points lie on a straight line");
    }
    else
    {
        printf("Slope do not Match\n");
        
        printf("All the points do not lie on a straight line");
    }

    return 0;
}