#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void merge(int *array,int first,int middle,int nextMiddle,int second)
{
	int newArray[MAX];
	int a,b,c,d,e=0;
	a=first;
	b=nextMiddle;
	
	while(a<=middle && b<=second)
	{
		if(array[a]<array[b])
		{
			newArray[e++]=array[a++];
		}
		else
		{
			newArray[e++]=array[b++];
		}
	}
	while(a<=middle){newArray[e++]=array[a++];}
	while(b<=second){newArray[e++]=array[b++];}
	for(a=first, b=0; a<=second; a++, b++)
	{
		array[a]=newArray[b];
	}
}
void mergeAndSort(int *array,int first,int second)
{
	int middle;
	if(first<second)
	{
		middle=(first+second)/2;
		mergeAndSort(array,first,middle);
		mergeAndSort(array,middle+1,second);
		merge(array,first,middle,middle+1,second);
	}
}
int main()
{
	int *array;
	int size,i;
	
	printf("Enter size of array, please.");
	scanf("%d", &size);
	
	array=(int *)malloc(sizeof(int)*size);
	
	printf("Enter elements of array, please.");
	for(i=0; i<size; i++)
	{
		printf("Array[%d]: ", i);
		scanf("%d", &array[i]);
	}

	mergeAndSort(array,0,size-1);
	
	for(i=0; i<size; i++)
	{
		printf("%d\t", array[i]);
	}
	
	return 0;
}
