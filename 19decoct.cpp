//decimal to octal
#include<stdio.h>
int main()
{
	int d;
	printf("Enter the decimal value --> ");
	scanf("%d",&d);
	if(d)
	{
		printf("\n\tDecimal --> %d",d);
		printf("\n\tOctal --> %o",d);
	}
	else
	{
		printf("Invalid");
	}
}
