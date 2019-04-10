#include <stdio.h>
#include <string.h>

int bfss(char *text,int n,char *pattern,int m)
{
	int i,j;
	for(i=0; i<(n); i++)
	{
		j=0;
		while((j<m)&&(pattern[j]==text[i+j]))
		{
   			j++;

			if(j==m)
			{
				return i;
			}
		}
	}
	return -1;
}
void main()
{
	char *text="HAYASTACKNEEDLE";
	char *pattern="NEEDLE";
	int n=strlen(text);
	int m=strlen(pattern);

	printf("Finded at index of: %d", bfss(text,n,pattern,m));
}
