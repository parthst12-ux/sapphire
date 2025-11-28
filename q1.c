#include <stdio.h>
#include <string.h>


void REVERSE(char str[]) {
    int i = 0, j;
    char temp;

    j = strlen(str) - 1;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    /* reads a line including spaces */
    fgets(str, sizeof(str), stdin);

    /* remove trailing newline if present */
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    REVERSE(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
