#include<stdio.h>
int main()
{
	int n,i,sum;
	printf("Enter the range --> ");
	scanf("%d",&n);
	printf("\n\tEven series number --> { ");
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
	printf(" }");
	sum=0;
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			sum += i;
		}
	}
	printf("\n\tSum of even series number --> %d",sum);
}
