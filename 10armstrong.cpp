#include<stdio.h>
int main()
{
	int n,org,rem,res=0;
	printf("Enter the number --> ");
	scanf("%d",&n);
	org=n;
	while(org!=0)
	{
		rem = org%10;
		res += rem*rem*rem;
		org /= 10;
	}
	if(res==n)
	{
		printf("%d is an Armstrong number.",n);
	}
	else
	{
		printf("%d is not an Armstrong number.",n);
	}
}
