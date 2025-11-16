#include<stdio.h>

void printstring (char []);

int main(){

    char first name[] = "shradha";
    char second name[] = "khapra";
    printstring (first string);
    printstring (second string);
    return 0;
}
void printstring (char arr[]){
    for(int i=0 ; arr[i] != '\0'; i++){
        printf("%c" , arr[i]);

    }
    printf("\n");   
}

