#include <stdio.h>

int main(){
	static int frequency[25];
	int i=0,index;
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
	for(i=0; i<25	; i++)
	{
		if(frequency[i]!=0)
		{
			if(frequency[i]==1)
			{
				printf("There is %d %c letter.\n", (frequency[i]), ('a'+i));
			}
			else
			{
				printf("There are %d %c letters.\n", (frequency[i]), ('a'+i));
			}
		}
	}
	return 0;
}
