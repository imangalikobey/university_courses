/*
 ============================================================================
 Name        : bookstore.c
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
	setvbuf(stdout, NULL, _IONBF, 0);
    struct Book library[100];//creating array to saving many books
    int b_count = 0;
    int num;

    while (1) {//it shows the options
        printf("Options:\n");
        printf("1. Add a new book\n");
        printf("2. Check book availability\n");
        printf("3. Borrow a book\n");
        printf("4. Return a book\n");
        printf("5. Display all books\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &num);

        printf("\n");
        if (num == 1) {//program creates a new structure and saves it in array
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

        } else if (num == 2) {//checks isbn of books
            int isbncheck;
            printf("Enter ISBN to check: ");
            scanf("%d", &isbncheck);

            int found = 0;
            for (int i = 0; i < b_count; i++) {
                if (library[i].isbn == isbncheck) {
                    printf("The book \"%s\" is available. Total copies: %d\n", library[i].title, library[i].copies);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Book not found!\n");
            }
        } else if (num == 3) {//borrows books through isbn
            int isbnBorrow;
            printf("Enter ISBN to borrow: ");
            scanf("%d", &isbnBorrow);

            int found = 0;
            for (int i = 0; i < b_count; i++) {
                if (library[i].isbn == isbnBorrow) {
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
        } else if (num == 4) {//returns books through isbn
            int isbnReturn;
            printf("Enter ISBN to return: ");
            scanf("%d", &isbnReturn);

            int found = 0;
            for (int i = 0; i < b_count; i++) {
                if (library[i].isbn == isbnReturn) {
                    library[i].copies++;
                    printf("Book returned successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Book not found!\n");
            }
        } else if (num == 5) {//shows amount of books in library
            if (b_count > 0) {
                printf("Books in the library:\n");
                for (int i = 0; i < b_count; i++) {
                    printf("Title: %s, Author: %s, ISBN: %d, Available Copies: %d\n",
                           library[i].title, library[i].author, library[i].isbn, library[i].copies);
                }
            }
        } else if (num == 6) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

