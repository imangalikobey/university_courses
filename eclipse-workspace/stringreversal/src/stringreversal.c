/*
 ============================================================================
 Name        : stringreversal.c
 Author      : ImangaliKobey
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdbool.h>

void reverseStringRecursively(char* str, char* rev, int start, int end) {
    // TODO: Implement the recursive function to reverse the string and store it in 'rev'
	if(start>=end){
		return;
	}
	char temp=str[start];//creating temporary variable for saving the string's current index
	rev[start]=str[end];//reversing character and storing it to the 'rev'
	rev[end]=temp;//reversing character and storing it to the 'rev'
	reverseStringRecursively(str,rev,start+1,end-1);
	}

bool areStringsSame(char* str1, char* str2, int length) {
    // TODO: Implement the function to compare two strings
	int same=0;//variable for amount of similar characters
	 for (int string_index = 0; string_index < length; string_index++) {//going through all characters in the strings
	        if (str1[string_index] == str2[string_index]) {//if the characters in the same index same,then we increase the amount of same characters
	            same++;
	        }
	    }
    return same==length;//if same amount of characters are equal to the length,then we return true,otherwise return false.
}

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
    char inputStr[100], reversedStr[100];
    int length = 0; // To store the length of the input string

    printf("Enter a string: ");
    fgets(inputStr, sizeof(inputStr), stdin);

    // Calculating length of the string and copying to reversedStr without using strlen and strcpy
    while (inputStr[length] != '\n') {
        reversedStr[length] = inputStr[length];
        length++;
    }
    reversedStr[length] = '\0'; // Adding null terminator to the end of reversedStr

    reverseStringRecursively(reversedStr, reversedStr, 0, length - 1); // Passing reversedStr as both original and destination to avoid strcpy

    printf("Reversed String: %s\n", reversedStr);

    if (areStringsSame(inputStr, reversedStr, length)) {
        printf("The original and reversed strings are the same.\n");
    } else {
        printf("The original and reversed strings are different.\n");
    }

    return 0;
}
