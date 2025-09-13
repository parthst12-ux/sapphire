#include<stdio.h>
int main ()
{
int i,j,num =6;
for(int i=1; i <=3; i++){
    for(j = 1;j <= i; j++){
        printf("%d",num);
    }
    printf("\n");
}
return 0;
}