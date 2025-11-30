//Write a C program to calculate the total cost of fuel based on price per litre and litres purchased.
#include <stdio.h>

int main() {
    float price_per_litre, litres, total_cost;

    printf("Enter fuel price per litre: ");
    scanf("%f", &price_per_litre);

    printf("Enter litres purchased: ");
    scanf("%f", &litres);

    total_cost = price_per_litre * litres;

    printf("Total cost: %.2f\n", total_cost);

    return 0;
} 