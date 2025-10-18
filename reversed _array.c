#include<stdio.h>

int main(){

int arr[5];
int i;
printf("enter the number:");

for(i = 0;i<5;i++){
   scanf("%d", &arr[i]);

}
printf("revesed array:");
for(i = 0;i>=0; i++){
    printf("%d", arr[i]);
}
return 0;
  
}