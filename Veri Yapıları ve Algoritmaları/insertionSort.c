#include <stdio.h>
#include <stdlib.h>

void printArray(int *,int);

void main()
{
	int number,i,j,*array,key;
	
	printf("Enter number of array,please: ");
	scanf("%d", &number);
	
	array=(int *)malloc(sizeof(int)*(number+1));
	
	printf("Enter elements of array,please.\n");
	for(i=0; i<number; i++)
	{
		printf("%d. element of array: ", i+1);
		scanf("%d", array+i);
	}
	printf("Array not sorted.\n");
	printArray(array,number);
	for(j=1; j<number; j++)
	{
		key=*(array+j);
		i=j-1;
		while((i>=0)&&(*(array+i)>key))
		{

			*(array+(i+1))=*(array+i);
			i--;
			*(array+(i+1))=key;
		}
	}
	printf("Array sorted.\n");
	printArray(array,number);
}
void printArray(int *array,int number)
{
	int i;
	for(i=0; i<number; i++)
	{
		printf("%d\t", *(array+i));
	}
	printf("\n");
}
