//Write a program to print a pattern of stars in increasing sequence.
#include <stdio.h>

int main() {
    int i = 1, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    while (i <= rows) {
        j = 1;
        while (j <= i) {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
