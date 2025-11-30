//write a program to print a table of any number.
#include <stdio.h>
int main() {
    int number, i;
    printf("Enter a number to print its table: ");
    scanf("%d", &number);
    printf("Table of %d:\n", number);
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    return 0;
}

