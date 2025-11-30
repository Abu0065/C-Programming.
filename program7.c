//Write a C program to reverse a 3-digit number and find the sum of its digits.
#include <stdio.h>

int main() {
    int num;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    int rev = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);
    int sum = (rev % 10) + ((rev / 10) % 10) + (rev / 100);

    printf("Reversed: %d\nSum of digits: %d\n", rev, sum);
    return 0;
}
