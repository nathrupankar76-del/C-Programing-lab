//write a c program to find the average number in array

#include <stdio.h>

int main()
{
    int n,i,sum=0;
    float average;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    average =sum / n;
    printf("Average = %.2f", average);
    return 0;
}

