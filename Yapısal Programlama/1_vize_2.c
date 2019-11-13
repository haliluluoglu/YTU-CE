#include <stdio.h>

void main()
{
	char *x[5]={"Dandanakan1040", "Mercidabýk1516", "Preveze1538", "Trablusgrap1911", "Kurtulus1919"};
	char *y[]={x[0],x[3]};
	char *p=y[0];
	
	printf("%s\n",y[1]); //Trablusgarp1911
	printf("%s\n", (p+1));//andanakan1040
	printf("%c\n", *(*(x+2)+3)); //v
	//printf("%c\n", *(*(y+1)[4])); //Hatalý
	printf("%c\n" , *(++y[1])); //r
	printf("%c\n", x[1][9]+x[1][11]-x[1][13]);//k+5-6=k-1=j
}
