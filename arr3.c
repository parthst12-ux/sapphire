#include<stdio.h>
int main ()
{
int n,i;
int arr[100];
int max,min;
scanf("%d", &n);

for(i = 0;i<n;i++){
    scanf("%d", arr[i]);
    max = arr[0];
    min = arr[0];
    for(i = 0;i<n;i++){
    if(arr[i] > max){
        max = arr[i];

    }
    if(arr[i] < min){
        min = arr[i];

    }

    }
    printf("Max=%d,Min=%d", max,min);
}
return 0;
}