#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main()
{
	int number,i,j,number2;
	int *array;
	
	printf("Enter a number, please: ");
	scanf("%d", &number);
	
	array=(int *)malloc(sizeof(int)*(number+1));
	for(i=1; i<=number; i+=2)
	{
		array[i]=0;
	}
	array[2]=0;
	for(i=4; i<=number; i+=2)
	{
		array[i]=1;
	}
	number2=(int)sqrt(number);
	printf("%d\n", number2);
	for(i=3; i<=number2; i+=2)
	{
		if(array[i]==0)
		{
			printf("%d\n", i);
			for(j=(i*i); i<=number; j+=i)
			{
				array[j]=1;

			}
		}
	}
	printf("1 and 2 is prime number.\n");
	for(i=3; i<number; i+=2)
	{
		if(array[i]==0)
		{
			printf("%d is prime number.\n", i);
		}
	}
}
