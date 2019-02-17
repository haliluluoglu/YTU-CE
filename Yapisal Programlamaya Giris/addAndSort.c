#include <stdio.h>
#define MAX 10

void bubbleSort(int array[],int lenght)
{
	int i,j,tmp;
	
	for(i = 0; i<=lenght; i++)
	{
		for(j = 0; j<=lenght-1; j++)
		{
			if(array[j] > array[j+1])
			{
				tmp = array[j];
				array[j] = array[j+1];
				array[j+1] = tmp;
			}
		}
	}
	printArray(array,lenght);
}
printArray(int array[],int i)
{
	int j;
	
	for(j = 0; j<=i; j++)
	{
		printf("%d " , array[j]);
	}
	printf("\n");
}
main()
{
	int array[MAX];
	int i,number;
	
	for(i = 0; i<MAX; i++)
	{
		printf("Enter a number which wishing to add,please ");
		scanf("%d" , &array[i]);
		
		bubbleSort(array,i);
	}
}
