#include <stdio.h>

int main()
{
	static int *array1,*array2,*array3;
	int len1,len2,i,j,k,len3;
	printf("Enter length of first array, please: ");
	scanf("%d", &len1);
	printf("Enter length of second array, please: ");
	scanf("%d", &len2);
	
	array1=(int *)malloc(sizeof(int)*len1);
	array2=(int *)malloc(sizeof(int)*len2);
	len3=len1+len2;
	array3=(int *)malloc(sizeof(int)*len3);

	printf("Enter first array...\n");
	for(j=0; j<len1; j++)
	{
		printf("Array1[%d] ", j);
		scanf("%d", &array1[j]);
	}
	printf("Enter second array...\n");
	for(j=0; j<len2; j++)
	{
		printf("Array2[%d] ", j);
		scanf("%d", &array2[j]);
	}
	printf("%d %d\n", len1,len2);
	array1[len1]=10000;
	array2[len2]=10000;
	i=0; j=0;
	printf("Sorted array.\n");
	for(k=0;k<len3; k++)
	{
 		if(array1[i]>array2[j])
		{
			array3[k]=array2[j];
			j++;
		}
		else
		{
			array3[k]=array1[i];
  			i++;
		}
	}
	for(i=0; i<len3; i++)
	{
		printf("%d\t", array3[i]);
	}
	return 0;
}
