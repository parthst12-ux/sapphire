#include<stdio.h>
int main ()
{
int limit = 5000;
int a,b,c,d;
printf("Ramanujan number%d:\n",limit);
for(a =1; a *a * a < limit;a++){
    for(b=a;b * b * b < limit;b++){
        int sum1 = a*a*a + b*b*b;


        for(c = a+1; c *c *c <limit;c++){
        for(d = c;d * d * d < limit;d++){
            int sum2 = c * c *c + d *d *d ;
            if (sum1 == sum2 && sum1 <= limit){
                printf("%d = %d^3+%d^3 = %d^3+%d\n",sum1,a,b,c,d)
             }
           }
        }
    }

}
 
return 0;
}