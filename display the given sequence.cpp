//0,1,1,2,2,3,5,8...up to n terms.wc.p. to display the given sequence
#include<stdio.h>
int main()
{
	int n,i=1,a=0,b=1,c;
	printf ("enter number of terms :");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	return 0;
}
