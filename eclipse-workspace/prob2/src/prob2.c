/*
 ============================================================================
 Name        : prob2.c
 Author      : ImangaliKobey
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
int main(){
	long long digit;
	//count for 1-9
	long long c_1=0;
	long long c_2=0;
	long long c_3=0;
	long long c_4=0;
	long long c_5=0;
	long long c_6=0;
	long long c_7=0;
	long long c_8=0;
	long long c_9=0;

    unsigned long long a = 18446744073709551615;
    printf("The given number is %llu, let's go:\n", a);
    while(a>0){
    	digit=a%10;
    	a=a/10;
    	//checking the digit and increasing the count of every digit if it is exits in number
    	if(digit==1){
    		c_1++;
    	}
    	if(digit==2){
    		c_2++;
    	}
    	if(digit==3){
    		c_3++;
    	}
    	if(digit==4){
    		c_4++;
    	}
    	if(digit==5){
    		c_5++;
    	}
    	if(digit==6){
    		c_6++;
    	}
    	if(digit==7){
    		c_7++;
    	}
    	if(digit==8){
    		c_8++;
    	}
    	if(digit==9){
    		c_9++;
    	}
    }
    a = 18446744073709551615;
	printf("We meet 1 in %llu --- %llu times\n",a,c_1);
	printf("We meet 2 in %llu --- %llu times\n",a,c_2);
	printf("We meet 3 in %llu --- %llu times\n",a,c_3);
	printf("We meet 4 in %llu --- %llu times\n",a,c_4);
	printf("We meet 5 in %llu --- %llu times\n",a,c_5);
	printf("We meet 6 in %llu --- %llu times\n",a,c_6);
	printf("We meet 7 in %llu --- %llu times\n",a,c_7);
	printf("We meet 8 in %llu --- %llu times\n",a,c_8);
	printf("We meet 9 in %llu --- %llu times\n",a,c_9);
	printf("\n");
    //17711771171122332233
	a=17711771171122332233;
	//count for 1-9
	c_1=0;
	c_2=0;
	c_3=0;
	c_4=0;
	c_5=0;
	c_6=0;
	c_7=0;
	c_8=0;
	c_9=0;
	printf("The given number is %llu and \n", a);
	    while(a>0){
	    	digit=a%10;
	    	a=a/10;
	    	//checking the digit and increasing the count of every digit if it is exits in number
	    	if(digit==1){
	    		c_1++;
	    	}
	    	if(digit==2){
	    		c_2++;
	    	}
	    	if(digit==3){
	    		c_3++;
	    	}
	    	if(digit==4){
	    		c_4++;
	    	}
	    	if(digit==5){
	    		c_5++;
	    	}
	    	if(digit==6){
	    		c_6++;
	    	}
	    	if(digit==7){
	    		c_7++;
	    	}
	    	if(digit==8){
	    		c_8++;
	    	}
	    	if(digit==9){
	    		c_9++;
	    	}
	    }
	    a = 17711771171122332233;
		printf("We meet 1 in %llu --- %llu times\n",a,c_1);
		printf("We meet 2 in %llu --- %llu times\n",a,c_2);
		printf("We meet 3 in %llu --- %llu times\n",a,c_3);
		printf("We meet 4 in %llu --- %llu times\n",a,c_4);
		printf("We meet 5 in %llu --- %llu times\n",a,c_5);
		printf("We meet 6 in %llu --- %llu times\n",a,c_6);
		printf("We meet 7 in %llu --- %llu times\n",a,c_7);
		printf("We meet 8 in %llu --- %llu times\n",a,c_8);
		printf("We meet 9 in %llu --- %llu times\n",a,c_9);
		printf("\n");
    //14455656654658899989;
		a=14455656654658899989;
		//count for 1-9
		c_1=0;
		c_2=0;
		c_3=0;
		c_4=0;
		c_5=0;
		c_6=0;
		c_7=0;
		c_8=0;
		c_9=0;
		printf("The given number is %llu, let's go:\n", a);
		    while(a>0){
		    	digit=a%10;
		    	a=a/10;
		    	//checking the digit and increasing the count of every digit if it is exits in number
		    	if(digit==1){
		    		c_1++;
		    	}
		    	if(digit==2){
		    		c_2++;
		    	}
		    	if(digit==3){
		    		c_3++;
		    	}
		    	if(digit==4){
		    		c_4++;
		    	}
		    	if(digit==5){
		    		c_5++;
		    	}
		    	if(digit==6){
		    		c_6++;
		    	}
		    	if(digit==7){
		    		c_7++;
		    	}
		    	if(digit==8){
		    		c_8++;
		    	}
		    	if(digit==9){
		    		c_9++;
		    	}
		    }
		    a = 14455656654658899989;
			printf("We meet 1 in %llu --- %llu times\n",a,c_1);
			printf("We meet 2 in %llu --- %llu times\n",a,c_2);
			printf("We meet 3 in %llu --- %llu times\n",a,c_3);
			printf("We meet 4 in %llu --- %llu times\n",a,c_4);
			printf("We meet 5 in %llu --- %llu times\n",a,c_5);
			printf("We meet 6 in %llu --- %llu times\n",a,c_6);
			printf("We meet 7 in %llu --- %llu times\n",a,c_7);
			printf("We meet 8 in %llu --- %llu times\n",a,c_8);
			printf("We meet 9 in %llu --- %llu times\n",a,c_9);
    return 0;
}
