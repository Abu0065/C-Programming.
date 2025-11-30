//Write a C program that uses if-else statements to check if a person is eligible to vote based on their age.
#include <stdio.h>
int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}