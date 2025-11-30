//WAP to find the minimum element in array.
#include<stdio.h>
int main ()
{
    int a[5],i,min;
    printf("Enter the element of array : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("The minimum element of array is : %d\n",min);
    return 0;
}