#include <stdio.h>
#define MAX 800

int main()
{
	int i,number=0,random1,random2;
	float temp;
	
	for(i=0; i<MAX; i++)
	{
		random1=rand()%2;
		random2=rand()%2;
		printf("First random: %d , Second random: %d\n", random1, random2);
		if((random1*random1)+(random2*random2)<=1)
		{
			number++;
		}
	}
	printf("This is first: %d\n" , number);
	temp=(4*number)/(float)MAX;
	printf("This is second: %f\n", temp);
}
