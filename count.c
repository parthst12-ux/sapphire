#include<stdio.h>
int main ()
{
int n;
scanf("%d , &n");
int arr[n];
for(int i = 1; i<n; i++){
    scanf("%d", arr[i]);

}
    int pos = 0, neg = 0, zero = 0;

 for(int i = 1; i<n; i++){
    if(arr[i] > 0)
     pos++;
    else if(arr[i] < 0)
    neg++;
    else
    
      zero++;

 }
 printf("pos = %d , neg = %d , zero = %d\n");



return 0;
}