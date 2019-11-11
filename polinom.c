#include <stdio.h>
#include <stdlib.h>

struct node
{
	int katsayi;
	int us;
	struct node *next;
	
};

int menu();
struct node *polinomCarpma(struct node *polinom1,struct node *polinom2,struct node *polinom3);
struct node *polinomEkle(struct node *polinom,int sayi1,int sayi2);
void polinomYazdir(struct node *polinom);
void polinomSil(struct node *polinom);
void ikilileriKaldir(struct node *polinom);
void polinomTopla(struct node ** sonuc,struct node *polinom1, struct node *polinom2);


void main()
{
	struct node *polinom1=NULL;
	struct node *polinom2=NULL;
	struct node *carpmaPolinom=NULL;
	struct node *toplamaPolinom;
	int secim=-1,i;
	int yeterli1=0,yeterli2=0,katsayi,us;
	int kacinci;
	
	polinom1 = (struct node *)malloc(sizeof(struct node));
	polinom2 = (struct node *)malloc(sizeof(struct node));
	carpmaPolinom = (struct node *)malloc(sizeof(struct node));
	
	polinom1->katsayi=NULL;
	polinom1->us=NULL;
	polinom1->next=NULL;
	polinom2->katsayi=NULL;
	polinom2->us=NULL;
	polinom2->next=NULL;
	carpmaPolinom->katsayi=NULL;
	carpmaPolinom->us=NULL;
	carpmaPolinom->next=NULL;
	
	
	while(secim!=0)
	{
		secim=menu();
		
		switch(secim)
		{
			case 1:
				printf("-----[BILGI] Iki adet polinom girisi yapilacaktir.-----\n");
				while((yeterli1 == 0))
				{
					i=1;
					printf("%d. polinom icin katsayi girisi yapiniz: ", i);
					scanf("%d" , &katsayi);
				
					printf("%d. polinom icin us girisi yapiniz: ", i);
					scanf("%d", &us);
					
					polinom1=polinomEkle(polinom1,katsayi,us);
							
					printf("\nPolinom terim eklemesi yeterli mi? Yeterli ise 1 yetersiz ise 0 giriniz.: ");
					scanf("%d" , &yeterli1);
					
					if(!((yeterli1!=1)^(yeterli1!=0)))
					{
						printf("\n[HATA!] Hata bir giris yaptiniz.\n");
						yeterli1=0;
					}
				}
				yeterli1=0;
				while(yeterli2==0)
				{
					i=2;
					printf("%d. polinom icin katsayi girisi yapiniz: ", i);
					scanf("%d" , &katsayi);
				
					printf("%d. polinom icin us girisi yapiniz: ", i);
					scanf("%d", &us);
					
					polinom2=polinomEkle(polinom2,katsayi,us);
					
					printf("\nPolinom terim eklemesi yeterli mi? Yeterli ise 1 yetersiz ise 0 giriniz.: ");
					scanf("%d" , &yeterli2);
					
					if(!((yeterli2!=1)^(yeterli2!=0)))
					{
						printf("\n[HATA!] Hata bir giris yaptiniz.\n");
						yeterli2=0;
					}
				}
				yeterli2=0;		
				polinomYazdir(polinom1);
				polinomYazdir(polinom2);
				break;
			case 2:	
					printf("Kacinci polinomu silmek istiyorsunuz.1 veya 2 giriniz.");
					scanf("%d", &kacinci);
					if(kacinci==1)
					{
						polinomSil(polinom1);
						printf("1.polinom silindi.\n");
					}
					else if(kacinci==2)
					{
						polinomSil(polinom2);
						printf("2.polinom silindi.\n");
					}
					else
					{
						printf("[HATA]Yanlis bir giris yaptiniz.Tekrar deneyiniz!");
					}
				break;
			case 3:
				printf("\n[BILGI]Carpma islemi yapiliyor.\n\n");
				carpmaPolinom=polinomCarpma(polinom1,polinom2,carpmaPolinom);
				polinomYazdir(carpmaPolinom);
				printf("\n[BILGI]Polinomdaki ayni katsayilar kaldiriliyor.\n\n");
				ikilileriKaldir(carpmaPolinom);
				printf("Carpma isleminin sonucu. \n");
				polinomYazdir(carpmaPolinom);
				break;
			case 4:
				printf("[BILGI]Toplama islemi yapiliyor.\n\n");
				polinomTopla(&toplamaPolinom,polinom1,polinom2);
				printf("[BILGI]Toplama islemi yazdiriliyor.\n\n");
				polinomYazdir(toplamaPolinom);
				break;
			case 5:
				printf("[BILGI]Sifirlama islemi basliyor.\n");
				free(polinom1);
				free(polinom2);
				struct node *polinom1=NULL;
				struct node *polinom2=NULL;
				polinom1 = (struct node *)malloc(sizeof(struct node));
				polinom2 = (struct node *)malloc(sizeof(struct node));
				polinom1->katsayi=NULL;
				polinom1->us=NULL;
				polinom1->next=NULL;
				polinom2->katsayi=NULL;
				polinom2->us=NULL;
				polinom2->next=NULL;
				break;
			case 0:
				exit(0);
		}		
	}	
}
	
