#include <stdio.h>

int main() {
    char str[100];
    fgets(str, 100, stdin);

    char *p = str;
    while (*p != '\0') {
        if (*p != '\n')
            printf("%c\n", *p);
        p++;
    }
    return 0;
}
