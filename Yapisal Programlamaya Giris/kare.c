#include <stdio.h>

main()
{
	int a[20][20];
	int i,j,m,r =0,n;
	
	printf("Karenin kenari: ");
	scanf("%d" , &n);
	
	for(i = 0; i<=n;i++)
	{
		for(j = 0;j<=n;j++)
		{
			a[i][j] = 0;
		}
	}
	m =n;
	printf("%d" , m);
	while(m > 3)
	{
		for(i = r; i <= m; i++)
		{
			
			a[i][m] = 1;
			a[m][i] = 1;
			a[r][i] = 1;
			a[i][r] = 1;
		}
		m -= 2;
		r += 2;
	}
	
	for(i = 0; i<=n;i++)
	{
		printf("\n");
		for(j = 0;j<=n;j++)
		{
			printf("%d", a[i][j]);
			printf("-");
		}
	}
	
}
