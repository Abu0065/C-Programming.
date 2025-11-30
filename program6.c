//Write a C program to reverse a 3-digit number and find the sum of its digits.
#include <stdio.h>

int main() {
    int num;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    num = num < 0 ? -num : num;
    int sum = (num / 100) + ((num / 10) % 10) + (num % 10);

    printf("Sum of digits: %d\n", sum);
    return 0;
}