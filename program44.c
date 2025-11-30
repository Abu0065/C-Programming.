//WAP to swap two number using Call by refernce.
#include <stdio.h>
void swap(int * x, int * y)
{
    int temp;
    temp = * x;
    * x = * y;
    * y = temp;
    
}
int main() {
    int a = 10, b = 20;
    printf("Before swapping %d %d\n", a, b);
    swap (&a, &b);
    printf("After swapping %d %d\n", a, b);
    return 0;
}
