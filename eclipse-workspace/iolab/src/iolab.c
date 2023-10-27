/*
 ============================================================================
 Name        : iolab.c
 Author      : ImangaliKobey
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	FILE *file;
	file=fopen("data.txt","r");
	int t_lines=1;//total lines
	int num_words=1;//number of words
	int max_length_line=0;//max length line
	int c_length_line=0;//current length line

	int max_word=0;//max number of words in line
	int c_word=0;//current number of words
	char ch;
	while(!feof(file)){
	ch=fgetc(file);
	if(ch=='\n'){//after new line we increase number of lines and check the length of line and number of words with maximum
		t_lines++;
		c_length_line++;
		if(c_word>max_word){
			max_word=c_word;
		}
		if(c_length_line>max_length_line){
			max_length_line=c_length_line;
		}
		c_word++;
		if(c_word>max_word){
			max_word=c_word;
		}
		c_length_line=0;//in order to calculate the next line
		num_words++;
		c_word=0;//in order to calculate the next line
	}

	else if(ch!=' '){
			c_length_line++;
	}
	else{//if there is space means there is a new word
			num_words++;
			c_length_line++;
			c_word++;
	}
		}
	if(c_length_line-1>max_length_line){//we reducing to one,because at the end appears the undefined symbol and it is counts as character
		max_length_line=c_length_line-1;
	}
	if(c_word+1>max_word){//after last word we do not have new line and space,so we must include it
		max_word=c_word+1;
	}
	fclose(file);
	file=fopen("output.txt","w");//output the data in new file
	fprintf(file,"Total Lines: %i\n",t_lines);
	fprintf(file,"Total Words: %i\n",num_words);
	fprintf(file,"Longest Line Length: %i characters\n",max_length_line);
	fprintf(file,"Most Words in a Line: %i words",max_word);
	return 0;
}
