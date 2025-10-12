#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int vowels = 0, consonants = 0;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        // Check if character is a letter
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) { 
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
                ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
                vowels++;
            } else {
                consonants++;
            }
        }
        
    }  
    printf("Vowels=%d,Consonants=%d\n", vowels, consonants);

    return 0;
}
