/*
 ============================================================================
 Name        : Imangali_Kobey_Taks3.c
 Author      : ImangaliKobey
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int n,a;//declaring the variables for N,a,b,c.
	int abs_value;
	FILE *query;
	query=fopen("input.txt","r");//opening file
	fscanf(query,"%d",&n);//reading the amount of times we need to output
	int i=1;
	int finderltr=1;//the place of number for the left_to_right
	int left_to_right=0;//sum of the left_to_right
	int right_to_left=0;//sum of the left_to_right
	while(i<=n*n){//calculating the left-to-right diagonal
		fscanf(query,"%d",&a);
		if(finderltr==i){//if finder is equal to i,then we find our number in this diagonal
		left_to_right+=a;//adding it to the sum
		finderltr+=n+1;//increasing the finder value to the next number's place
		}
		i++;
	}
	fclose(query);
	query=fopen("input.txt","r");//opening file
	i=1;
	a=0;
	fscanf(query,"%d",&n);
	int finderrtl=n;//the place of number for the rigth_to_left
	while(i<n*n){//calculating the right-to-left diagonal
		fscanf(query,"%d",&a);
		if(finderrtl==i){//if finder is equal to i,then we find our number in this diagonal
		right_to_left+=a;//adding it to the sum
		finderrtl+=n-1;//increasing the finder value to the next number's place
		}
		i++;
	}
	abs_value=left_to_right-right_to_left;//calculating absolute value
	fclose(query);
	if(abs_value>=0){//if it is more or equal to zero then we just print it
		printf("%d",abs_value);
	}
	else{//if it is negative number then we will change its sign and print it
		abs_value*=-1;
		printf("%d",abs_value);
	}
	return 0;
}
