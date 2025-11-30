//write a program to implement traffic light system the cars will move according to the color of the light if the light is red stop the car if the light is yellow get ready to move and if the light is green print a message go.
#include <stdio.h>
int main() {
    char light_color;

    printf("Enter the traffic light color (R for Red, Y for Yellow, G for Green): ");
    scanf(" %c", &light_color);
    if (light_color == 'R' || light_color == 'r') {
        printf("Stop the car.\n");
    } else if (light_color == 'Y' || light_color == 'y') {
        printf("Get ready to move.\n");
    } else if (light_color == 'G' || light_color == 'g') {
        printf("Go.\n");
    } else {
        printf("Invalid color input. Please enter R, Y, or G.\n");
    }
}