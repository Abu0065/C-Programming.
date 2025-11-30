//wap to find factorial of a number using recursion.
#include <stdio.h>
int factorial(int n) {
    if (n==0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}