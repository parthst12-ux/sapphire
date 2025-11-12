#include<stdio.h>

union Address {
    char name[50];
    char home_adress[100];
    char hostel[50];
    char city[50];
    char state[50];
    char zip[10];
};
int main() {
    union Address addr;

    printf("Enter Name: ");
    scanf(" %[^\n]", addr.name);
    printf("Name: %s\n", addr.name);

    printf("Enter Home Address: ");
    scanf(" %[^\n]", addr.home_adress);
    printf("Home Address: %s\n", addr.home_adress);

    printf("Enter City: ");
    scanf(" %[^\n]", addr.city);
    printf("City: %s\n", addr.city);

    printf("Enter State: ");
    scanf(" %[^\n]", addr.state);
    printf("State: %s\n", addr.state);

    printf("Enter ZIP Code: ");
    scanf(" %[^\n]", addr.zip);
    printf("ZIP Code: %s\n", addr.zip);

    return 0;
}