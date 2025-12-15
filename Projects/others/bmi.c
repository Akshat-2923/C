#include<stdio.h>
int main(){
    float w ,h;
    printf("Enter your weight(in kg) :");
    scanf("%f",&w);
    printf("Enter your height(in meter) :");
    scanf("%f",&h);
    char gender;
    float x = h*h;
    float bmi = w/x;
    printf("Your BMI is : %f \n" ,bmi);
   
   if (bmi <= 18.5) {
        printf("Underweight :");
        printf(" Nutritional deficiency, weak immunity");

    }
    else if (bmi > 18.5 && bmi <= 24.9) {
        printf("Normal weight : Low Risk");
    }
    else if (bmi > 24.9 && bmi <= 29.9) {
        printf("Overweight : Moderate risk of chronic diseases");
    }
    else if (bmi > 29.9 && bmi <= 34.9) {
        printf("Obesity(Class I) : High Risk");
    }
    else if (bmi > 34.9 && bmi <= 39.9) {
        printf("Obesity(Class II) : Very High Risk");
    }
    else { // bmi > 39.9
        printf("Obesity(Class III) : Extremely High Risk");
    }
return 0;
}