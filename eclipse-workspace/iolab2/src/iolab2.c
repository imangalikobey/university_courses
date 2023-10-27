/*
 ============================================================================
 Name        : iolab2.c
 Author      : ImangaliKobey
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
	FILE *file;
	char name_city[100];//string for scanning string
	char name_high_p[100];//string for highest population
	char name_large_a[100];//string for largest area
	int n=0;//variable for number of cities
	file=fopen("kz_stats.txt","r");
	float m_pop=0,m_area=0;//declaring maximum area, population variables
	float pop=0,area=0,density=0;
	float sum_p=0,sum_a=0;//sum of area and population

	while(!feof(file)){
		n++;
		fscanf(file, "%s %f %f",name_city,&pop,&area);
		if(pop>m_pop){//if pop in current iteration is greater than max then info about max population city changes
			m_pop=pop;
			strcpy(name_high_p,name_city);
		}
		if(area>m_area){//if area is current iteration is greater than max then info about max area city changes
			m_area=area;
			strcpy(name_large_a,name_city);
		}
		sum_p+=pop;//adding population
		sum_a+=area;//adding area
	}
	density=sum_p/sum_a;//calculating density
	fclose(file);
	file=fopen("kz_results.txt","w");//output in the new file
	fprintf(file,"Province with Highest Population: %s - %.0f\n",name_high_p,m_pop);
	fprintf(file,"Province with Largest Area: %s - %.2f sq.km\n",name_large_a,m_area);
	fprintf(file,"Average Population Density %.2f people/sq.km",density);
	fclose(file);
	return 0;
}

