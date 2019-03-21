#include <stdio.h>
#include <string.h>
#define SIZE 100
#define SIZE2 100

main()
{
	char string[SIZE],STACK[SIZE2];
	int i,number,controlNumber = 0,change = 0;
	
	
	scanf("%[^\n]s" , string1);
	number = strlen(string1);
	
	}

	printf("change: %d\n " , change );
	printf("controlNumber %d\n " , controlNumber );
	if((controlNumber == 0) && (change == 0))
	{
		printf("There is no bracket error.\n");
	}
	else if(controlNumber != 0)
	{
		printf("There is bracket error.\n");
	}
	else if(change == 1)
	{
		printf("You didn't use any bracket.");
	}
	else
	printf("Your expression %s" , string1);
}

	for(i = 0; i<= number-1; i++)
	{
		if((string1[i] == '(') || (string1[i] == '{'))
		{
			controlNumber++;
		}
		else if ((string1[i] == ')') || (string1[i] == '}' ))
		{
			controlNumber--;
		}
		else
		{
			change = 1;
		}
