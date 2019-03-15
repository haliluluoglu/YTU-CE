#include <stdio.h>
#include <string.h>

int main()
{
	int array[]={2,5,7,10,12,17,20,27,33,35,36,42,54,57,65,66,72,75,80};
	int first=0,last,middle,search;
	
	printf("Which number do you want to search? ");
	scanf("%d" , &search);
	
	last=sizeof(array)/sizeof(array[0]);
	middle=(last+first)/2;
	
	while((first<last)&&(array[middle]!=search))
	{
		if(array[middle]>search)
		{
			last=middle-1;
		}
		else
		{
			first=middle+1;
		}
		middle=(last+first)/2;
	}
	if(array[middle]==search)
	{
		printf("There is element you are searching in this array.\n");
		printf("It is index is: %d", middle);
	}
	else
	{
		printf("There is no element you are searching in this array.\n");
	}

	return 0;
}
