#include<stdio.h>
int main(){
    int a = 5;
    int* x = &a;//int* stores address
    // VVIP -->*x = 6; // a is changes to 6
    int** y = &x; // int** -> int* ka address store karta hai
    printf("%p\n",x); // %p prints address of the var
    printf("%p\n",&x); // & - address specifier
    printf("%d\n",*x);// *x - pointing towards the value stored
    printf("%p\n",y); 
    return 0;

}
