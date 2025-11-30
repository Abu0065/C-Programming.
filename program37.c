//WAP to implement car parking fees collection system, menu, driven, for vip car faclity car are free and standerd car 10rs per hour, visitor car 20rs per hour. calculate total of car parking for total no of parking fees collection.
#include<stdio.h>
int main ()
{
    int car_type, hours;
    float total_fee;

    printf("Car Parking Fees Collection System\n");
    printf("1. VIP Car (Free Parking)\n");
    printf("2. Standard Car (10 Rs per hour)\n");
    printf("3. Visitor Car (20 Rs per hour)\n");
    printf("Enter the type of car (1-3): ");
    scanf("%d", &car_type);

    if(car_type < 1 || car_type > 3) {
        printf("Invalid car type selected.\n");
        return 1;
    }

    if(car_type == 1) {
        total_fee = 0;
        printf("VIP Car selected. Parking is free.\n");
    } else {
        printf("Enter the number of hours parked: ");
        scanf("%d", &hours);
        
        if(hours < 0) {
            printf("Invalid number of hours.\n");
            return 1;
        }

        if(car_type == 2) {
            total_fee = hours * 10; // Standard Car
        } else {
            total_fee = hours * 20; // Visitor Car
        }
    }

    printf("Total parking fee: %.2f Rs\n", total_fee);
    return 0;
}