/*
 ============================================================================
 Name        : 2task.c
 Author      : ImangaliKobey
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int num,sum;
	printf("Please input the value: ");
	scanf("%i",&num);
	while(num>9){//we need to have single digit root,so we must have condition num>9(number will be 2digit or more)
		sum=0;//always need to make sum equal to zero to sum the digits of the next iteration
		while(num!=0){//if it is equal to zero, it means there is no digits are left
			sum=sum+num%10;//from modulus we take the last digit and sum it with others
			num=num/10;//to lose the last digit
		}
		num=sum;//the next number in iteration will be the sum of previous until it became the digital root
	}
	printf("The value of the digital root is: %i",num);//prints the digital root
	return 0;
}
