#include <stdio.h>

#define SUM(x, y) (x + y)

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", SUM(a, b));
    return 0;
}