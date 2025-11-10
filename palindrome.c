#include<stdio.h>

int main(){
    char str[100];
    int i = 0 , j = 0 , isplaindrome = 1;

    printf("enter a string:");
    fgets(str , sizeof(str) , stdin);

    while(str[j] != '\0'){
        j++;
    }
    j--;
    while(i<j){
        if(str[i] != str[j]){
            isplaindrome = 0;
            break;
        }
        i++;
        j--;
    }
    if(isplaindrome)
        printf("the string is palindrome\n");
    else
        printf("the string is not palindrome\n");
        
    return 0;

    }

