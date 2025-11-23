#include <stdio.h>
int main()
{
    double area , perimeter;
    double length, width;
    printf("Enter length of rectangle: ");
    scanf("%lf", &length);
    printf("Enter width of rectangle: ");
    scanf("%lf", &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("Area: %.2lf\n", area);
    printf("Perimeter: %.2lf\n", perimeter);
    return 0;
}