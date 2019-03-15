#include <stdio.h>
#define MAX 100
int main()
{
 	static int frequency[26];
	static char histogram[MAX][MAX];
 	char string[MAX];
	int	i=0,j,index,normalized,sum;

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
		printf("%c:%d\n",'a'+i,frequency[i]);
		sum +=frequency[i];
	}
	for(j=0; j<26; j++)
	{
		normalized=(frequency[j]/(float)sum)*100;
		for(i=99; i>=(100-normalized); i--)
		{
			histogram[i][j]='*';
		}
	}
 	for (i=0;i<100;i++)
	{
		for (j=0;j<26;j++)
		{
			printf("%c ",histogram[i][j]);
		}
		printf("\n");
	}
	return 0;
}
