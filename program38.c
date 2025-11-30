//WAP to make the sum of arrays for 3 by 4 matrix.


#include <stdio.h>

int main()

{

    int arr1[3][4], arr2[3][4], sum[3][4];

    printf("Enter elements of first 3x4 matrix:\n");

    for (int i = 0; i < 3; i++) 

    {

        for (int j = 0; j < 4; j++) 

        {

            scanf("%d", &arr1[i][j]);

        }

    }

    printf("Enter elements of second 3x4 matrix:\n");

    for (int i = 0; i < 3; i++) 

    {

        for (int j = 0; j < 4; j++) 

        {

            scanf("%d", &arr2[i][j]);

        }

    }
    

    for (int i = 0; i < 3; i++) 

    {

        for (int j = 0; j < 4; j++) 

        {

            sum[i][j] = arr1[i][j] + arr2[i][j];

        }

    }

    printf("Sum of the two matrices:\n");

    for (int i = 0; i < 3; i++) 

    {

        for (int j = 0; j < 4; j++) 

        {

            printf("%d ", sum[i][j]);

        }

        printf("\n");

    }

    return 0;

}
