// Write a program to find the sum and reverse of a three-digit number. Using if and while.
#include <stdio.h>
int main() {
    int number, sum = 0, reverse = 0, digit;

    
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    
    if (number < 100 || number > 999) {
        printf("Please enter a valid three-digit number.\n");
        return 1;
    }

    int temp = number; 

    
    while (temp != 0) {
        digit = temp % 10; 
        sum += digit;      
        reverse = reverse * 10 + digit;
        temp /= 10;       
    }

    
    printf("Sum of digits: %d\n", sum);
    printf("Reversed number: %d\n", reverse);

    return 0;
}