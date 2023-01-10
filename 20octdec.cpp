//octal to decimal
#include<stdio.h>
int main()
{
	int d;
	printf("Enter the octal value --> ");
	scanf("%o",&d);
	if(d)
	{
		printf("\n\tOctal value --> %o",d);
		printf("\n\tDecimal value --> %d",d);
	}
	else
	{
		printf("Invalid");
	}
}
