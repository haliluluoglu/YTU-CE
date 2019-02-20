#include <stdio.h>
#include <stdlib.h>

void main()
{
	int sellerNumber,productNumber,i,j,k,m,total,max=0,bestSeller;
	int **moneyTable;
	int *price,*sales;
	
	printf("How many seller? ");
	scanf("%d", &sellerNumber);
	
	printf("How many product? ");
	scanf("%d", &productNumber);
	
	price=(int *)malloc(sizeof(int)*productNumber);
	sales=(int *)malloc(sizeof(int)*sellerNumber*productNumber);
	
	printf("Enter price of products,please.\n");
	for(i=0; i<productNumber; i++)
	{
		printf("Enter %d. price ", i+1);
		scanf("%d", price+i);
	}
	printf("Enter all sales.\n");
	i=0;
	while(i<productNumber*sellerNumber)
	{
		for(j=1; j<=sellerNumber; j++)
		{
			for(k=1; k<=productNumber; k++)
			{
				printf("Enter %d. sale of %d. seller: ", k, j);
				scanf("%d", sales+i);
				i++;
			}
		}
	}
	moneyTable=(int **)malloc(sizeof(int *)*sellerNumber);
	for(i=0; i<=sellerNumber; i++)
	{
		moneyTable[i]=(int *)malloc(sizeof(int)*productNumber);
	}
	k=0; m=0;
	for(i=0; i<sellerNumber; i++)
	{
		total=0;
		for(j=0; j<productNumber; j++)
		{
			*(*(moneyTable+j)+i)= *(sales+k) * *(price+m);
			k++;
			m++;
			total+= *(*(moneyTable+j)+i);
		}
		m=0;
		if(max<total)
		{
			max=total;
			bestSeller=i;
			
		}
	}
	for(i=0; i<=sellerNumber; i++)
	{
		for(j=0; j<productNumber-1; j++)
		{
			printf("%d\t", *(*(moneyTable+i)+j));
		}
		printf("\n");
	}
	printf("\nThe best seller is %d. seller.won with %d money.", bestSeller+1, max);
}
