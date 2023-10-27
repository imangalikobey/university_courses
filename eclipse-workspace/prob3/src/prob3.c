/*
 ============================================================================
 Name        : prob3.c
 Author      : ImangaliKobey
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	int c_hour,c_minute,a_hour,a_minute,s_hour,s_time,s_minute,age;//declaration of variables,a=alarm,c=current,s=sleep
    printf("What time you are going to sleep?  ");
    scanf("%02i:%02i",&c_hour,&c_minute);
    printf("At What time you have to wake up?  ");
    scanf("%02i:%02i",&a_hour,&a_minute);
	s_hour=(a_hour+24-c_hour)%24;//adding 24 to making 00:05>24:05,the difference between hours will be positive
	s_time=s_hour*60+a_minute-c_minute;//calculating the amount of minutes
	s_minute=s_time%60;//finding the minute
	s_hour=s_time/60;//finding the hour
    printf("You will sleep:\t\t\t   %02i:%02i\n", s_hour, s_minute);
    while(1){
    	printf("\nWhat is your age?  ");
    	scanf("%i",&age);
    	if(age>=0 && age<111){
    		printf("\n");
    		break;
    	}
    	else{
    		printf("In our program, the AGE can't be negative or higher than 110! ");
    	}
    }
    // age group
    /*
    1st line - output if the sleep time is within the recommended range
    2nd line - output if the sleep time is higher than the recommended range
    3rd line - output if the sleep time is less than the recommended range
    */
    // baby, infant - 0 years
    /*
    "Okay, the baby is having a good amount of sleep.\n"
    "Hmmm, your baby is probably sleeping a bit much than normal.\n"
    "Nooo, your baby isn't sleeping enough!\n"
    */
    if(age==0){
    	if(s_time>=12*60 && s_time<=16*60){
    		printf("Okay, the baby is having a good amount of sleep.\n");
    	}
    	else if(s_time>16*60){
    		printf("Hmmm, your baby is probably sleeping a bit much than normal.\n");
    	}
    	else{
    		printf("Nooo, your baby isn't sleeping enough!\n");
    	}
    }
    // toddler - 1-2 years
    /*
    "A toddler is doing fine.\n"
    "A toddler is sleeping for too long.\n"
    "A toddler has to sleep more.\n"
    */
    if(age>=1 && age<=2){
    	if(s_time>=11*60 && s_time<=14*60){
    		printf("A toddler is doing fine.\n");
    	}
    	else if(s_time>14*60){
    		printf("A toddler is sleeping for too long.\n");
    	}
    	else{
    		printf("A toddler has to sleep more.\n");
    	}
    }
    // preschool, little human - 3-5 years
    /*
    "The little human has a healthy sleep duration.\n"
    "The little human is a sleeping beauty.\n"
    "The little human needs sleep.\n"
    */
    if(age>=3 && age<=5){
    	if(s_time>=10*60 && s_time<=13*60){
    		printf("The little human has a healthy sleep duration.\n");
    	}
    	else if(s_time>13*60){
    		printf("The little human is a sleeping beauty.\n");
    	}
    	else{
    		printf( "The little human needs sleep.\n");
    	}
    }

    // schoolchild - 6-12 years
    /*
    "This schoolchild's gonna be strong.\n"
    "This schoolchild is oversleeping.\n"
    "Those school-children work a lot, they need more sleep.\n"
    */

    if(age>=6 && age<=12){
    	if(s_time>=9*60 && s_time<=12*60){
    		printf("This schoolchild's gonna be strong.\n");
    	}
    	else if(s_time>12*60){
    		printf("This schoolchild is oversleeping.\n");
    	}
    	else{
    		printf("Those school-children work a lot, they need more sleep.\n");
    	}
    }
    // teenager - 13-17 years
    /*
    "That teenager's gonna be good.\n"
    "That teenager's a bear or what?\n"
    "That teenager's gonna be sick, I'm telling ya.\n"
    */
    if(age>=13 && age<=17){
    	if(s_time>=8*60 && s_time<=10*60){
    		printf("That teenager's gonna be good.\n");
    	}
    	else if(s_time>10*60){
    		printf("That teenager's a bear or what?\n");
    	}
    	else{
    		printf("That teenager's gonna be sick, I'm telling ya.\n");
    	}
    }

    // adult - 19-110 years
    /*
    "Everything's all right.\n"
    "Oversleeping may harm your health!\n"
    "You should get at least 7 hours of sleep...\n"
    */
    if(age>=18 && age<=110){
    	if(s_time>=7*60 && s_time<=9*60){
    		printf("Everything's all right.\n");
    	}
    	else if(s_time>9*60){
    		printf("Oversleeping may harm your health!\n");
    	}
    	else{
    		printf("You should get at least 7 hours of sleep...\n");
    	}
    }
    if(age>=18 && age<=110){
    	if(s_time<1*60){
    		printf("No sleep will damage your heart, kidney and brings problems like high blood pressure, diabetes and obesity.");
    	}
    	else if(s_time>=1*60 && s_time<5*60){
    		printf("If you don't get enough sleep, you will be likely to have mood changes, memory issues and physical accidents.");
    	}
    	else if(s_time>=5*60 && s_time<=6*60){
    		printf("It's okay to sleep 5-6 hours, if you're going to take a 1-2h nap later. But it's better to have a constant and good regime.");
    	}
    }
    //---------------------------------------------------------------------//
    // If the age group is adult - print extra message
    // no sleep - 0 hours of sleep
        //"No sleep will damage your heart, kidney and brings problems like high blood pressure, diabetes and obesity."

    // little sleep - [1; 4] hours of sleep
        //"If you don't get enough sleep, you will be likely to have mood changes, memory issues and physical accidents."

    // okay-ish sleep - [5; 6] hours of sleep
        //"It's okay to sleep 5-6 hours, if you're going to take a 1-2h nap later. But it's better to have a constant and good regime."
    return 0;
}
