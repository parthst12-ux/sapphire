#include <stdio.h>

void printstring(char *arr);
int countlength(char *arr);

int main() {
    char name[100];

    printf("Enter a string: ");
    fgets(name, 100, stdin);

    printf("You entered: ");
    printstring(name);

    printf("The length of the string is: %d\n", countlength(name));

    return 0;
}

int countlength(char *arr) {
    int count = 0;
    while (*arr != '\0') {
        if (*arr != '\n')
            count++;
        arr++;
    }
    return count;
}

void printstring(char *arr) {
    while (*arr != '\0') {
        printf("%c", *arr);
        arr++;
    }
    printf("\n");
}

