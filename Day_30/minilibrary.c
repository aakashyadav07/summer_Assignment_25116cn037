#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book b[3];
    int i;

    printf("Enter Book Details\n");

    for(i = 0; i < 3; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Title: ");
        scanf("%s", b[i].title);

        printf("Author: ");
        scanf("%s", b[i].author);
    }

    printf("\nLibrary Records\n");

    for(i = 0; i < 3; i++) {
        printf("\nBook ID : %d", b[i].id);
        printf("\nTitle   : %s", b[i].title);
        printf("\nAuthor  : %s\n", b[i].author);
    }

    return 0;
}