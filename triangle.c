#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three sides of the triangle:");
    scanf("%d %d",&a,&b,&c);

    if((a+b>c) && (a+c>b) && (b+c>a)){

        if(a == b& b == c){
            printf("the triangle is equilateral.\n");
        
        }
        else if(a == b || b ==c ||a == c){
            printf("the triangle is isoceles.\n");
        }
            else {
                printf("the triangle is scalene.\n");
            }
    
            
            if ((a *a == b*b + c*c)||
            (b *b == a*a + c*c)||
            (c *c == a*a + b*b))
            print f("it is also a right angled triangle.\n");

        }
        else {
            printf("the triangle is not valid.\n");

        }
        return 0;
    }
}



   
     