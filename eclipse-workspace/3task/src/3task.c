/*
 ============================================================================
 Name        : 3task.c
 Author      : ImangaliKobey
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int width;//variable for width of pyramid
	int x=1;//variable for calculating the amount of spaces and asterisks needed in our row
	int m;//variable for calculating modulus
	printf("Enter width with diamond shape: ");
	scanf("%i",&width);
	while(width>49 || width%2!=1){//ensuring that width will be in range (1,49) and it is odd number
	printf("Enter width with diamond shape: ");
	scanf("%i",&width);
	}
	for(int row=0;row<width/2+1;row++){//we need to draw the top of diamond including its mid

		for(x=1;x<width/2+1-row;x++){/*we need to stop putting the " " before the first asterisk,
		and that distance is decreasing to 1 after every iteration
		*/
			printf(" ");
		}

		for(x=0;x<2*row+1;x++){//in rows we have 1,3,5,.... and so on asterisk depending on the number of the row
			printf("*");
		}
		printf("\n");//to move to the next raw visually
		}

	for(int row=width/2+1;row<width;row++){//now we need to draw the bottom of the asterisk
		m=(width-row)%width;/*with increasing of row previous logic used for the top of diamond will not work,
		so we use modulus to make the row equal to the symmetric row from the middle */
		for(x=0;x<width/2+1-m;x++){//we use the same logic like in top part of diamond
			printf(" ");
		}
		for(x=0;x<2*m-1;x++){
			printf("*");
		}
		printf("\n");//to move to the next raw visually
	}
	return 0;
}
