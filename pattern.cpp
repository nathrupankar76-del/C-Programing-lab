//
#include<stdio.h>
int main()
{
	int i,a,n;
	printf("enter range:");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		for(n=1;n<=a-i;n++){
			printf("\t");
		}
		for(n=1;n<=i;n++){
			printf("\t*");
		}
		printf("\n\n");
	}
	
}
