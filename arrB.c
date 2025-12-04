/*
algorithm:
1. define a structure book with ID,title , author and year.
2. declare an array of 5 structures.
3. take input for each field using fgets and scanf.
4. store records in the structure.
5. display all stored records.
*/
#include <stdio.h>
#include <string.h>

struct book {
    int id;
    char title[100];
    char author[50];
    int year;
};
     int main() {
       int n;
     printf("How many books you want to enter? ");
      scanf("%d", &n);
         // Array of structures to hold multiple books
      struct book b[n];  
       for(int i = 0; i < n ; i++) {
        printf("Enter book ID: ");
        scanf("%d", &b[i].id);
        //getchar(); // remove leftover newline
        printf("\nBook %d\n", i + 1);  // gets char need in this function to remove newline char left by previous scanf

        printf("Enter author name: ");
        scanf("%s" ,b[i].author);    // Structure to store book information

        printf("Enter book title: ");
        scanf("%s" ,b[i].title);

        printf("Enter publication year: ");
        scanf("%d", &b[i].year);
        //getchar(); // remove leftover newline
    }

    printf("\n BOOK RECORDS\n");
    for(int i = 0; i < 5; i++) {
        printf("\nBook %d", i + 1);
        printf("\nAuthor: %s", b[i].author);
        printf("Title : %s", b[i].title);
        printf("Year  : %d\n", b[i].year);
    }
    printf("\nThank you for using the program!\n");
    return 0;
}

