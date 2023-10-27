/*
 ============================================================================
 Name        : lab7.c
 Author      : ImangaliKobey
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

struct Book{
	char title[200];
	char author[100];
	int isbn;
	int copies;
};
int main(void) {
	struct Book library[1000];
	int book_c=0;
	int number;//the number that user will input
	while(1){
	printf("Option\n");
	printf("1. Add a new book\n");
	printf("2. Check book availability\n");
	printf("3. Borrow a book\n");
	printf("4. Return a book\n");
	printf("5. Display all books\n");
	printf("6. Exit\n");
	printf("\n");
	printf("Enter your choice: ");
	scanf("%d",&number);
	}
	return 0;
}
