#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    gets(sentence); 
    while (1) {
      
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0';
            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }

            j = 0; 
        }

        if (sentence[i] == '\0')
            break;

        i++;
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
