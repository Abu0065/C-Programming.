//write a program to check for the online shopping free dilivery if the order is grater than or equal to 500 free dilivery will be given otherwise 50 rs will be charged for dilivery.
#include <stdio.h>
int main() {
    float order_amount, delivery_charge, total_amount;

    printf("Enter the order amount: ");
    scanf("%f", &order_amount);

    if (order_amount >= 500) {
        delivery_charge = 0;
        printf("You are eligible for free delivery.\n");
    } else {
        delivery_charge = 50;
        printf("A delivery charge of 50 Rs will be applied.\n");
    }

    total_amount = order_amount + delivery_charge;
    printf("Total amount to be paid: %.2f\n", total_amount);

    return 0;
}