#include <stdio.h>
#include <math.h>

void main()
{
	int i,calcValue,sensetive,fact=1,calcValuePower,fcalcValue;
	
	printf("Enter calculation value: ");
	scanf("%d" , &calcValue);
	
	printf("Enter sensetive of calculation value: ");
	scanf("%d", &sensetive);

	calcValuePower=calcValue;
	fcalcValue=calcValuePower;
	
	for(i=1; i<sensetive; i++)
	{
		calcValuePower *= calcValue*calcValue;
		fact *= (2*i)*(2*i+1);
		/*if((i%2)==0)
		{
			fcalcValue += (calcValuePower/fact);
		}
		else
		{
			fcalcValue -= (calcValuePower/fact);
		}*/
		
		fcalcValue += pow(-1,i)*(calcValuePower/fact);
	}
	printf("%d", fcalcValue);
}
