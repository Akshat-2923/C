#include<stdio.h>
int main(){
    float pi = 3.1415;
    float r ;
    printf("Enter Radius :");
    scanf("%f",&r);
    float v = 4*pi*r*r*r/3;
    printf("The volunme is %f",v);
    return 0;

}