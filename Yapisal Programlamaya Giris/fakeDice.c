#include <stdio.h>

int main()
{
	int i,dice1=60000,a=1366,c=150889,m=714025,dice2;
	static int histogram[6];
	
	for(i=0; i<10000; i++)
	{
		dice2=(a*dice1+c)%m;
		histogram[dice1%6]++;
		dice1=dice2;
	}
	for(i=0; i<6; i++)
	{
		printf("%d\t", histogram[i]);
	}
	return 0;
}