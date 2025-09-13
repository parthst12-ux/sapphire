#include<stdio.h>
int main ()
{
    int num;
printf("enter a number:");
scanf("%d", &num);
 printf("multiplication table of %d:\n",num);
 for (int i=1 ; i<=10 ; i++){
    printf("%d * %d = %d\n", num , i , num *i);
 }

return 0;
}