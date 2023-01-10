//number of series
#include<stdio.h>
int main()
{
	int i=0,n;
	printf("Enter the n value --> ");
	scanf("%d",&n);
	printf("\nSeries --> { ");
	for(i=1;i<=n;i++)
	{
		printf("%d, ",i);
	}
	printf(" }");
}
