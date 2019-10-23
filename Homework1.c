#include <stdio.h>

#define MAX 10

typedef struct node
{
	float xApsis[MAX];
	float yOrdinat[MAX];
	
}POINTS;



void swap(int *num1, int *num2);
void quickSort(float array[], int low, int high);

void main()
{
	int sizeOfCoordinates; //N adet kullanýcý tarafýndan verilen nokta kordinatlarý sayýsý
	int i; //For için kullanýlan deðiþken
	
	POINTS *first = (POINTS *) malloc(sizeof(POINTS) * sizeOfCoordinates);
	
	printf("How many X coordinates? ");
	scanf("%d" , &sizeOfCoordinates);
	
	for(i=0; i<sizeOfCoordinates; i++)
	{
		printf("Enter %d. X coordinate, please " , (i+1));
		scanf("%f", &(first->xApsis[i]));
		printf("Enter %d. Y coordinate, please " , (i+1));
		scanf("%f", &(first->yOrdinat[i]));
		printf("\n");
	}
	printf("regular\n");
	for(i=0; i<sizeOfCoordinates; i++)
	{
		printf("%f , %f \n" , (first->xApsis[i]) , (first->yOrdinat[i]));
	}
	
	quickSort(first->xApsis, 0, sizeOfCoordinates-1);
	
	for(i=0; i<sizeOfCoordinates; i++)
	{
		printf("%f , %f \n" , (first->xApsis[i]) , (first->yOrdinat[i]));
	}
	
}	


void quickSort(float array[], int low, int high)
{
	int i,j,pivot;
	
	//printf("bastir: %d - %d\n" , low,high);
	

	
	if(low<high)
	{
		i=low;
		j=high;
		pivot=array[low];
		
		while(i<j)
		{
			
			while((array[i]<=pivot )&&(i<high))	
			{
				i++;
			}
			while(array[j]>pivot)
			{
				j--;
			}
			if(i<j)
			{
				swap(&array[j], &array[i]);
			}
			
		}
		swap(&pivot,&array[j]);
			for(i=0; i<=high; i++)
	{
		printf("cekkk");
		printf("%f\n" , array[i]);
	}
		quickSort(array,low,j-1);
		quickSort(array,j+1,high);
		}
}

void swap(int *num1, int *num2)
{
	int temp;
	
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
