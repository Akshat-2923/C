#include<stdio.h>
int main() {
    float x1;
    printf("Enter first subject marks: ");
    scanf("%f", &x1);
    float x2;
    printf("Enter second subject marks: ");
    scanf("%f", &x2);
    float x3;
    printf("Enter third subject marks: ");
    scanf("%f", &x3);
    float x4    ;
    printf("Enter fourth subject marks: "); 
    scanf("%f", &x4);
    float x5;
    printf("Enter fifth subject marks: ");  
    scanf("%f", &x5);

    float p = (x1+x2+x3+x4+x5)/5;
    printf("Percentage Marks : %f ",p);
    return 0;
}