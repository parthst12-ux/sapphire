
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "password.h"

int main() {
    char choice[16];
    char pwd[512];
    int score;
    FILE *f;

    printf("=== Password Checker Project ===\n");

    while (1) {
        printf("\nMenu:\n");
        printf("1. Check password (manual)\n");
        printf("2. Check passwords from file (input.txt)\n");
        printf("3. Show history (history.txt)\n");
        printf("4. Exit\n");
        printf("Enter choice: ");

        if (!fgets(choice, sizeof(choice), stdin)) break;

        if (choice[0] == '1') {
            printf("Enter password: ");
            if (!fgets(pwd, sizeof(pwd), stdin)) continue;
            trim_newline(pwd);
            score = evaluate_password(pwd);
            print_result(pwd, score);
            append_history(pwd, score);

        } else if (choice[0] == '2') {
            f = fopen("input.txt", "r");
            if (!f) {
                printf("Could not open input.txt\n");
                continue;
            }
            while (fgets(pwd, sizeof(pwd), f)) {
                trim_newline(pwd);
                if (strlen(pwd) == 0) continue;
                score = evaluate_password(pwd);
                print_result(pwd, score);
                append_history(pwd, score);
            }
            fclose(f);

        } else if (choice[0] == '3') {
            show_history();

        } else if (choice[0] == '4') {
            printf("Exiting program.\n");
            break;

        } else {
            printf("Invalid choice.\n");
        }
    }
    return 0;
}
