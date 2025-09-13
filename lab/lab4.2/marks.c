#include<stdio.h>
int main ()
{
float num ;
printf("enter the percentage :");
scanf("%f", &num);
if(num >= 90 && num <= 100){
printf("grade A\n");
}
else if(num >= 75  && num <90){
printf("grade b\n");
}
else if(num >=50 && num < 75){
printf("grade c\n");
}
else if(num >= 30 && num <50){
printf("grade d\n");
}
else{
    printf("grade f\n");
}

return 0;
}