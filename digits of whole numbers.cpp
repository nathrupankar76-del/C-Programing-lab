//write a c program to count a digits of whole number
#include<stdio.h>
int main()
{
	int num,sum,i=0;
	printf("enter a number:");
	scanf("%d",&num);
	while(num!=0)
	{
		int digits=num%10;
		num/=10;
		i++;
	}
	printf("total digits :%d",i);
}
