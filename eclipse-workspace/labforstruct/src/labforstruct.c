/*
 ============================================================================
 Name        : labforstruct.c
 Author      : ImangaliKobey
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


struct Book {
    char title[200];
    char author[100];
    int isbn;
    int copies;
};

int main() {
    struct Book library[100];//creating array to saving many books
    int b_count = 0;

    int choice;

    while (1) {
        printf("\nLibrary Management System\n");
        printf("1. Add a new book\n");
        printf("2. Check book availability\n");
        printf("3. Borrow a book\n");
        printf("4. Return a book\n");
        printf("5. Display all books\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
        	struct Book n_book;
            printf("Enter book title: ");
            scanf(" %[^\n]", n_book.title);
            printf("Enter author name: ");
            scanf(" %[^\n]", n_book.author);
            printf("Enter ISBN: ");
            scanf("%d", &n_book.isbn);
            printf("Enter number of copies: ");
            scanf("%d", &n_book.copies);
            library[b_count] = n_book;
            b_count++;
            printf("Book added successfully!\n");

        } else if (choice == 2) {
            int isbnToCheck;
            printf("Enter ISBN to check: ");
            scanf("%d", &isbnToCheck);

            int found = 0;
            for (int i = 0; i < b_count; i++) {
                if (library[i].isbn == isbnToCheck) {
                    printf("The book \"%s\" is available. Total copies: %d\n", library[i].title, library[i].copies);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Book not found!\n");
            }
        } else if (choice == 3) {
            int isbnToBorrow;
            printf("Enter ISBN to borrow: ");
            scanf("%d", &isbnToBorrow);

            int found = 0;
            for (int i = 0; i < b_count; i++) {
                if (library[i].isbn == isbnToBorrow) {
                    if (library[i].copies > 0) {
                        library[i].copies--;
                        printf("Book borrowed successfully!\n");
                    } else {
                        printf("No copies left to borrow!\n");
                    }
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Book not found!\n");
            }
        } else if (choice == 4) {
            int isbnToReturn;
            printf("Enter ISBN to return: ");
            scanf("%d", &isbnToReturn);

            int found = 0;
            for (int i = 0; i < b_count; i++) {
                if (library[i].isbn == isbnToReturn) {
                    library[i].copies++;
                    printf("Book returned successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Book not found!\n");
            }
        } else if (choice == 5) {
            if (b_count > 0) {
                printf("Books in the library:\n");
                for (int i = 0; i < b_count; i++) {
                    printf("Title: %s, Author: %s, ISBN: %d, Available Copies: %d\n",
                           library[i].title, library[i].author, library[i].isbn, library[i].copies);
                }
            } else {
                printf("The library is empty.\n");
            }
        } else if (choice == 6) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
