#include<stdio.h>
int main(){
    int x = 10 , y = 30;
    //Arithmatic operations
    printf("Sum: %d\n", x + y);
    printf("Difference: %d\n", x - y);
    printf("Product: %d\n", x * y);
    printf("Quotient: %d\n", x / y);
    //rational operations
    printf("Rational Sum: %d/%d\n", x + y, 1);
    printf("Rational Difference: %d/%d\n", x - y, 1);
    printf("Rational Product: %d/%d\n", x * y, 1);
    printf("Rational Quotient: %d/%d\n", x / y, 1);
    //Logical operations
    printf("Logical AND: %d\n", x && y);
    printf("Logical OR: %d\n", x || y);
    printf("Logical NOT: %d\n", !x);
    return 0;
}