#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a & 4)
        printf("3rd bit is set to 1");
    else
        printf("3rd bit is not set to 1");
    return 0;
}