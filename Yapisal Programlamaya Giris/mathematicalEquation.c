//WORSE SOLUTION
/*
#include <stdio.h>
#include <math.h>
#include <time.h>

void main()
{
	int i,j,k;
	double start_t,end_t,total_t;
	
	start_t=clock();
	for(i=0; i<=1000; i++)
	{
		for(j=0; j<=1000; j++)
		{
			k=(1000-i-j);
			if((i+j+k==1000)&&(pow(i,2)+pow(j,2)==pow(k,2)))
			{
				printf("\n");
				printf("First number:%d\n", i);
				printf("Second number:%d\n", j);
				printf("Third number:%d\n", k);
			}
		}
	}
	end_t=clock();
	total_t=(double)(end_t-start_t)/CLOCKS_PER_SEC;
 	printf("\nIt took %lf second.", total_t);
}
*/
//BETTER SOLUTION
#include <stdio.h>
#include <math.h>
#include <time.h>

void main()
{
	int i,j,k;
	double start_t,end_t,total_t;

	start_t=clock();
	for(i=0; i<=1000; i++)
	{
		for(j=0; j<=1000-i; j++)
		{
			k=(1000-i-j);
			if((i+j+k==1000)&&(pow(i,2)+pow(j,2)==pow(k,2)))
			{
				printf("\n");
				printf("First number:%d\n", i);
				printf("Second number:%d\n", j);
				printf("Third number:%d\n", k);
			}
		}
	}
	end_t=clock();
	total_t=(double)(end_t-start_t)/CLOCKS_PER_SEC;
 	printf("\nIt took %lf second.", total_t);
}
