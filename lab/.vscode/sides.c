#include<stdio.h>
int main (){
    int a,b,c;
    printf("enter three side of triangle:");
    scanf("%d %d %d" ,&a,&b,&c);
    if ((a+b >c) && a+c >b && b+c >a){
        if(a == b && b == c){
     printf("Equilateral\n");
        }
        else if (a == b || b == c || a == c){
            printf("isoceles\n");
        }
        else{
            printf("scalene\n");
        }
    
    }
    else{
        printf("not a valid triangle\n");
    
    }
    return 0;

}
       

        
    


