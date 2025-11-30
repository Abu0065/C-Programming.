//WAP to create a function factorial int fact(int n) fpr calculating the factorial of a number.
#include <stdio.h>
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}
int main()
{
    int num;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, fact(num));
    return 0;
}


