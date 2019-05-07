#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *N;
void search(int *array1,int *array2,int first,int last);
int sort(int *array,int first,int last,int number);
void swap(int *num1,int *num2);
void printArray(int *array);

int main()
{
	int *Key,*Lock;
	int size,i,j;
	
	printf("Enter size of the arrays, please: ");
	scanf("%d", &size);
 	N=size;
	
	Key=(int *)malloc(sizeof(int)*size);
	Lock=(int *)malloc(sizeof(int)*size);
	
	printf("Enter elements of keys.\n");
	for(i=0; i<size; i++)
	{
		printf("Key[%d]: ", i);
		scanf("%d", &Key[i]);
	}
	printf("Enter elements of locks.\n");
	for(j=0; j<size; j++)
	{
		printf("Lock[%d]: ",j);
		scanf("%d", &Lock[j]);
	}

	search(Lock,Key,0,size-1);
	printf("\nSorted key array\n");
	printArray(Key);
	printf("\nSorted lock array\n");
	printArray(Lock);
	
	return 0;
}

void search(int *key,int *lock,int first,int last)
{
	srand(time(NULL));
	
	int number,pivot;

 	if(last-first>0)
 	{
 		number=key[(rand()%(last-first))+first];
		pivot=sort(lock,first,last,number);
		printf("Sorted lock array for random number: %d\n", number);
		printArray(lock);

		sort(key,first,last,lock[pivot]);
		printf("Sorted key array for pivot number: %d\n", key[pivot]);
		printArray(key);

		search(key,lock,first,pivot-1);
	 	search(key,lock,pivot+1,last);
	}

 	
}

int sort(int *array,int first,int last,int number)
{
	int tempFirst=first,tempLast=last;

	if(first<last)
	{
		while(tempFirst<tempLast)
		{
			while(number<array[tempLast])
			{
				tempLast = tempLast-1;
			}
			while(number>array[tempFirst])
			{
				tempFirst = tempFirst+1;
			}
			swap(&array[tempFirst],&array[tempLast]);
		}
		printArray(array);
	}
	return tempFirst;
}

void swap(int *num1,int *num2)
{
	int temp;
	
	temp=*num1;
	*num1=*num2;
	*num2=temp;
}

void printArray(int *array)
{
	int i;
	for(i=0; i<N; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
}
