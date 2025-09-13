#include<stdio.h>
int main () {
    float weight,height,bmi;
    printf("enter weight in (kgs):");
    scanf("%f",&weight);
    printf("enter height(in meter):");
    scanf("%f",&height);
      
    bmi = (weight / height * height);
    printf("\n your bmi is : %2f\n,bmi");
    if(bmi < 15){
        printf("category : stravation\n");
  
    }
    else if(bmi > 15.1 && bmi <= 17.5){
        printf("category : anoerexic\n");
    }
    else if(bmi >= 17.6 && bmi <= 18.5){
        printf("category : underweight\n");
    }
    else if(bmi >= 18.6 && bmi <= 24.9){
        printf("category: ideal\n");
    }
    else if(bmi >=25 && bmi <= 25.9){
        printf("category : overweight\n");
    }
    else if (bmi >= 30 && bmi <= 39.9){
        printf("category : obese\n");
    }
    else if(bmi >= 40){
        printf("category : morbidly obese\n");

    }
    else{
        printf("category : invalid range\n");
    }
    return 0;
   
}




