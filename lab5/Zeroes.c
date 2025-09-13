#include<stdio.h>
int main ()
{
int num, pos=0, neg=0 , zeores=0;
char choice;
 
do
{
    printf("Enter a number: ");
    scanf("%d" , &num);
    if (num > 0)
     pos++;
    elseif (num < 0)
     neg++;
     else
     zero++;
     printf("do you want continue (y/n)?");
     scanf("%c", &choice);
}



 while (choice == 'y'|| choice == 'Y');
 printf("positive number\n:%d",pos);
 printf("negative number\n:%d",neg);
 printf("zeores\n:%d",zero);

return 0;
}