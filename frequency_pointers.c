#include<stdio.h>

void frequency (int * arr,int size);

int main(){
    int n,i;
}
printf("enter the number:");
scanf("%d", &n);
int arr[n];
printf("enter %d elements:\n",n);
for(i = 0;i<n;i++){
    scanf("%d" , (arr + i));
}
printf("frequency of each element:\n");
return 0;