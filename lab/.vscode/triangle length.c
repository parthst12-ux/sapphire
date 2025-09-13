#include<stdio.h>
int main ()
{
int a,b,c ;
printf("enter three side of triangle:");
scanf("%d %d %d" ,&a,&b,&c);
if ((a+b >c) && (a+c >b) && (b+c >a)){
    if (a == b && b == c){
        printf("equilateral\n");
    }
    else if(a == b || b == c || a == c){
        printf("isosceles\n");
    }
    else{
        printf("scalene\n");
    }
}  
 else{
    printf("no")
 }

     
        
    }
}

return 0;
}