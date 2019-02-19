#include <stdio.h>
#include <math.h>

void main()
{
	int number,cubic,temp,counter=1;
	
	printf("Enter a number,please: ");
	scanf("%d", &number);

	cubic=pow(number,3);
	temp=number;
	
	while(temp>0)
	{
		temp/=10;
		counter*=10;
	}
	if((cubic%counter)==number)
	{
		printf("This number is a trimorphic number.\n");
	}
	else
	{
		printf("This number is not a trimorphic number.\n");
	}
}
