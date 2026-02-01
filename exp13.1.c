#include <stdio.h>

#define ADD(x, y) (x + y)
#define SUB(x, y) (x - y)
#define MUL(x, y) (x * y)
#define DIV(x, y) (x / y)
#define MOD(x, y) (x % y)

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Addition = %d\n", ADD(a, b));
    printf("Subtraction = %d\n", SUB(a, b));
    printf("Multiplication = %d\n", MUL(a, b));
    printf("Division = %d\n", DIV(a, b));
    printf("Modulus = %d\n", MOD(a, b));

    return 0;
}