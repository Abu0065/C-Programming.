//Write a program to display the first 10 natural numbers and calulate their sum.
#include <stdio.h>

int main() {
    int i = 1, sum = 0;

    printf("The first 10 natural numbers are:\n");
    while (i <= 10) {
        printf("%d ", i);
        sum += i;
        i++;
    }

    printf("\nThe sum of the first 10 natural numbers is: %d\n", sum);
    return 0;
}
