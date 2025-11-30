#include <stdio.h>

int main() {
    int i;

    printf("Demonstrating break statement:\n");

    for (i = 1; i <= 10; i++) {

        if (i == 5) {
        
            printf("Breaking the loop at i = %d\n", i);
        
            break;  
        
        }
        
        printf("i = %d\n", i);
    }


    printf("Loop exited due to break.\n");

    return 0;
}
