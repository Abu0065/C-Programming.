#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the element of array:\n");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("Sum of array elements is: \n %d", sum);
    return 0;
} 
