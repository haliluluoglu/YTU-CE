#include <stdio.h>
#define MAX 100
int main()
{
 	static int frequency[25]={0};
	char histogram[MAX][MAX];
	char string[MAX];
	int	i=0,j,index;
	double normalized,sum=0.0;
	
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
	for(i=0; i<26; i++)
	{
		if(frequency[i]!=0)
		{
			sum +=frequency[i];
		}
	}

	for(j=0; j<26; j++)
	{
		if(frequency[j]!=0)
		{
			normalized=((double)frequency[j]/sum)*100;
			printf("%f\n", normalized);
			for(i=99; i>=(99-normalized); i--)
			{
				histogram[i][j]='*';
			}
		}
	}
	for(i=99; i>0; i--)
	{
		for(j=99; j>0; j--)
		{
			if(histogram[i][j]=='*')
			{
				printf("%c\t", histogram[i][j]);
			}

		}
	}
	return 0;
}

