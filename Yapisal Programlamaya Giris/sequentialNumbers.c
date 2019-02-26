#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,n;
	int **matrix;
	
	printf("Enter range of sequential: ");
	scanf("%d", &n);
	
	matrix=(int **)malloc(sizeof(int *)*n);
	for(i=0; i<=n; i++)
	{
		matrix[i]=(int *)malloc(sizeof(int)*n);
	}
	for(i=0; i<n; i++)
	{
		matrix[0][i]=i+1;
	}
	for(i=1; i<n; i++)
	{
		for(j=0; j<=n; j++)
		{
			matrix[i][j]=matrix[i-1][j+1];
   			matrix[i][j]=matrix[i-1][(j%n)+1];
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}
