#include<stdio.h>
int main (){

int x1, y1 ,x2 , y2, x3,y3;
int Area;
printf("Enter coordinate of first point (x1,y1): ");
scanf("%d %d,&x1,&y1");
printf("enter coordinate of second point (x2,y2): ");
scanf("%d %d,&x,&y2");
printf("enter coordinate of third point (x3,y3): ");
scanf("%d %d,&x3,&y3");
Area = (x1*(y1-y3)+x2*(y3-y1))+x3*(y1-y2);
if (Area == 0){
    printf("the point is collinear");
}
else{
    printf("the point is non collinear");
}

    return 0;
}

