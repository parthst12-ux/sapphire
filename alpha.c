#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0}; 
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a'; 
        freq[index]++;

        if (freq[index] == 2) { 
            printf("First repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No repeating character found.\n");
    return 0;
}
