#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n --> ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("%d is a negative number",n);
	}
	else
	{
		printf("%d is a positive number",n);
	}
}
