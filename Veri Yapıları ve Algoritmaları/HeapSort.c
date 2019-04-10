#include <stdio.h>
#include <stdlib.h>
void maxHeapify(int *array,int i,int N)
{
	int left=2*i;
	int right=2*i+1;
	int largest,temp;
	
	if((left<N)&&(array[left]>array[i]))
	{
		largest=left;
	}
	else
	{
		largest=i;
	}
	
	if((right<=N)&&(array[right]>array[i]))
	{
		largest=right;
	}
	
	if(largest!=i)
	{
		temp=array[i];
		array[i]=array[largest];
		array[largest]=temp;
		maxHeapify(array,largest,N);
	}
}
void buildMaxHeapify(int *array,int N)
{
	int i;
	for(i=(N/2); i<0; i--)
	{
		maxHeapify(array,i,N);
	}
}
int *heapSort(int *array,int N)
{
	int i,temp;
	
	buildMaxHeapify(array,N);

	for(i=N-1; i<=1; i--)
	{
		temp=array[0];
		array[0]=array[i];
		array[i]=temp;

		maxHeapify(array,0,i-1);
	}
	return array;
}
void heapExtractMax(int *array,int N)
{
	if(N>=1)
	{
		int max=array[0];
		array[0]=array[N-1];
		maxHeapify(array,0,N-1);
	}
	else
	{
		printf("Heap is empty.\n");
	}
}
void heapIncreaseKey(int *array,int i,int key)
{
	int temp;
	if(key>=array[i])
	{
		array[i]=key;
		while((i>0)&&(array[i/2]<array[i]))
		{
			temp=array[i];
			array[i]=array[i/2];
			array[i/2]=temp;
			i/=2;
		}
	}
}
void main()
{
	int *array;
	int N,i;
	
	printf("Enter size of array,please: ");
	scanf("%d", &N);
	
	array=(int *)malloc(sizeof(int)*N);
	
	for(i=0; i<N; i++)
	{
		printf("Array[%d]: ", i);
		scanf("%d", &array[i]);
	}
	
	array=heapSort(array,N);
	
	for(i=0; i<N; i++)
	{
		printf("%d\t", array[i]);
	}
	
    return 0;
}
