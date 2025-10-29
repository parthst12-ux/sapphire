#include<stdio.h>

int main(){
    float price = 100;
    float *ptr = &ptr;
    printf("ptr = %u\n" ,ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);
    return 0;
    
}