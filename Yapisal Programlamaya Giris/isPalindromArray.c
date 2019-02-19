#include <stdio.h>
#include <stdlib.h>

void main()
{
	int number,temp,counter=0,i=0,digitNumber;
	int *array;
	
	printf("Enter a number,please. ");
	scanf("%d", &number);
	
	temp=number;
	while(temp>0)
	{
		temp/=10;
		counter++;
	}
	digitNumber=counter;
	temp=number;
	array=(int *)malloc(sizeof(int)*counter);
	while(counter>0)
 	{
 		array[counter-1]=(temp%10);
 		temp/=10;
 		counter--;
	}
	i=0;
	while((i<=(digitNumber/2))&&(array[i]==array[digitNumber-i-1]))
	{
		i++;
	}
	if(i>(digitNumber/2))
	{
	 	printf("This number is a palindrom number. \n");
	}
	else
	{
		printf("This number is not a palindrom number. \n");
	}
}
