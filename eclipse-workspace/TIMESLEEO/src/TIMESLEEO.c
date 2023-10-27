/*
 ============================================================================
 Name        : TIMESLEEO.c
 Author      : ImangaliKobey
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int c_hour,c_minute,a_hour,a_minute,s_hour,s_time,s_min;//declaration of variables,a=alarm,c=current,s=sleep
	printf("What is a current time? ");
	scanf("%02i:%02i",&c_hour,&c_minute);
	printf("What is a current time? ");
	scanf("%02i:%02i",&a_hour,&a_minute);
	s_hour=(a_hour+24-c_hour)%24;//adding 24 to making 00:05>24:05,the difference between hours will be positive
	s_time=s_hour*60+a_minute-c_minute;//calculating the amount of minutes
	s_min=s_time%60;//finding the minute
	s_hour=s_time/60;//finding the hour
	printf("%s","You will sleep:         ");
	printf("%02i:%02i",s_hour,s_min);
	return 0;
}
//a_minute=a_hour*60+a_minute;c_minute=c_hour*60+c_minute;
