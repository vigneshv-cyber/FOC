#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Value of a --> ");
	scanf("%d",&a);
	printf("Value of b --> ");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("\n\tAFTER SWAPPING");
	printf("\nValue of a --> %d",a);
	printf("\nValue of b --> %d",b);
}
