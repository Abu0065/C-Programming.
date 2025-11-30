//Write a C program to calculate daily wages based on monthly salary and number of working days.
#include <stdio.h>

int main() {
    float monthly_salary;
    int working_days;
    float daily_wages;

    printf("Enter monthly salary: ");
    scanf("%f", &monthly_salary);

    printf("Enter number of working days: ");
    scanf("%d", &working_days);

    daily_wages = monthly_salary / working_days;
    printf("Daily wages: %.2f\n", daily_wages);

    return 0;
}
