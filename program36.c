//WAP to find the maximum element in array.
#include<stdio.h>
int main ()
{
    int a[5],i,max;
    printf("Enter the element of array : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("The maximum element of array is : %d\n",max);
    return 0;
}