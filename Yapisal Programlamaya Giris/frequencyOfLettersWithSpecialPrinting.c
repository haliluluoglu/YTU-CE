#include <stdio.h>
#include <stdlib.h>

int main(){
	static int frequency[25];
	char **printMatrix;
	int i=0,index,counter=0,j,tempCount,k;
	char string[100];
	char tempChar;

	printf("Enter a word, please: ");
	gets(string);
	while(string[i]!='\0')
	{
		if((string[i]<='z')&&(string[i]>='a'))
		{
			index=string[i]-'a';
			frequency[index]++;
		}
		i++;
 	}
	for(i=0; i<25; i++)
	{
		if(frequency[i]!=0)
		{
			counter++;
		}
	}
	printMatrix=(char **)malloc(sizeof(char *)*(counter+2));
	for(i=0; i<=(counter+2); i++)
	{
		printMatrix[i]=(char *)malloc(sizeof(char)*(counter+2));
	}
	for(i=0; i<(counter+2); i++)
	{
		for(j=0; j<(counter+2); j++)
		{
			printMatrix[i][j]=0;
		}
		printf("\n");
	}
	j=1;
	for(i=0; i<25; i++)
	{

		if(frequency[i]!=0)
		{
			printMatrix[counter+1][j]=i+'a';
			tempCount=counter;
			for(k=0; k<frequency[i]; k++)
			{
				tempCount--;
				printMatrix[tempCount][j]='*';
			}
			j++;
		}
	}
	for(i=0; i<=(counter+1); i++)
	{
		printMatrix[i][0]='|';
		printMatrix[counter][i+1]='-';
	}
	printf("\n");
 for(i=0; i<(counter+2); i++)
	{
		for(j=0; j<(counter+2); j++)
		{
			printf("%c", printMatrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
