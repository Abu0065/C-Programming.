//write a program to apply discount based on the purchase amount using if the bill is grater or equal to 2000 apply 20% discount otherwise apply 10% discount will be given.
#include <stdio.h>
int main() {
    float amount, discount, final_amount;

    printf("Enter the purchase amount: ");
    scanf("%f", &amount);
    if (amount >= 2000) {
        discount = amount * 0.20;
        final_amount = amount - discount;
        printf("You have received a 20%% discount.\n");
        printf("Final amount to be paid: %.2f\n", final_amount);
    } else {
        printf("You have received a 10%% discount.\n");
        discount = amount * 0.10;
        final_amount = amount - discount;
        printf("Final amount to be paid: %.2f\n", final_amount);
    }
    return 0;
}