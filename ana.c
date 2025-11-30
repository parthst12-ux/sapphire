#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int i, j, count = 0;
    fgets(s1, 100, stdin);
    fgets(s2, 100, stdin);
   
    for(i = 0; s1[i] != '\0'; i++)
        if(s1[i] == '\n') s1[i] = '\0'; 

    for(i = 0; s2[i] != '\0'; i++)
        if(s2[i] == '\n') s2[i] = '\0';
   
    for(i = 0; s1[i] != '\0'; i++) {
        for(j = 0; s2[j] != '\0'; j++) {
            if(s1[i] == s2[j]) {
                s2[j] = '0'; 
                count++;
                break;
            }
        }
    }

    int len1=0, len2=0;
    for(i=0; s1[i]!='\0'; i++) len1++;
    for(i=0; s2[i]!='\0'; i++) if(s2[i]!='0') len2++;

    if(count == len1 && len2==0)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}
