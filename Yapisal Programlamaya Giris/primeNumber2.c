#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *prime;
	int size=1,primeNumber=3,number,i;

	do
	{
		printf("\nIt can not be less than 3.\n");
		printf("Enter which number for prime number: ");

		scanf("%d", &number);
	}while(number<3);
	
	prime=(int *)malloc(sizeof(int)*number);
	prime[0]=2;
	
	while(primeNumber<=number)
	{
		i=0;
		while((i<size)&&(primeNumber%prime[i])!=0)
		{
			i++;
		}
		if(i>=size)
		{
			prime[i]=primeNumber;
			size++;
		}
		primeNumber++;
	}
	for(i=0; i<size; i++)
	{
		printf("%d\t", prime[i]);
	}
	return 0;
}
