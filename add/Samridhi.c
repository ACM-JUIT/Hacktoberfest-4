#include <stdio.h>
int main()
{
    float h, w, BMI;

    printf("Enter height in meter:\n");
    scanf("%f", &h);

    printf("Enter weight in kg:\n");
    scanf("%f", &w);

    BMI = w / (h * h);

    printf("Your Body Mass Index(BMI) is %.1f\n", BMI);

     if(BMI<18.5){
        printf("You are Underweight");
    }
    else if(BMI >= 18.5 && BMI <= 24.9){
        printf("You are Healthy and your weight is Normal");

    }
    else if(BMI >= 25 && BMI <= 29.9){
         printf("You are Overweight");
    }
    else if(BMI >= 30)
    {
        printf("You are Obese");
    }
    else{
        printf("Wrong entry");
    }
    return 0;
    }
