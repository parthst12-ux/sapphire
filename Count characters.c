#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    // taking string
    printf("Enter a string: ");
    gets(str); 
    // counting characters
    while (str[count] != '\0') {
        count++;
    }
    // display result
    printf("%d\n", count);

    return 0;
}
