#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void createMatrix(char matrix[][5])
{
	int i,j;
	int randomNumber=-1;
	srand(time(0));
	
	printf("Temiz bir mayin tarlasi olusturuldu!\n");
	for(i=0; i<6; i++)
	{
		randomNumber = rand() % 5;
		for(j=0; j<5; j++)
		{
			matrix[i][j]='T';
			printf("%c\t", matrix[i][j]);
		}
		matrix[i][randomNumber]='X';
		printf("\n");
	}
}

void printMatrix(char matrix[][5])
{
	int i,j; 
	
	for(i=0; i<6; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%c\t", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int menu()
{
	int choice;
	
	while(!((choice>=1)&&(choice<=5)))
	{
		printf("1 ile 5 arasinde bir sayi giriniz: ");
		scanf("%d", &choice);
		if((choice>6) || (choice<1))
		{
			printf("Yanlis tuslama yaptiniz, tekrar giriniz.");
		}
	}
	
	return choice;
}

int startGame()
{
	char matrix[6][5];
	int k=0;
	int choice=-1,bomb=0;
	
	
	createMatrix(matrix);
	
	printf("Bombalar rastgele bir sekilde mayina yerlestirildi.\n");
	//printMatrix(matrix);
	
	choice = menu();
	choice--;
	while(bomb!=1 && k<6)
	{
		if(matrix[k][choice] == 'X')
		{
			printf("Mayin patladi. Uzgunum kaybettiniz!\n");
			matrix[k][choice]='O';
			bomb = 1;
		}	
		else
		{
			bomb = 0;
			matrix[k][choice]='O';
			if(k==5)
			{	
				printf("Tebrikler kazandiniz.\n");
				bomb=1;
			}
			else
			{
				choice = menu();
				choice--;	
			}
		}
		k++;
		printf("%d. satira gectiniz.\n", k+1);
	}
	
	printMatrix(matrix);
	return 0;
}

int main()
{
	char restart='e';
	while(!((restart == 'h') || (restart == 'H')) || ((restart == 'e') || (restart=='E')))
	{
		startGame();
		printf("Yeniden oynamak ister misiniz?(Evet icin e/E, Hayir icin h/H giriniz): ");
		scanf(" %c", &restart);
	}
		
	return 0;
}

