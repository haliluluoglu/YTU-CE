#include <stdio.h>

void main()
{
	int i=4,k=4.5,m=-5;
	float x=0.5,y=6,z;
	char a='1',b='5',c=1,d;
	
	

	d=(a==c); printf("%d\n", d);
	
	printf("%c\n", b-c);
	printf("%d\n", b-a);
	z=-3/y+k;	printf("%f\n", z);
	z=k+m/x;	printf("%f\n", z);
	printf("%d\n",(i++)-(--m));
	printf("%d", i<k+m);
}
