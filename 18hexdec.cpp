//hexadecimal to decimal
#include<stdio.h>
int main()
{
	int d;
	printf("Enter the hexadecimal value --> ");
	scanf("%x",&d);
	if(d)
	{
		printf("\n\tHexadecimal --> %x",d);
		printf("\n\tDecimal --> %d",d);
	}
	else
	{
		printf("Invalid");
	}
}
