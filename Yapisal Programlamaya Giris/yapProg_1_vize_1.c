#include <stdio.h>

float findMean(int table[][4], int N,int codeNo, int inputChoise, int outputChoise, int *number)
{
	int i;
	float summary=0;
	*number=0;

	for (i=0;i<N;i++)
	{
	if (table[i][inputChoise]==codeNo)
	{
		summary += table[i][outputChoise];
		(*number)++;
	}
	}
	return summary/(*number);
}
int main()
{
	int table[50][4];
	int N,productStockCode,sellerID,total,i,j;
	float mean;

	printf("Enter size of matrix,please: ");
	scanf("%d",&N);
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<N; j++)
		{
			printf("Matrix[%d][%d]: ", i, j);
			scanf("%d", &table[i][j]);
		}
	}
	
	printf("Enter product stock code, please. ");
	scanf("%d",&productStockCode);
	mean= findMean (table, N, productStockCode, 1, 2, &total);
	
	printf("Unit price mean = %f Number of seller: %d\n",mean,total);
	mean = findMean (table, N, productStockCode, 1, 3, &total);
	
	printf("Sales number mean:%f Number of seller:%d\n",mean,total);
	printf("Enter seller id: ");
	scanf("%d",&sellerID);
	mean = findMean (table, N, sellerID, 0, 2, &total);
	
	printf("Unit price mean:%f Number of seller sold product: %d\n",mean,total);
	mean = findMean (table, N, sellerID, 0, 3, &total);
	printf("Number of sales meanı: %f Number of seller sold product:%d\n",mean,total);
	
	return 0;
}
