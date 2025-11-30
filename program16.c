//Write a program to find the roots of a quadratic equation. 
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        float root1 = (-b + sqrt(discriminant))/(2*a);
        float root2 = (-b - sqrt(discriminant))/(2*a);
        printf("Roots are real and different: %.2f and %.2f\n", root1, root2);
    }
    else if (discriminant == 0) {
        float root = -b/(2*a);
        printf("Roots are real and the same: %.2f\n", root);
    }
    else {
        float real = -b/(2*a);
        float imag = sqrt(-discriminant)/(2*a);
        printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", real, imag, real, imag);
    }

    return 0;
}
