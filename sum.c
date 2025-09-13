#include<stdio.h>
int main ()
{
int num,sum = 0,digit;
printf("enter a number:");
scanf("%d,&num");
while (num > 0){
    digit = num % 10;
    num = num / 10;
    sum = sum + digit;
}
printf("sum of digits = %d\n",sum);

return 0;
}