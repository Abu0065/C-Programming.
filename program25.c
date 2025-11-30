#include <stdio.h>

int main() {
    int i;

    printf("Demonstrating continue statement:\n");

    for (i = 1; i <= 10; i++) {

        if (i == 5) {

            printf("Skipping i = %d using continue\n", i);

            continue;  
        }
        
        printf("i = %d\n", i);
    }

    printf("Loop finished.\n");

    return 0;
}