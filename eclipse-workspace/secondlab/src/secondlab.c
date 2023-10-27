/*
 ============================================================================
 Name        : secondlab.c
 Author      : ImangaliKobey
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("// // // // //\n");
	printf("//  TASK 1  //\n");
	printf("// // // // //\n");
	printf("\n");

	int n;
	int fact_n=1;//variable to finding factorial
	double pow=0,deg=1,fact=1,prod,sum;//declaring power,degree,sum,factorial
	printf("Please input value of n: ");//asking for value of n//
	scanf("%i",&n);
	for(int k=0;k<n;k++){
		//finding the 2^(k+1) in the formula
		while(pow<k+1){
			deg=2*deg;
			pow++;
		}
		pow=0;//in order to use it again in next iteration

		//finding the (k!)^2 in the formula
		while(fact_n<k+1){
			fact=fact*fact_n;
			fact_n++;
		}
		fact_n=1;//in order to use it again in next iteration
		fact=fact*fact;

		//finding the numerator
		prod=deg*fact;
		fact=1;//in order to use it again in next iteration
		deg=1;

		//finding the (2k+1)! or denominator
		while(fact_n<2*k+2){
			fact=fact*fact_n;
			fact_n++;
		}
		fact_n=1;//in order to use it again in next iteration

		//calculating the k element and adding it to the sum
		prod=prod/fact;
		sum+=prod;
		fact=1;//in order to use it again in next iteration
	}
	printf("The value of pi is: %f",sum);

	printf("\n");
	printf("\n");
	printf("// // // // //\n");
	printf("//  TASK 2  //\n");
	printf("// // // // //\n");
	printf("\n");

	int num,summa;
	printf("Please input the value of num: ");
	scanf("%i",&num);
	while(num>9){//we need to have single digit root,so we must have condition num>9(number will be 2digit or more)
		summa=0;//always need to make sum equal to zero to sum the digits of the next iteration

		while(num!=0){//if it is equal to zero, it means there is no digits are left
			summa=summa+num%10;//from modulus we take the last digit and sum it with others
			num=num/10;//to lose the last digit
			}
			num=summa;//the next number in iteration will be the sum of previous until it became the digital root
		}
		printf("The value of the digital root is: %i",num);//prints the digital root

	printf("\n");
	printf("\n");
	printf("// // // // //\n");
	printf("//  TASK 3  //\n");
	printf("// // // // //\n");
	printf("\n");

	int width;//variable for width of pyramid
	int x=1;/*variable for calculating the amount of spaces and asterisks needed in our row,
	it works like coordinate of x to understand where we should stop putting spaces and asterisks*/
	int m;//variable for calculating modulus of the rows after the middle of diamond
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
