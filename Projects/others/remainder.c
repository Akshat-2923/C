#include<stdio.h>
int main(){
    int dividend, divisor;
    printf("Enter Dividend :");
    scanf("%d", &dividend);
    printf("Enter Divisor :");
    scanf("%d", &divisor);
    if(divisor == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }
    int remainder = dividend % divisor;
    printf("Remainder: %d\n", remainder);
    if(remainder < 0) {
        remainder += divisor;
    }
    
    return 0;
}

