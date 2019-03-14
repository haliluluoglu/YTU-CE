#include <stdio.h>
#define MAX 20

void printArray(int *,int);

int main()
{
	int size,i,index1,index2,summary=0,k;
	int array[MAX];
	
	printf("Enter size of the array: ");
	scanf("%d", &size);
	
	printf("Enter elements of array.\n");
	for(i=0; i<size; i++)
	{
		printf("Array[%d]: ", i);
		scanf("%d" , &array[i]);
	}
	index1=0;
	index2=2;
	while(index1<size)
	{
		printArray(array,size);
		summary=array[index1]+array[index1+1];

		while((array[index2]<=summary)&&(index2<size))
		{

			index2++;
		}
		for(k=size-1; k>=index2; k--)
		{
			array[k+1]=array[k];
		}
		printf("%d\n", summary);
		array[index2]=summary;
		index1+=2;
		index2=index1+2;
		size++;
	}
	size--;
	printf("Sorted Array.\n");
	printArray(array,size);
}

void printArray(int *array,int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("%d\t" , array[i]);
	}
}
