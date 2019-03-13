#include <stdio.h>
#include <stdlib.h>
int main()
{
	static int *array1,*array2,*array3;
	int size,maxValue=-1,i,j,temp;

	printf("Enter the size of array: ");
	scanf("%d", &size);
	
	array1=(int *)malloc(sizeof(int)*size);
	for(i=1; i<=size; i++)
	{
		printf("Array[%d]:", i);
		scanf("%d", array1+i);
	}

	for(i=1; i<=size; i++)
	{
		if(maxValue<array1[i])
		{
			maxValue=array1[i];
		}
	}
	array2=(int *)malloc(sizeof(int)*maxValue);
	array3=(int *)malloc(sizeof(int)*size);
	for(i=1; i<=size; i++)
	{
  		temp=array1[i];
		array2[temp]=1;
	}
	j=1;
	for(i=1; i<=maxValue; i++)
	{
		if(array2[i]!=0)
		{
			array3[j]=i;
			j++;
		}
	}
	printf("\nUnsorted Array\n");
	printArray(array1,size);
	
	printf("\nCounting array.\n");
	printArray(array2,maxValue);
	
	printf("\nSorted Array.\n");
	printArray(array3,size);
	
	return 0;
}
void printArray(int *array,int size)
{
	int i;
	for(i=1; i<=size; i++)
	{
		printf("%d\t", array[i]);
	}
}
