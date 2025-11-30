//WAP to swap two numbers using call by value
#include <stdio.h>
int swap (int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Swapping is %d %d\n", x, y);
    return 0;
}

int main() {
    int a=10, b=20;
    printf("Before swapping %d %d\n", a, b);
    swap(a,b);
    printf("After swapping %d %d\n", a, b);
    return 0;
}

