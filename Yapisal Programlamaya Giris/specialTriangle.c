#include <stdio.h>

void main()
{
	int number,i,j;
	
	printf("Enter which number do you want to find: ");
	scanf("%d", &number);
	
	for(i=1; i<number; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d\t", j);
		}
		printf("\n");
	}
}
//BETTER SOLUTION IS (NUMBER*(NUMBER+1))/2;
