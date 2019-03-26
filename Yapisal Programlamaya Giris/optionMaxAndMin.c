#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *array;
	int size,i,choise,result;
	
	printf("Enter size of array, please: ");
	scanf("%d", &size);
	
	array=(int *)malloc(sizeof(int)*size);
	printf("Enter elements of array.\n");
	for(i=0; i<size; i++)
	{
		printf("\nArray[%d]: ", i);
		scanf("%d", &array[i]);
	}
	do
	{
		menu();
		scanf("%d", &choise);
	}while((choise!=1)&&(choise!=2));

 	result=maxMinArray(array,size,choise);
 	
	if(choise==1)
	{
		printf("\n");
		printf("You chose minimum function.\n");
		printf("Your min value is: %d", result);
	}
	else
	{
		printf("\n");
		printf("You chose maximum function.");
		printf("Your max value is: %d", result);
	}
}
void menu()
{
	printf("\nFor find minimum element of array press 1.\n");
	printf("For find maximum element of array press 2.\n");
}

int maxMinArray(int *array, int size, int choise)
{
	int min,max,i;
	switch(choise)
	{
		case 1:
			min=array[0];
			for(i=1; i<size; i++)
			{
				if(min>array[i])
				{
					min=array[i];
				}
			}
			return min;
		case 2:
			max=array[0];
			for(i=1; i<size; i++)
			{
				if(max<array[i])
				{
					max=array[i];
				}
			}
			return max;
		default:
			printf("Wrong choise.Please enter different choise.");
	}
	
}