int menu()
{
	int secim;
	printf("-----POLINOM ISLEMLERI-----\n");
	printf("Polinom eklemek icin 1 giriniz.\n");
	printf("Polinom silmek icin 2 giriniz.\n");
	printf("Polinomlari carpmak icin 3 giriniz.\n");
	printf("Polinomlarý toplamak icin 4 giriniz.\n");
	printf("Sifirlamak icin 5 giriniz.\n");
	printf("Programdan cikmak icin 0 giriniz.\n");
	scanf("%d" ,&secim);
		
	return secim;	
}

struct node *polinomEkle(struct node *polinom,int sayi1,int sayi2)
{
	struct node *yeniNode=(struct node *)malloc(sizeof(struct node));
	
	yeniNode->katsayi=sayi1;
	yeniNode->us=sayi2;
	yeniNode->next=polinom;
	polinom=yeniNode;
	
	return polinom;	
}

void polinomYazdir(struct node *polinom)
{
	int i;
	printf("[BILGI]Polinom yazdiriliyor.\n");
	while((polinom!=NULL))
	{
		if(polinom->katsayi!=0)
		{
			printf("%d", polinom->katsayi);
			printf("*x^%d+" ,polinom->us);
		}
		polinom=polinom->next;
		
	}
	printf("\n");
}

void polinomSil(struct node *polinom)
{
	while(polinom!=NULL)
	{
		polinom->katsayi=NULL;
		polinom->us=NULL;
		polinom=polinom->next;
	}
}

struct node *polinomCarpma(struct node *polinom1,struct node *polinom2,struct node *polinom3)
{
	struct node *temp1,*temp2;
	temp1=polinom1;
	temp2=polinom2;
	
	while(temp1!=NULL)
	{
		while(temp2!=NULL)
		{
			int katsayi,us;
			
			katsayi=temp1->katsayi*temp2->katsayi;
			us=temp1->us+temp2->us;
			polinom3=polinomEkle(polinom3,katsayi,us);
			temp2=temp2->next;
		}
		temp2=polinom2;			
		temp1=temp1->next;
	}
	return polinom3;
}

void ikilileriKaldir(struct node *polinom)
{
	struct node *temp1,*temp2;
	struct node *yeniPolinom;
	
	temp1=polinom;
	
	while(temp1!=NULL && temp1->next!=NULL)
	{
		temp2=temp1;
		
		while(temp2->next!=NULL)
		{
			if(temp1->us==temp2->next->us)
			{
				temp1->katsayi=temp1->katsayi+temp2->next->katsayi;
				yeniPolinom=temp2->next;
				temp2->next=temp2->next->next;
				free(yeniPolinom);
			}
			else
			{
				temp2=temp2->next;
			}
		}
		temp1=temp1->next;
	}
}

void polinomTopla(struct node ** sonuc, struct node * polinom1, struct node * polinom2) 
{
    struct node * temp=(struct node *) malloc(sizeof(struct node));
    temp->next = NULL;
    *sonuc = temp; 
 
    while(polinom1 && polinom2) 
	{
        if (polinom1->us > polinom2->us)
		{
            temp->us = polinom1->us;
            temp->katsayi = polinom1->katsayi;
            polinom1 = polinom1->next;
        }
        else if (polinom1->us < polinom2->us) 
		{
            temp->us = polinom2->us;
            temp->katsayi = polinom2->katsayi;
            polinom2 = polinom2->next;
        }
        else 
		{
            temp->us = polinom1->us;
            temp->katsayi = polinom1->katsayi + polinom2->katsayi;
            polinom1 = polinom1->next;
            polinom2 = polinom2->next;
        }
 
        if(polinom1 && polinom2) 
		{
            temp->next = (struct node *) malloc(sizeof(struct node));
            temp = temp->next;
            temp->next = NULL;
        }
    }
 
    while(polinom1 || polinom2) 
	{
        temp->next = (struct node *) malloc(sizeof(struct node));
        temp = temp->next;
        temp->next = NULL;
 
        if(polinom1) 
		{
            temp->us = polinom1->us;
            temp->katsayi = polinom1->katsayi;
            polinom1 = polinom1->next;
        }
        if(polinom2) 
		{
            temp->us = polinom2->us;
            temp->katsayi = polinom2->katsayi;
            polinom2 = polinom2->next;
        }
    }
}
