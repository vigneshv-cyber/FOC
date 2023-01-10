#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the range --> ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum += i*i*i;
	}
	printf("\n\tSum of cubic n numbers are --> %d",sum);
}
