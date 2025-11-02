#include<stdio.h>

void printstring (char arr[]);

int main(){
    char fullname[100];
    scanf("%s", fullname);
    printf("your full name is %s\n", fullname);
    return 0;
}
void printstring(char arr[]) {
    for(int i = 0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}
