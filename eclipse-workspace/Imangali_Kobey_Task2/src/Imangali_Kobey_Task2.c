/*
 ============================================================================
 Name        : Imangali_Kobey_Task2.c
 Author      : ImangaliKobey
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int year,day;//declaring variables for day and year
	printf("Enter the year (K) : ");
	scanf("%d",&year);//inputting data for year
	printf("Enter the day (D) : ");
	scanf("%d",&day);//inputting data for day
	_Bool type1=0;
	_Bool leap_year;
	int month=1;
	int day_m=31;
	if(year<1919){//if year is less than 1919 it is first type
		type1=1;
	}
	if(type1){
		leap_year=(year%4==0);//checking the year for leap
		while(day>day_m){//decreasing the amount of days depending on the month
			day -=day_m;
	        month++;//increasing month
	        if (month == 4 || month == 6 || month == 9 || month == 11) {
	            day_m = 30;//if it month is equal to 4,6,9,12 then day_m equals to the 30
	        } else if (month == 2) {//checking the amount of days at february
	        	if(leap_year){//leap year means we will have 29 days
	            day_m =29;}
	        	else{
	        		day_m=28;//if year is not leap then we will have 28 days
	        	}
	        } else {
	            day_m = 31;//if month is other than previous it will have 31 days
	        }
		}
	}
	else{
		leap_year=((year%4==0 && year%100!=0) || year%400==0);//checking the year for leap
				while(day>day_m){//decreasing the amount of days depending on the month
					day -=day_m;
			        month++;//increasing month
			        if (month == 4 || month == 6 || month == 9 || month == 11) {
			            day_m = 30;
			        } else if (month == 2) {
			        	if(leap_year){//leap year means we will have 29 days
			            day_m =29;}
			        	else{
			        		day_m=28;//if year is not leap then we will have 28 days
			        	}
			        } else {
			            day_m = 31;//if month is other than previous it will have 31 days
			        }
				}
			}
   printf("%02d.%02d.%04d", day, month, year);//printing in format dd.mm.yyyy
	return 0;
}
