#include<stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    float price;
};
void printBook(struct Book b){
    printf("\nBook Details:\n");
    printf("ID: %d\n", b.id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}
int main() {
    struct Book b1;
    printf("Enter Book ID: ");
    scanf("%d", &b1.id);
    printf("Enter Book Title: ");
    scanf(" %[^\n]", b1.title);
    printf("Enter Book Author: ");
    scanf(" %[^\n]", b1.author);
    printf("Enter Book Price: ");
    scanf("%f", &b1.price);
    printBook(b1);
    return 0;
}
