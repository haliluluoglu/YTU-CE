#include <stdio.h>
#include <stdlib.h>

int *readArray(int);
int *findMin(int[],int);
main()
{
	int number,*minElement;
	
	printf("Enter elemet number of array,please ");
	scanf("%d" , &number);
	minElement = readArray(number);
	printf("Minimum element is : %d" , *minElement);
}
int *readArray(int number)
{
	int array[number],i,*minPtr;
	
	printf("Enter element of array,please \n");
	for(i = 0; i<number; i++)
	{
		printf("Array[%d]: " , i);
		scanf("%d" , &array[i]);
	}
	minPtr = findMin(array,number);
	return minPtr;
}
int *findMin(int array[],int number)
{
	int i,place = 0,*minPtr = &array[0];
	
	for(i = 1; i<number;i++)
	{
		if(*minPtr > array[i])
		{
			place = i;
		}
	}
	minPtr += place;
	return minPtr;
}

//Different Solution for findMin Function
/*
int *findMin(int array[],int number)
{
	int i,*minPtr = &array[0]; 

	for(i = 1; i<number;i++)
	{
		if(*minPtr > array[i])
		{
			minPtr = &array[i];
		}
	}
	return minPtr;
}
*/
