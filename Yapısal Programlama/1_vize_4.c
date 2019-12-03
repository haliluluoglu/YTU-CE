#include <stdio.h>
#include <stdlib.h>

int decompress(int *array,int size,int *newArraay);

int main()
{
	int array[20];
	int i,size,newSize;
	int *newArray=calloc(sizeof(int),1);

	printf("How many element do you have? ");
	scanf("%d", &size);
	
	printf("Enter your array, please\n");
	for(i=0; i<size; i++)
	{
		printf("Array[%d]: ", i);
		scanf("%d", &array[i]);
	}
	
	newSize=decompress(array,size,newArray);
	
	for(i=0; i<newSize; i++)
	{
		printf("%d-", newArray[i]);
	}
	
	return 0;
}

int decompress(int *array,int size,int *newArray)
{
	int number=0,run,length,j,i;
	int *temp;
	
	for(i=0; i<size/2; i++)
	{
		run=array[i*2];
		length=array[i*2+1];
		temp=realloc(newArray,(length+number)*sizeof(int));
		newArray=temp;
		for(j=0; j<length; j++)
		{
			newArray[number+j]=run;
		}
		number+=length;
	}
	return number;
}
