#include<stdio.h>
int main ()
{
int num = 1;
int i,j;
for (i = 1; i<=3; i++){

for(j = 1; j<=i; j++){
    printf("%d",num);
    num++;
} 
 printf("\n");
}
return 0;
}