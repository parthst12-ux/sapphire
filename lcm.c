#include<stdio.h>
int main ()
{
int a, b ,gcd ,lcm ,i;
printf("enter two number:");
scanf("%d %d" ,&a,&b );
gcd = 1;
for ( i =1; i<=a && i<=b; i++){
    if (a %i == 0 && b % i == 0){
        gcd = i;
    
    }

}
lcm = (a * b) / gcd;
printf("LCM of %d and %d is %d\n", a,b,lcm);

return 0;
}