#include <stdio.h>
#include <stdlib.h>

int main(){
	static int frequency[25];
	char **printMatrix;
	int i=0,index,counter=0,j,tempCount,k;
	char string[100];

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
	printMatrix=(char **)malloc(sizeof(char *)*(counter+1));
	for(i=0; i<=counter; i++)
	{
		printMatrix[i]=(char *)malloc(sizeof(char)*(counter+1));
	}
	j=1;
	for(i=0; i<25; i++)
	{
		if(frequency[i]!=0)
		{
			printMatrix[counter][j]=(char)(i+'a');
			tempCount=counter;
			for(k=1; k<frequency[i]; i++)
			{
				tempCount--;
				printMatrix[tempCount][j]='*';
			}
			j++;
		}
	}

	for(i=1; i<=counter; i++)
	{
		printMatrix[i][1]='|';
		printMatrix[5][i]='-';
	}
	printf("enter");
	for(i=1; i<=counter; i++)
	{
		for(j=1; j<=counter; j++)
		{
			printf("%c", printMatrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
