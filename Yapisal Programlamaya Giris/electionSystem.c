#include <stdio.h>
#include <stdlib.h>

void partyMenu(int);

int main()
{
	static int *votes,*counting={0};
	int partyNumber,voterNumber,counter=0,i,max,winner;
	
	printf("Enter number of party: ");
	scanf("%d", &partyNumber);
	
	printf("How many are there voters? ");
	scanf("%d", &voterNumber);
	
	votes=(int *)malloc(sizeof(int)*voterNumber);
	
	printf("Please enter votes...\n");
	while(counter<voterNumber)
	{
		printf("\n%d. voter enter your choise, please. \n" , counter+1);
		partyMenu(partyNumber);
		scanf("%d", votes+counter);
		while(control(*(votes+counter),partyNumber)==0)
		{
			scanf("%d", votes+counter);
		}
		counter++;
	}

	counting=(int *)malloc(sizeof(int)*voterNumber);
	for(i=0; i<voterNumber; i++)
	{
		counting[i]=0;
	}
	
	for(i=0; i<voterNumber; i++)
	{
		*(counting+*(votes+i))+=1;
	}
	printf("These are votes.\n");
	for(i=0; i<voterNumber; i++)
	{
		printf("%d.party took %d vote/votes.\n", (i+1), *(counting+i));
	}
	max=0;
	for(i=0; i<partyNumber; i++)
	{
		if(counting[i]>max)
		{
			max=counting[i];
			winner=i;
		}
	}
	printf("The winner is %c party.It took %d votes.Congratulations.\n", 'A'+winner, max);
	
	return 0;
}
void partyMenu(int partyNumber)
{
	int i=0;
	printf("\nChoose a party number.\n");
	while(i<=partyNumber)
	{
		printf("\nFor %c party press %d\n", 'A'+i, i);
		i++;
	}
	printf("\n\n");
}
int control(int number,int partyNumber)
{
	if(number>partyNumber)
	{
		printf("Invalid party number.Please, enter a valid party number.\n");
		return 0;
	}
	else
	{
		return 1;
	}
}
