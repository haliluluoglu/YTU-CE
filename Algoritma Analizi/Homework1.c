#include <stdio.h>

#define MAX 10

typedef struct node
{
	int xApsis[MAX];
	int yOrdinat[MAX];
	
}POINTS;



void swap(int *num1, int *num2);
void quickSort(int array[], int low, int high);

void main()
{
	int sizeOfCoordinates; //N adet kullanýcý tarafýndan verilen nokta kordinatlarý sayýsý
	int i; //For için kullanýlan deðiþken
	POINTS first;
	
	printf("How many X coordinates? ");
	scanf("%d" , &sizeOfCoordinates);
	
	
	
	
	for(i=0; i<sizeOfCoordinates; i++)
	{
		printf("Enter %d. X coordinate, please " , (i+1));
		scanf("%d", &(first.xApsis[i]));
		printf("Enter %d. Y coordinate, please " , (i+1));
		scanf("%d", &(first.yOrdinat[i]));
		printf("\n");
	}
	printf("regular\n");
	for(i=0; i<sizeOfCoordinates; i++)
	{
		printf("%d , %d \n" , (first.xApsis[i]) , (first.yOrdinat[i]));
	}
	printf("NEXT\n");
	quickSort(first.xApsis, 0, sizeOfCoordinates-1);
	
	for(i=0; i<sizeOfCoordinates; i++)
	{
		printf("%d \n" , (first.xApsis[i]) );
	}
	
}	


void quickSort(int array[],int low,int high)
{
    int i,j,pivot;
    int temp;

     if(low < high){
         pivot = low;
         i = low;
         j = high;

         while(i < j)
		 {
             while(array[i] <= array[pivot] && i < high)
             {
             	i++;
			 }
             while(array[j] > array[pivot])
             {
             	j--;
			 }
             if(i <j)
			 {
                  temp = array[i];
                  array[i] = array[j];
                  array[j] = temp;
             }
         }
         //swap(&array[pivot],&array[j]);
         temp = array[pivot];
         array[pivot] = array[j];
         array[j] = temp;
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
