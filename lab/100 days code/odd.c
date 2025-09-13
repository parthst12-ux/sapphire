#include<stdio.h>
int main ()
{
int n ,digit;
int product = 1;

printf("enter a number:");
scanf("%d" , &n);
while(n > 0 ){
    digit = n % 10;
    if(digit % 2 != 0){
        product = product * digit;
    }
    n = n / 10;

}
printf("product of odd digits = %d\n",product);
return 0;
}