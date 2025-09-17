#include<stdio.h>
int main ()
{
 int n = 5;

  // upper half
  for(int i = 1; i <= n; i++){
    printf("\n");
    for(int j = 1; j <= 2 *n-1; j++){
        printf("*");
    }
    printf("\n");

  }
  // lower half
  for(int i = n-1; i >= n; i--){
    
    for(int j = 1; j <= 2 * n-1; j++){
        
    }
    printf("\n");
  }



return 0;
}