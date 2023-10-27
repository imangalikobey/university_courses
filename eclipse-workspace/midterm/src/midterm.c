/*
 ============================================================================
 Name        : midterm.c
 Author      : ImangaliKobey
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int x=0,y=0;
	printf("WRITE NUMBER");
	scanf("%d",&x);
	printf("write number");
	scanf("%d",&y);
	if(x<y){
		return 0;
	}
	else{
		while(1){
			if(x%y==0){
				printf("%d",x);
				return 0;
			}
			else{
				x+=x;
			}
		}
	}

	return 0;
}
