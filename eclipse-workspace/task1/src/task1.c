/*
 ============================================================================
 Name        : task1.c
 Author      : ImangaliKobey
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

typedef struct {
    char child[50];
    char parent[50];
} Family;

int readFamilyFromFile(char* filename, Family families[], int maxSize) {
    // TODO: Implement the function to read family relationships from the file
	FILE *file;
	file=fopen(filename,"r");//reading file
    int count=0;
    _Bool check=1;
    while(check){//reading number of family members
    	if(fscanf(file,"%s",families[count].child)!=EOF){//if child's name is equal to EOF then we stop our loop
    		fscanf(file,"%s",families[count].parent);//we read first child and then parent, because they are written in pair,and child will be detected first
    		count++;//increasing number of family relationship
    	}
    	else{
    		check=0;//we stopping our loop
    	}
    }
    return count;//returning the family relationships
}

void findAncestors(Family families[], int size, char* child) {
    // TODO: Implement the recursive function to print all ancestors of the given child
	int count=0;
	int string_index=0;
	while(count<size){//finding the child name from the struct by iteration,checking their current index's value
		while(child[string_index]!='\0' && families[count].child[string_index]!='\0' && child[string_index]==families[count].child[string_index]){
			string_index++;//checking the current characters for the '\0' symbol and compare each other,if they are same then we increase the string_index
				}
		if (child[string_index] == '\0' && families[count].child[string_index] == '\0'){//if characters equal to the '/0',it means that each of them at the end of the string
		printf("-->%s",families[count].parent);//now we can output it to the user
		findAncestors(families,size,families[count].parent);//using recursive to find a parent of the parent.
		break;
	}
		count++;//increasing count if we do not find the child's name in the struct
}
}
int main() {
    Family families[100];
    int count = readFamilyFromFile("family.txt", families, 100);

    char childName[]="Alice";
    printf("%s",childName);
    findAncestors(families, count, childName);//finding ancestors of Alice
    return 0;
}

