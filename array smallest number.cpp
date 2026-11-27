//write a c program to find the smallest number in arrey

#include <stdio.h>

int main()
{
    int arr[100],n,i,smallest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    smallest=arr[0];

    for(i=1;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    printf("Smallest number = %d", smallest);
    return 0;
}

