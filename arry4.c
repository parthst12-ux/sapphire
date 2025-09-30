#include<stdio.h>
int main ()
{
int n;
scanf("%d", &n);
int arr[n];
for(int i = 1; i<n;i++){
    scanf("%d", &arr[i]);

     int evenCount = 0;  int oddCount = 0;

     for(int i = 1; i<n; i++){
        if(arr[i] % 2 == 0)
        evenCount++;
     
     else 
        oddCount++;

     }
     printf("even = %d , odd = %d" , evenCount,oddCount);
}
return 0;
} 