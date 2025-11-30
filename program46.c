//Addition of two matrices.
#include <stdio.h>
int main() {
    int a[10][10], b[10][10], sum[10][10];
    int r1, c1, r2, c2, i, j;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (r1 != r2 || c1 != c2) {
        printf("Error! Matrices cannot be added due to incompatible dimensions.\n");
        return 0;
    }
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    
    printf("Resultant matrix after addition:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}