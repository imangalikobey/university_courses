/*
 ============================================================================
 Name        : lab5-prob3.c
 Author      : ImangaliKobey
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	 FILE *file;
	 file = fopen("input.txt", "r");
	 char garbage_text[] = {'[', ']', '{', '}', '!', '#', '<', '=', '@', '~', '%', '^', '>', '&', '+', '*', '|'};//it contains symbols that must be removed from text
	 char clean_text[1000];//array for clean text
	 char ch;
	 int ind = 0;
	 int checked;//boolean
	 //taking char from text
	 while ((ch = fgetc(file)) != EOF) {
	     checked = 1;
	     for (int i = 0; i < 17; i++) {
	        if (ch == garbage_text[i]) {//if char in the garbage_text the loop will be break
	              checked = 0;
	              break;
	            }
	        }
	        if (checked) {//if char is not in the garbage_text then we will add it to the clean_text
	            clean_text[ind] = ch;
	            ind++;
	        }
	    }
	   clean_text[ind] = '\0';//it will stop the outputting text
	   fclose(file);
	   //outputting the clean text
	   for (int i = 0; i < ind; i++) {
	       printf("%c", clean_text[i]);
	    }
	return 0;
}
