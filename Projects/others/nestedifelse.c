#include<stdio.h>
int main(){
    float x;
    printf("Enter your total marks :");
    scanf("%f",&x);
    if(x>=90){
        puts("Your Grade is :A");
    }
    else if (x>=80)
    {
        puts("Your Grade is :B");
    }
    else if (x>=70)
    {
        puts("Your Grade is :C");
    }
    else if (x>=60)
    {
        puts("Your Grade is :D");
    }
    else{
        puts("Your Grade is :F");
    }
    


    return 0;
}