#include<stdio.h>

void printlength(char arr[]);
int countlength(char arr[]);

int main(){
    char firststr[100] = "hello";
    char secondstr[] = "world!";
    strcat(firststr, secondstr);
    puts(firststr);
}