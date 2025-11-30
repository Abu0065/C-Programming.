//WAP to find sum of array elements for 3 by 4 matrix

#include <stdio.h>

int main()
{
    int arr[3][4], sum = 0;
    
    printf("Enter elements of 3x4 matrix:\n");

    for (int i = 0; i < 3; i++) 

    {

        for (int j = 0; j < 4; j++) 

        {
            scanf("%d", &arr[i][j]);

            sum += arr[i][j];
        }

    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}