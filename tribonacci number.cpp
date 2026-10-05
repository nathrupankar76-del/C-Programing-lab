//write a c program to trinonacci
#include<stdio.h>
int main()
{
	int a=0,b=1,c=1,d,n,i=1;
	printf("enter the terms:");
	scanf("%d",&n);
	printf("tribonacci series:");
	while(i<=n)
	{
		printf("%d",a);
		d=a+b+c;
		a=b;
		b=c;
		c=d;
		i++;
	}
	
}
