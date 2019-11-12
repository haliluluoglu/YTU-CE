#include <stdio.h>


int x=10;
static int j=4,y=6;
void printxy(int a)
{
	static int y=12;
	y++;
	printf("x2: %d, y2:%d, a:%d\n", x,y,--j,a++);
}

void main()
{
	int x;
	for(x=0; x<2; x++)
	{
		int y=3,k=0;
		printf("x1: %d, y1: %d, j1: %d\n",x,y,j);	
		printxy(k);
	}	
	if(y==6)
	{
		printf("Esittir.");
	}
}
