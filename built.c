#include <stdio.h>

int main() {
    char name[200];
    fgets(name, 200, stdin);

    int i = 0;

    printf("%c.", name[0]);

 
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != '\0' && name[i+1] != '\n') {
            int j = i + 1;
            int space = 0;
            while (name[j] != '\0' && name[j] != '\n') {
                if (name[j] == ' ') {
                    space = 1;
                    break;
                }
                j++;
            }
            if (space == 1) {
                printf("%c.", name[i+1]);
            } 
            else {    
                printf(" ");
                printf("%s", &name[i+1]);
                break;
            }
        }
    }

    return 0;
}
