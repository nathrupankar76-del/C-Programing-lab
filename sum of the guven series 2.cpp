//1+2=4+7+11+...up to calculate sum of the given series.
#include<stdio.h>
int main()
{
	int i=1,n,sum=0,term=1,d=1;
	printf("enetr the number of term :");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",term);
		sum=sum+term;
		term=term+d;
		d++;
		i++;
	}
	printf("\nsum of the series=%d",sum);
}
