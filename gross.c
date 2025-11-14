#include <stdio.h>

struct Employee {
    char name[50];
    float basic, gross;
};

int main() {
    struct Employee emp[100];
    int n, i;
    float da;

    printf("How many employees? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);
        printf("Basic Pay: ");
        scanf("%f", &emp[i].basic);

        da = 0.52 * emp[i].basic;
        emp[i].gross = emp[i].basic + da;
    }
    printf("\nEmployee Name and Gross Salary:\n");

    for(i = 0; i < n; i++) {
        printf("\nName: %s", emp[i].name);
        printf("\nGross Salary: %.2f\n", emp[i].gross);
    }

    return 0;
}
