#include<stdio.h>

int main(){
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;
    printf("differnce = %u\n", ptr-_ptr);
    _ptr = &age;
    printf("comparsion = %u\n" , ptr == _ptr);
    return 0;
}
