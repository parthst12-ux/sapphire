#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);  // Input string (without spaces)

    int len = strlen(str);

    // Swap characters from both ends
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("%s\n", str);  // Output the reversed string

    return 0;
}

