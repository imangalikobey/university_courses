/*
 ============================================================================
 Name        : lab5-prob2.c
 Author      : ImangaliKobey
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	//declaring initial array and smaller array
	int arr1[]={9, 1 , 2 , 2 ,3};
	int arr1s[5];
	int n=5;
	int small=0;
	int numb;
	printf("(1) Initial array [");
	for(int i=0;i<n;i++){
		if(i!=n-1){
			printf("%i ",arr1[i]);
		}
		else{
			printf("%i",arr1[i]);
		}
	}
	printf("]\n");
	//finding the smaller number than chosen number in array
	for(int i=0;i<n;i++){//chooses the number
		small=0;
		numb=arr1[i];
		for(int j=0;j<n;j++){//chooses the number for comparison
			if(numb>arr1[j]){
				small++;
			}
		arr1s[i]=small;
		}
	}
	printf("(1) Smaller than< [");
	for(int i=0;i<n;i++){
		if (i==4){
			printf("%i",arr1s[i]);
		}
		else{
		printf("%i ",arr1s[i]);
	}
	}
	printf("]\n");
	printf("\n");
	//declaring initial array and smaller array
	int arr2[]={0, 9 ,4 , 4 ,1,0};
	int arr2s[6];
	n=6;
	numb=0;
	printf("(2) Initial array [");
	for(int i=0;i<n;i++){
		if(i!=n-1){
			printf("%i ",arr2[i]);
		}
		else{
			printf("%i",arr2[i]);
		}
	}
	printf("]\n");
	for(int i=0;i<n;i++){
		small=0;
		numb=arr2[i];
		for(int j=0;j<n;j++){
			if(numb>arr2[j]){
				small++;
			}
		arr2s[i]=small;
		}
	}
	printf("(2) Smaller than< [");
	for(int i=0;i<n;i++){
		if (i==n-1){
			printf("%i",arr2s[i]);
		}
		else{
		printf("%i ",arr2s[i]);
	}
	}
	printf("]\n");
	printf("\n");
	//declaring initial array and smaller array
	int arr3[]={7, 7 , 9};
	int arr3s[3];
	n=3;
	small=0;
	numb=0;
	printf("(3) Initial array [");
	for(int i=0;i<n;i++){
		if(i!=n-1){
			printf("%i ",arr3[i]);
		}
		else{
			printf("%i",arr3[i]);
		}
	}
	printf("]\n");
	for(int i=0;i<n;i++){
		small=0;
		numb=arr3[i];
		for(int j=0;j<n;j++){
			if(numb>arr3[j]){
				small++;
			}
		arr3s[i]=small;
		}
	}
	printf("(3) Smaller than< [");
	for(int i=0;i<n;i++){
		if (i==n-1){
			printf("%i",arr3s[i]);
		}
		else{
		printf("%i ",arr3s[i]);
	}
	}
	printf("]");
	return 0;
}
