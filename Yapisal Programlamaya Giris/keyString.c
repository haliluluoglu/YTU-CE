#include <stdio.h>
#include <string.h>
/* Making with if condition
int main()
{
	char string[50];
	int length,i,key;

	printf("Enter a word, please. ");
 	scanf("%s", string);
 	printf("Enter key character, please. ");
 	scanf("%d", &key);
	
	length=strlen(string);
	printf("Firs word is: %s\n", string);
	for(i=0; i<length; i++)
	{
		if(i%2==0)
		{
			string[i]+=key;
		}
		else
		{
			string[i]-=key;
		}
	}
	printf("Encrypted word is: %s", string);
	return 0;
}*/
//Making without if condition.
int main()
{
	char string[50];
	int length,i,key;

	printf("Enter a word, please. ");
 	scanf("%[^\n]s", string);
 	printf("Enter key character, please. ");
 	scanf("%d", &key);

	length=strlen(string);
	printf("Firs word is: %s\n", string);
	for(i=0; i<length; i++)
 	{
		string[i]+=key;
		key=(-key);
	}
	printf("Encrypted word is: %s", string);
	return 0;
}


