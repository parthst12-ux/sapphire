#include<stdio.h>
int main ()
{
int n,i,sum = 0;
int arr[100];
scanf("%d", &n);
for(i = 0; i<n;i++){
    scanf("&d", &arr[i]);

for(i = 0;i<n;i++){
    sum = sum + i;

}
printf("%d", sum);
}
return 0;
}