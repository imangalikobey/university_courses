/*
 ============================================================================
 Name        : firstlab.c
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

	float length,height_a,height_b,total_area;
	length=11.4;
	height_a=5;
	height_b=2.5;
	total_area=length*height_a+ length*height_b/2;//finding total area of house
	printf("The area of the given figure is %.2fm\n",total_area);
	printf("\n");
	printf("// // // // //\n");
	printf("//  TASK 2  //\n");
	printf("// // // // //\n");
	printf("\n");

	int c_hour,c_minute,a_hour,a_minute,s_hour,s_time,s_minute;//declaration of variables,a=alarm,c=current,s=sleep
	printf("What is a current time? ");
	scanf("%02i:%02i",&c_hour,&c_minute);
	printf("What is a current time? ");
	scanf("%02i:%02i",&a_hour,&a_minute);
	s_hour=(a_hour+24-c_hour)%24;//adding 24 to making 00:05>24:05,the difference between hours will be positive
	s_time=s_hour*60+a_minute-c_minute;//calculating the amount of minutes
	s_minute=s_time%60;//finding the minute
	s_hour=s_time/60;//finding the hour
	printf("%s","You will sleep:         ");
	printf("%02i:%02i",s_hour,s_minute);
	return 0;
}
