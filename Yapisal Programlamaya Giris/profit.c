#include <stdio.h>
#include <stdlib.h>

#define MAX 3

int main()
{
	int **profit;
	int row,column,i,j;
	int price[MAX][MAX]={{2,1,4},{5,3,2},{10,1,3}};
 	int totalByte=sizeof(price);
	int columnByte=sizeof(price[0]);
 	row=totalByte/columnByte;
 	column=columnByte/sizeof(int);
 	
 	profit=(int **)malloc(sizeof(int *)*row);
 	for(i=0; i<=row; i++)
 	{
		profit[i]=(int *)malloc(sizeof(int)*column);
 	}
	profit[0][0]=price[0][0];
	for(i=1; i<row; i++)
	{
		 profit[i][0]=price[i][0]+profit[i-1][0];
	}
	for(i=1; i<column; i++)
	{
		profit[0][i]=profit[0][i-1]+price[0][i];
	}
  	for(i=1; i<row; i++)
	{
		for(j=1; j<column; j++)
		{
			if(profit[i-1][j]>profit[i][j-1])
			{
				profit[i][j]=profit[i-1][j]+price[i][j];
			}
			else
			{
				profit[i][j]=profit[i][j-1]+price[i][j];
			}
		}
	}
	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
		{
			printf("%d\t", profit[i][j]);
		}
		printf("\n");
	}
	printf("The best profit is: %d", profit[MAX-1][MAX-1]);
	
	return 0;
}
