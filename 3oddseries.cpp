//number of odd series
#include<stdio.h>
int main()
{
	int n,i;
	printf(" N value --> ");
	scanf("%d",&n);
	printf("Odd number series --> { ");
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
		}
	}
	printf(" }");
}
