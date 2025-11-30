//Write a program to generate the fibonacci series up to n terms.
#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    int i = 1;
    do {
        printf("%d", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        if (i < n) printf(", ");
        i++;
    } while (i <= n);

    printf("\n");
    return 0;
}
