
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "password.h"
void intro_screen() {
    system("cls"); 

    printf("===============================================================\n");
    printf("                    PASSWORD CHECKER PROJECT                   \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf(" Project Name : Password Strength Checker in C\n");
    printf(" Created By   : Parth Singh\n");
    printf(" SAP ID       : 590021885\n");
    printf(" Batch        : B - 9\n");
    printf(" Year         : 2025\n");
    printf(" Submitted To : Pankaj Badoni Sir\n");
    printf(" College      : UPES Dehradun\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf(" Press Enter to continue...\n");
    printf("...................................................................\n");
    getchar(); 
    getchar(); 
}

int main() {
     intro_screen(); 
    char choice[16];         // local variable to store user choice
    char pwd[512];
    int score;
    FILE *f;

    printf("=== Password Checker Project ===\n");

    while (1) {
        printf("\nMenu:\n");
        printf("1. Check password (manual)\n");               // user types password manually
        printf("2. Check passwords from file (input.txt)\n"); // program reads passwords from input.txt
        printf("3. Show history (history.txt)\n");            // shows previously checked passwords
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

        }
         else if (choice[0] == '2') {          // to check multiple passwords from file
            f = fopen("input.txt", "r");         // open file in read mode
            if (!f) {
                printf("Could not open input.txt\n");
                continue;                         // skips back to menu
            }
            while (fgets(pwd, sizeof(pwd), f)) {
                trim_newline(pwd);               // remove newline character at the end
                if (strlen(pwd) == 0) continue;
                score = evaluate_password(pwd);    // calculate password score
                print_result(pwd, score);         // dipslay strength result
                append_history(pwd, score);       // save to history file
            }
            fclose(f);
        }
         else if (choice[0] == '3') {
            show_history();
        }
         else if (choice[0] == '4') {
           printf("\n--------------------------------------\n");
    printf(" Thank you for using my password checker!\n");
    printf("--------------------------------------\n");
    break;
        } 
        else {
            printf("Invalid choice.\n");
        }
    }
    return 0;
}
