/*
 ============================================================================
 Name        : prob1.c
 Author      : ImangaliKobey
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));                  // initialize random seed
    const int NUMBER_OF_RANDOMS = 10;   // the number of random integers we want
    const int UPPER_RANGE = 100;
    const int LOWER_RANGE = 1;
    int min=101;
    int min2=101;//second min
    int max=0;
    int max2=0;//second max
    int random_number;
    int c_min;//count of min number's duplicates
    int c_max;//count of max number's duplicates
    for(int i = 0; i < NUMBER_OF_RANDOMS; ++i){
        printf("%i\t", random_number=(rand() % UPPER_RANGE + LOWER_RANGE));  // generate random integer in range [LOWER; UPPER] and print it

        if(min==random_number){//if we find the another value that increases count of minimum duplicates
        	c_min++;
        }
        else if(min>random_number){//minimum is larger than random num then random num will be the minimum
        	min=random_number;
        	c_min=0;//we find the new min then count will be 0
        }

        if(min2>=random_number && min<=random_number && c_min>0){
        	min2=min;//if count more than zero then we have 2 minimum number with the same value
        }
        else if(min2>=random_number && min<random_number && c_min==0){
        	min2=random_number;//if count is equal to zero then min2 equal to random number
        }
        if (max==random_number){
        	c_max++;//if max number equals to the random number then count of duplicates will be increased
        }
        else if(max<random_number){//finding new max number and making count equal to zero
        	max=random_number;
        	c_max=0;
       }
        if(random_number<=max && max2<=random_number && c_max>0){
        	max2=max;	//jf count is more than zero and we have 2 same numbers for max value
        }
        else if(random_number<max && max2<random_number && c_max==0){
        	max2=random_number;//if count is  equal to zero and random number is more than max2 then it will be new max2
        }
    }
    printf("\n");
    printf("\n");
    printf("maximum = %i\n",max);
    printf("2nd max = %i\n",max2);
    printf("minimum = %i\n",min);
    printf("2nd min = %i\n",min2);
    return 0;
}
