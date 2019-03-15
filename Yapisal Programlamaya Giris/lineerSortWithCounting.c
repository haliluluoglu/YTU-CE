#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *array,*counting,*final;
	int i,j,size;
	
	printf("Enter size of array: ");
	scanf("%d", &size);
	
	array=(int *)malloc(sizeof(int)*size);
	printf("Enter elements of array.\n");
	for(i=0; i<size; i++)
	{
		printf("Array[%d]: ", i);
		scanf("%d", array+i);
	}
	counting=(int *)malloc(sizeof(int)*size);
	final=(int *)malloc(sizeof(int)*size);
	for(i=0; i<size; i++)
	{
		counting[i]=0;
		final[i]=0;
	}
	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
		{
			if(array[i]>array[j])
			{
				counting[i]++;
			}
		}
	}
	i=0;
	while(i<size)
	{

		if(final[counting[i]]==array[i])
		{
			final[counting[i]+1]=array[i];
		}
  		else
  		{
			final[counting[i]]=array[i];
  		}
		i++;
	}
	for(i=0; i<size; i++)
	{
		printf("%d\t", final[i]);
	}
	return 0;
}
