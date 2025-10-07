#include<stdio.h>
int main ()
{
int n,i,num;
int count = 0;
printf("%d enter no. of element of array:\n");
scanf("%d,&n");

int arr[n];
printf("enter the element of the array:\n");
for (i=0;i<n;i++){
    scanf("%d", &arr[i]);

}
printf("enter the no. to find frquency:\n");
scanf("%d", &num);
for(i=0;i<n;i++){
    if(arr[i]==num)
    count++;

}
printf("the frequency of %d=%d\n",num,count);

return 0;
}