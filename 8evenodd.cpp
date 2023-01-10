#include<stdio.h>
int main()
{
	int n;
	printf("Enter the integer value --> ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("\n\t%d is an even number !",n);
	}
	else
	{
		printf("\n\t%d is an odd number !",n);
	}
}
