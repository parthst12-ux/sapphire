#include <stdio.h>
 
int main(){
    char str[100];
    int count = 0;

    printf("enter the string:");
    fgets(str,sizeof(str) , stdin);

    while(str[count] != '\0'){
        count++;
    }
    if(str[count-1] == '\n'){
        count--; // Exclude the newline character from the count
    }

    printf("number of characters in a string: %d\n", count);
    return 0;

}