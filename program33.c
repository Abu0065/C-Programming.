//WAP to traverse the element of array.
#include<stdio.h>
int main ()
{
    int a[5],i;
    printf("Enter the element of array : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The element of array is : \n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}