//write a c program to take a input as a array an display into the screen
#include<stdio.h>
int main()
{
	int ar[100],a,i;
	printf("enter a range: ");
	scanf("%d",&a);
	printf("enter a values: ");
	for(i=0;i<a;i++){
		scanf("%d",&ar[i]);
	}
	printf("the array number is:-\n");
	for(i=0;i<a;i++){
		printf("%d\t",ar[i]);
	}
}
