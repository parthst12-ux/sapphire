 #include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    // Convert each lowercase character to uppercase
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); 
        }
        i++;
    }
    // Print  uppercase string
    printf("%s\n", str);

    return 0;
}
