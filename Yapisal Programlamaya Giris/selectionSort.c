#include <stdio.h>

void main()
{
	int size,i,j,minIndex,temp;
	int *array;
	
	printf("Enter size of array,please.");
	scanf("%d", &size);
	
	array=(int *)malloc(sizeof(int)*size);
	
	printf("Enter elements of array.\n");
	for(i=0; i<size; i++)
	{
		printf("Array[%d]: ", i);
		scanf("%d", &array[i]);
	}
	for(i=0; i<(size-1); i++)
	{
		minIndex=i;
		for(j=i+1; j<size; j++)
		{
			if(array[j]<array[minIndex])
			{
				minIndex=j;
			}
		}
		if(minIndex!=i)
		{
			temp=array[minIndex];
			array[minIndex]=array[i];
			array[i]=temp;
		}
	}
	printf("Sorted array.");
	for(i=0; i<size; i++)
	{
		printf("%d\t", array[i]);
	}
}
