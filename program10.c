//write a program to check for atm withdrawal a user will enter the amount they want to withdraw if the balence amount is grater than or equal to the requested amount allow the withdrawal otherwise show a warning message insufficient balence.
#include <stdio.h>
int main() {
    float balance, withdraw_amount;

    printf("Enter your current balance: ");
    scanf("%f", &balance);

    printf("Enter the amount you want to withdraw: ");
    scanf("%f", &withdraw_amount);

    if (balance >= withdraw_amount) {
        balance -= withdraw_amount;
        printf("Withdrawal successful. Your new balance is: %.2f\n", balance);
    } else {
        printf("Insufficient balance. Withdrawal denied.\n");
    }

    return 0;
}
