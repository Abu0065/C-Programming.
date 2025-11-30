#include <stdio.h>

int main() {

    int i = 1;

    printf("Demonstrating goto statement:\n");

start:

    if (i <= 5) {

        printf("i = %d\n", i);
        
        i++;
        
        goto start;  
    }

    printf("Loop ended using goto.\n");

    return 0;
}
