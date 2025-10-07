#include<stdio.h>
int main ()
{
int n,i,even=0,odd=0,pos=0,neg=0;

printf("enter no. of elements of the array:");
scanf("%d,&n");

int arr[n];
printf("now enter the elments of array:");
for (i=0;i<n;i++){
    scanf("%d,&arr[i]");
    if(arr[i]%2==0)
    even++;
    else
    odd++;

}
printf("even number = %d\n", even);
printf("odd number = %d\n", odd);
for(i=0;i<n;i++){
    if(arr[i]>0)
    pos++;
    else
    neg++;
}
printf("postive integer: %d\n",pos);
printf("negative integer: %d\n" ,neg);
return 0;
}