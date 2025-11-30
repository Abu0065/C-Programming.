//Write a C program to perform basic arithmetic operations (addition, subtraction, multiplication) on two integers.
#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;

    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);

    return 0;
}