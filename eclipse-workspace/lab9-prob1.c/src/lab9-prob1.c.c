/*
 ============================================================================
 Name        : c.c
 Author      : ImangaliKobey
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <strings.h>
//about strings.h
//https://stackoverflow.com/questions/4291149/difference-between-string-h-and-strings-h
//https://pubs.opengroup.org/onlinepubs/7908799/xsh/strings.h.html

// MAKE SURE YOUR CODE WORKS IN WANDBOX.ORG, WITH gcc C11 (WITHOUT GNU)
// tolower and toupper are not allowed, because they belong to <ctype.h>

size_t countOccurrenceOfAWord(const char* str1, const char* str2){
    size_t count = 0;//variable for count of occurrences of a word
    size_t word = strlen(str2);//storing the length of str2 to variable
    char alphabet[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";//storing upper case and lower case letters
    char* splitted_words;//creating variable for storing splitted words
    char str1_copy[2000];//creating variable for copy of str1
    strcpy(str1_copy, str1);//copying str1 to str1_copy
    splitted_words = strtok(str1_copy, " ");//splitting the str1_copy to the words
    size_t position = 0;//variable for position of characters
    printf("The word \"%s\" mentioned:", str2);
    while (splitted_words != NULL) {//checking all splitted words
    	char output[2000]="";//creating variable for output
    	size_t i=0;//variable for index of character
        if (strncasecmp(splitted_words, str2, word) == 0) {//comparing first 'word'-th letters of splitted_wrods and str2
        	for(i=0;i<strlen(splitted_words);i++){//checking the all letters of word whether it in alphabet or not
        		for(size_t j=0;j<strlen(alphabet);j++){
        		if(splitted_words[i]==alphabet[j]){
        			output[i]=splitted_words[i];//if it is in alphabet then we include it in output
        		}
        		}
        	}
        	output[i]='\0';//adding null-terminate
            printf("\n%s at pos %zu", output, position);
            count++;
        }
        position += strlen(splitted_words) + 1;//calculating position by adding length of string and 1(whitespace's length)
        splitted_words = strtok(NULL, " ");
    }
    return count;//returning number of words
}

bool readTheTextFromFile(const char* filename, char* str){/*tries to open the file named filename and returns false if it was unsuccessful.
 it’s successful, it copies the content of filename into str and returns true.*/
	FILE *file;
	file=fopen(filename,"r");//opening file with reading mode
	if(file==NULL){//if it is failed to open we return false
		return false;
	}
	size_t i=0;//declaring variable for index
	while(!feof(file)){//reading characters until the end of file
		str[i]=getc(file);//copying chars from filename to str
		i++;//increasing index
	}
	str[i-1]='\0';
	fclose(file);//closing the file
	return true;
}

int main(){
    char strtext[1500] = {'\0'};
    if(readTheTextFromFile("scorpion.txt", strtext) == false){
        puts("Can't open the file.");
        return -1;
    }

    printf ("\nIn total, %zu occurrences from \"scorpion\".\n", countOccurrenceOfAWord(strtext, "scorpion"));
    printf("\nThe text is:\n%s\n", strtext);
    return 0;
}
