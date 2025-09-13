#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter three sides of the triangle: ");
    scanf("%d %d %d",&a,&b,&c);

    if((a+b>c) && (a+c>b) && (b+c>a)){
       printf("the triangle is valid"); }
        if(a == b && b == c){
            printf("the triangle is equilateral.\n");
        }
    
           else if(a == b || b == c || a == c)
        }
        else {
            printf("the triangle is scalene.\n");
        }
        
        if ((a*a == b*b + c*c) OR
            (b*b == a*a + c*c) OR
            (c*c == a*a + b*b)){
            printf("it is also a right angled triangle.\n");
        }
    
    else {
        printf("these sides do not form a valid triangle.\n");
    }
    
    return 0;





   
     