#include <stdio.h>
#include <string.h>
#define MAX 100

int controlFunction(char stackArray[],char array[],int i,int indis)
{
	if((stackArray[indis] == '(') && (array[i] == ')'))
	{
		return 1;
	}
	else if((stackArray[indis] == '[') && (array[i] == ']'))
	{
		return 1;
	}
	else if((stackArray[indis] == '{') && (array[i] == '}'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void main()
{
	char string[MAX],stack[MAX];
	int i = 0,lenght,indis = 0,control = 1;
	
	printf("Enter your expression,please ");
	scanf("%[^\n]s" , &string);
	lenght = strlen(string);
	while((control == 1) && (i<lenght)) 
	{
			if((string[i] == '(') || (string[i] == '[') || (string[i] == '{'))
			{	
				stack[indis] = string[i];
				indis++;
				
			}
			else if((string[i] == ')') || (string[i] == ']') || (string[i] == '}'))
			{
				if(controlFunction(stack,string,i,indis-1) == 0)
				{
					control = 0;
				}	
				else
				{	
					indis--;	
				}
			}
			i++;
	}
	if((control == 1) && (indis == 0))
	{
		printf("This expression is true.\n");
	}
	else
	{
		printf("This expression is false!\n");
	}
}
