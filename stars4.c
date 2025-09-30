#include<stdio.h>
int main ()
{
int n = 5;
for(int i = n; i>=n; i--){
    for(int j = i; j<=n; j++){
        printf("%d",j);
    }
    printf("\n");

}
return 0;
}