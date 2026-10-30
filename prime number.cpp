//write a c program to check wheather a number is prime or not, first using while loop then using for loop 
#include <stdio.h>
int main()
{
    int n, i = 2, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
while (i < n)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
        i++;
    }
    if (n <= 1)
    {
        printf("%d is not a prime number.", n);
    }
    else if (count == 0){
        printf("%d is a prime number.", n);
	   }else{
        printf("%d is not a prime number.", n);
    }
    return 0;
}

