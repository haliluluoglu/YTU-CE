#include<stdio.h>

void sadelestir(int *,int *);
void topla(int,int,int,int,int *,int *);

int main()
{
	int pay1,payda1,pay2,payda2,pay,payda;

	printf("1. Kesir Pay ve Payda: ");
	scanf("%d %d" ,&pay1,&payda1);
	printf("2. Kesir Pay ve Payda: ");
	scanf("%d %d" ,&pay2,&payda2);
	topla(pay1,payda1,pay2,payda2,&pay,&payda);

	printf("%d / %d" ,pay,payda);

	return 0;
}
void topla(int pay1, int payda1, int pay2, int payda2, int *payPtr, int *paydaPtr)
{
	*payPtr = pay1 * payda2 + payda1 * pay2;
	*paydaPtr = payda1 * payda2;
	sadelestir(payPtr, paydaPtr);
}
void sadelestir(int *x, int *y)
{
	int min;
	if (*x == *y)
	{
		*x = *y;
	}
	else
	{
		min= (*x < *y) ? *x:*y;
		while( *x % min != 0 || *y % min != 0)
		{
			--min;
		}
		*x /= min;
		*y /= min;
	}
}

