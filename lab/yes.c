#include<stdio.h>
int main(){
    float length,breadth,area;

    // input
    printf("Enter length of rectangle:");
    scanf("%f",&length);
    printf("Enter breadth of rectangle:");
    scanf("%f",&breadth);

      // process
      area = length*breadth;

      // Output
      printf("Area of rectangle = %.2f\n",area);
      return 0;
}