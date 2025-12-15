#include<stdio.h>
int main(){
    int x;
    printf("Enter three digit num :");
    scanf("%d",&x);
    if (x>99 && x<1000)
    {
        printf("The number is three digit number \n");
    }
    else if (x<99)
    {
        printf("The number is two digit number \n");
        printf("Please Enter a three digit number");

    }
    else if (x>999 && x<10000)
    {
        printf("The number is four digit number \n");
        printf("Please Enter a three digit number");

    }
    else{
        printf("Please Enter a three digit number");
    }
    return 0;
} 