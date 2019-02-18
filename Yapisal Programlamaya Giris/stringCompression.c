#include <stdio.h>
#include <string.h>
#define MAX 100

void stringFunction(char string[])
{
	char stringNew[MAX],temp[MAX];
	int counter = 1,i = 0,j = 0,length2,k;
	
	while(string[i] != '\0')
	{
		if(string[i] == string[i+1])
		{
			counter++;
		}
		else
		{
			itoa(counter,temp,10);
			length2 = strlen(temp);
			for(k = 0; k<length2; k++)
			{
				stringNew[j] = temp[k];
				j++;
			}
			stringNew[j] = string[i];
			counter = 1;
			j++;
		}
	
		i++;
	}
	printf("%s" , stringNew);
}
void main()
{
	char string[MAX];
	
	printf("Enter your word,please \n");
	scanf("%s" , string);
	
	stringFunction(string);
}
