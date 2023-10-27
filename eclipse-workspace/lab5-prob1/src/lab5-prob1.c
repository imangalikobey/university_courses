/*
 ============================================================================
 Name        : lab5-prob1.c
 Author      : ImangaliKobey
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void) {
	int arr1[]={1, 8, 6, 2, 5, 4, 8, 3, 7, 5};//declaring array
	int n=10;//writing its size
	int width=0,height=0;//declaring width and height
	int area=0;//declaring area
	int i_w=0,i_h=0;
	for(int i=0;i<n;i++){//it will go through all of numbers until last one
		for(int j=i+1;j<n;j++){//it will go through all of numbers starting from previous
			if(arr1[i]<=arr1[j]){// we are choosing the height of rectangle
				height=arr1[i];
			}
			else{
				height=arr1[j];
			}
			width=j-i;//declaring the width of rectangle
				if (width*height>area){//if new area is higher then it will be written in to area variable
			area=width*height;
			i_w=i;
			i_h=j;

		}
		}
	}
	printf("When array is {1, 8, 6, 2, 5, 4, 8, 3, 7, 5}----height of [%d] is %d && height of [%d] is %d, so max area = %d\n",i_w,arr1[i_w],i_h,arr1[i_h],area);
	int arr2[]= {9, 8, 6, 2, 5, 4, 8, 3, 7, 5};
	n=10;
	area=0;
	width=0;
	height=0;
	i_w=0,i_h=0;
	for(int i=0;i<n;i++){//it will go through all of numbers until last one
		for(int j=i+1;j<n;j++){//it will go through all of numbers starting from previous
			if(arr2[i]<=arr2[j]){// we are choosing the height of rectangle
				height=arr2[i];
			}
			else{
				height=arr2[j];
			}
			width=j-i;//declaring the width of rectangle
				if (width*height>area){//if new area is higher then it will be written in to area variable
			area=width*height;
			i_w=i;
			i_h=j;
		}
			width=0;
			height=0;
		}
	}
	printf("When array is {9, 8, 6, 2, 5, 4, 8, 3, 7, 5}----height of [%d] is %d && height of [%d] is %d, so max area = %d\n",i_w,arr2[i_w],i_h,arr2[i_h],area);
	int arr3[]= {6, 8, 6, 2, 5, 4, 8, 3, 7, 6};
	n=10;
	area=0;
	i_w=0,i_h=0;
	for(int i=0;i<n;i++){//it will go through all of numbers until last one
		for(int j=i+1;j<n;j++){//it will go through all of numbers starting from previous
			if(arr3[i]<=arr3[j]){// we are choosing the height of rectangle
				height=arr3[i];
			}
			else{
				height=arr3[j];
			}
			width=j-i;//declaring the width of rectangle
				if (width*height>area){//if new area is higher then it will be written in to area variable
			area=width*height;
			i_w=i;
			i_h=j;
		}
			width=0;
			height=0;
		}
	}
	printf("When array is {6, 8, 6, 2, 5, 4, 8, 3, 7, 6}----height of [%d] is %d && height of [%d] is %d, so max area = %d\n",i_w,arr3[i_w],i_h,arr3[i_h],area);
	int arr4[]= {2, 7, 8, 6, 3, 4};
	n=6;
	area=0;
	i_w=0,i_h=0;
	for(int i=0;i<n;i++){//it will go through all of numbers until last one
		for(int j=i+1;j<n;j++){//it will go through all of numbers starting from previous
			if(arr4[i]<=arr4[j]){// we are choosing the height of rectangle
				height=arr4[i];
			}
			else{
				height=arr4[j];
			}
			width=j-i;//declaring the width of rectangle
				if (width*height>area){//if new area is higher then it will be written in to area variable
			area=width*height;
			i_w=i;
			i_h=j;
		}
			width=0;
			height=0;
		}
	}
	printf("When array is {2, 7, 8, 6, 3, 4}	    ----height of [%d] is %d && height of [%d] is %d, so max area = %d\n",i_w,arr4[i_w],i_h,arr4[i_h],area);
	int arr5[]= {1,1};
	n=2;
	area=0;
	i_w=0,i_h=0;
	for(int i=0;i<n;i++){//it will go through all of numbers until last one
		for(int j=i+1;j<n;j++){//it will go through all of numbers starting from previous
			if(arr5[i]<=arr5[j]){// we are choosing the height of rectangle
				height=arr5[i];
			}
			else{
				height=arr5[j];
			}
			width=j-i;//declaring the width of rectangle
				if (width*height>area){//if new area is higher then it will be written in to area variable
			area=width*height;
			i_w=i;
			i_h=j;
		}
			width=0;
			height=0;
		}
	}
	printf("When array is {1, 1}                        ----height of [%d] is %d && height of [%d] is %d, so max area = %d\n",i_w,arr5[i_w],i_h,arr5[i_h],area);
	return 0;
}
