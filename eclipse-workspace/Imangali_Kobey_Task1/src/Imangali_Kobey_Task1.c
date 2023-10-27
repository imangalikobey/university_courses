/*
 ============================================================================
 Name        : Imangali_Kobey_Task1.c
 Author      : ImangaliKobey
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int n,a,b,c;//declaring the variables for N,a,b,c.
	FILE *query;
	query=fopen("query.txt","r");//opening file
	fscanf(query,"%d",&n);//reading the amount of times we need to output
	int i=0;
	while(i<n){//reading values for a-TigerA,b-TigerB,c-Deer
		fscanf(query,"%d",&a);
		fscanf(query,"%d",&b);
		fscanf(query,"%d",&c);
		a=c-a;//measuring the distance between TigerA and Deer
		if(a<0){//measuring the absolute distance between TigerA and Deer
			a=a*(-1);//if it is negative number it will changed to positive
		}
		b=c-b;//measuring the distance between TigerB and Deer
		if(b<0){//measuring the absolute distance between TigerB and Deer
			b=b*(-1);//if it is negative number it will changed to positive
		}
		if(a<b){//if TigerA is closer then we output TigerA
			printf("TigerA\n");
		}
		else if(a>b){//if TigerB is closer then we output TigerB
			printf("TigerB\n");
		}
		else{//if two tigers have the same distance,thne we output Deer
			printf("Deer\n");
		}
		i++;
		}
	fclose(query);//closing file
	return 0;
}
