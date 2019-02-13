#include <stdio.h>
#include <stdlib.h>

/*void main()
{
	int number,i;
	int *array;
	
	printf("Which fibonacci number do you want? ");
	scanf("%d", &number);

	array = (int *)malloc(sizeof(int)*number);
	array[0]=1;
	array[1]=1;

	for(i=2; i<number; i++)
	{
		array[i]=array[i-1]+array[i-2];
	}
	for(i=0; i<number; i++)
	{
		printf("%d\t", array[i]);
	}
}*/

void main()
{
	int i,fn,f1=1,f2=1,number;
	
 	printf("Which fibonacci number do you want? ");
 	scanf("%d", &number);
 	printf("%d\t%d\t", f1,f2);
 	
 	for(i=3; i<=number; i++)
 	{
 		fn=f1+f2;
 		f1=f2;
		f2=fn;
		printf("%d\t", fn);
	}
}
