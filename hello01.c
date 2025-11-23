#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b) {
        printf("The triangle is valid.\n");

        if (a == b && b == c) {
            printf("It is an equilateral triangle.\n");
        } else if (a == b || b == c || a == c) {
            printf("It is an isosceles triangle.\n");
        }

        // Check right-angled
        if ((a*a + b*b == c*c) || (b*b + c*c == a*a) || (c*c + a*a == b*b)) {
            printf("It is a right-angled triangle.\n");
        }

        // Check scalene
        if (a != b && b != c && a != c) {
            printf("It was a scalene triangle.\n");
        }
    } else {
        printf("The triangle is not valid.\n");
    }
    return 0;
}