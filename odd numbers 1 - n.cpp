//write a c program to display odd numbers from 1-n
#include<stdio.h>
int main()
{
	int num=1,i;
	printf("enter a numbers :");
	scanf("%d",&i);
	while(num<=i)
	{
		if(num%2!=0)
		printf("\nodd number is %d",num);
		num++;
	}
}
