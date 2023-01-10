#include<stdio.h>
int main()
{
	int i,n,a,b,c;
	printf("Enter the range --> ");
	scanf("%d",&n);
	a=0;
	b=1;
	c=a+b;
	for(i=1;i<=n;i++)
	{
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;
	}
}
