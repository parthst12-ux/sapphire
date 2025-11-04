

#include <stdio.h>

struct Passport
{
    struct Name
    {
        char first_name[50];
        char middle_name[50];
        char last_name[50];
    } my_name;

    int holder_age;
    int passport_number;
    char holder_nationality[50];
};

int main()
{
    struct Passport my_passport;

    // Assign values
    printf("Enter your first name: ");
    scanf("%49s", my_passport.my_name.first_name);

    printf("Enter your middle name: ");
    scanf("%49s", my_passport.my_name.middle_name);

    printf("Enter your last name: ");
    scanf("%49s", my_passport.my_name.last_name);

    printf("Enter your age: ");
    scanf("%d", &my_passport.holder_age);

    printf("Enter your passport number: ");
    scanf("%d", &my_passport.passport_number);

    printf("Enter your nationality: ");
    scanf("%49s", my_passport.holder_nationality);

    // Display the passport details
    printf("\n--- Passport Details ---\n");
    printf("Name: %s %s %s\n", my_passport.my_name.first_name,
                                 my_passport.my_name.middle_name,
                                 my_passport.my_name.last_name);
    printf("Age: %d\n", my_passport.holder_age);
    printf("Passport Number: %d\n", my_passport.passport_number);
    printf("Nationality: %s\n", my_passport.holder_nationality);

    return 0;
}