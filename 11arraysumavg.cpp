#include<stdio.h>
int main()
{
	int a[100],n,i,sum=0;
	float avg;
	printf("Enter the range --> ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element --> ");
		scanf("%d",&a[i]);
	}
	printf("\n\tArray --> { ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf(" }\n");
	for(i=0;i<n;i++)
	{
		sum += a[i];
	}
	printf("\n\tSum of array elements --> %d",sum);
	avg = sum/n;
	printf("\n\tAverage of array elements --> %f",avg);
}
