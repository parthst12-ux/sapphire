#include<stdio.h>

int main(){
    int marks[]={10,20,30,40,50};
    int i = 0;
    int *ptr= marks;

    while(i<4){
     printf("the address of array at index %d is %u",i,*(ptr+i));
     printf("the value of array at index %d is %d\n",i,*(ptr+i));
     i++;   
    }
    return 0;
}

