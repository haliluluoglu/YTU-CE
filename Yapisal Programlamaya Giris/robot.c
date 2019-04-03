#include <stdio.h>
/*FIRST METHOD
void main()
{
	int stepNumber,size,i,temp,rRow,rColumn;

	srand(time(NULL));
	printf("Enter number of step: ");
	scanf("%d", &stepNumber);
	
	printf("Enter rows and coloums of matrix: ");
	scanf("%d" , &size);
	
 	rRow=rand()%size;
 	rColumn=rand()%size;
 	
 	printf("Your robot is: %d-%d\n", rRow, rColumn);
	
	for(i=0; i<stepNumber; i++)
	{
		temp=rand()%4;
		switch(temp)
		{
			case 0:
				rColumn++;
				break;
			case 1:
				rColumn--;
				break;
			case 2:
				rRow--;
				break;
			case 3:
				rRow++;
				break;
			default:
				printf("WRONG NUMBER");
		}
		printf("Your robot went--> %d-%d\n", rRow,rColumn);
	}
}*/
/*SECOND METHOD
void main()
{

	int stepNumber,size,i,temp1,temp2,rRow,rColumn;

		srand(time(NULL));
		printf("Enter number of step: ");
		scanf("%d", &stepNumber);

		printf("Enter rows and coloums of matrix: ");
		scanf("%d" , &size);

	 	rRow=rand()%size;
	 	rColumn=rand()%size;

	 	printf("Your robot is: %d-%d\n", rRow, rColumn);

		for(i=0; i<stepNumber; i++)
		{
			temp1=rand()%3;
			temp2=rand()%3;

			rRow=rRow-1+temp1;
			rColumn=rColumn-1+temp2;

			printf("Your robot went--> %d-%d\n", rRow,rColumn);
		}
}*/
//THIRD METHOD
void main()
{
	int stepNumber,size,i,temp1,rRow,rColumn;
	int moveMatrix[4][2]={{0,1},{0,-1},{-1,0},{1,0}};

		srand(time(NULL));
		printf("Enter number of step: ");
		scanf("%d", &stepNumber);

		printf("Enter rows and coloums of matrix: ");
		scanf("%d" , &size);

	 	rRow=rand()%size;
	 	rColumn=rand()%size;

	 	printf("Your robot is: %d-%d\n", rRow, rColumn);

		for(i=0; i<stepNumber; i++)
		{
			temp1=rand()%4;

			rRow+=moveMatrix[temp1][0];
			rColumn+=moveMatrix[temp1][1];

			printf("Your robot went--> %d-%d\n", rRow,rColumn);
		}
}
