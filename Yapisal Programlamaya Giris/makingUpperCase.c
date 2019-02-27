#include <stdio.h>

int main()
{
	char paragraph[200];
	int i=1;
	
	printf("Enter a paragraph, please: ");
	gets(paragraph);
	printf("Unedited sentence--> %s\n", paragraph);
	if((paragraph[0]<='z')&&(paragraph[0]>='a'))
	{
		paragraph[0]+=('A'-'a');
	}
	while(paragraph[i]!='\0')
	{
		if(paragraph[i]=='.')
		{
			if((paragraph[i+1]<='z')&&(paragraph[i+1]>='a'))
			{
				paragraph[i+1]+=('A'-'a');
			}
		}
		i++;
	}
	printf("Edited sentence--> %s\n", paragraph);
	return 0;
}
