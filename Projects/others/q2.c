#include<stdio.h>
int main(){
    float x ;
    printf("Enter your decimal number ; ");
    scanf("%f",&x);
    int y;
    y = x;
    printf("This is the fractional part :%f",x-y);
    return 0;
} 