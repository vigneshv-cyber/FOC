#include<stdio.h>
int main()
{
	int n,rev=0,dig=0,i;
	printf("Enter the value to be reversed --> ");
	scanf("%d",&n);
	int y = n;
	while(n)
	{
		dig = n%10;
		rev = rev*10 + dig;
		n = n/10;
	}
	printf("\n\tThe reversed number is --> %d",rev);
}
