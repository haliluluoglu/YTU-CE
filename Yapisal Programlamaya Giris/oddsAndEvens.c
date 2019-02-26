#include <stdio.h>
#include <stdlib.h>
/* THE WORST WAY...
int main()
{
	int i,j=0,N;
	int *array;
	
	printf("Enter last number, please: ");
	scanf("%d", &N);
	array=(int *)malloc(sizeof(int)*N);
	
	for(i=1; i<=N; i++)
	{
		if(i%2==1)
		{
			array[j]=i;
			j++;
		}
	}
	for(i=1; i<=N; i++)
	{
		if(i%2==0)
		{
			array[j]=i;
			j++;
		}
	}
	for(i=0; i<N; i++)
	{
		printf("%d\t", array[i]);
	}
	return 0;
}*/
/* WORSE THAN LAST ONE WAY...
int main()
{
 	int i,j=0,K,N;
	int *array;

	printf("Enter last number, please: ");
	scanf("%d", &N);
	K=N;
	array=(int *)malloc(sizeof(int)*N);
	
	for(i=1; i<=N; i++)
	{
		if(i%2==1)
		{
			array[j]=i;
			j++;
		}
		else
		{
			array[K-1]=i;
			K--;
		}
	}
	for(i=0; i<N; i++)
	{
		printf("%d\t", array[i]);
	}
	return 0;
}*/
int main()
{
 	int i,j=0,K,N,NN;
	int *array;

	printf("Enter last number, please: ");
	scanf("%d", &N);
	K=N;
	NN=(N+1)/2;
	array=(int *)malloc(sizeof(int)*N);

	for(i=1; i<=NN; i++)
	{
  		array[K-1]=2*i;
		array[j]=2*i-1;
		K--;
		j++;
	}
	for(i=0; i<N; i++)
	{
		printf("%d\t", array[i]);
	}
	return 0;
}
