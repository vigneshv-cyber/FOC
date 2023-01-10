#include<stdio.h>
int main()
{
	int n,i,sum;
	printf("Enter the range --> ");
	scanf("%d",&n);
	printf("\n\tNumber of series --> { ");
	for(i=0;i<=n;i++)
	{
		printf("%d ",i);
	}
	printf(" }");
	sum=0;
	for(i=0;i<=n;i++)
	{
		sum += i; 
	}
	printf("\n\tSum of Number of series: %d",sum);
}
