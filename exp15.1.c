#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float divide_int(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0.0f;
    }
    return (float)a / b;
}

int main() {
    int x = 15, y = 3;

    printf("Using arithmetic functions (from shared library):\n");
    printf("x = %d, y = %d\n", x, y);

    printf("Add: %d\n", add(x, y));
    printf("Sub: %d\n", sub(x, y));
    printf("Mul: %d\n", mul(x, y));
    printf("Div: %.2f\n", divide_int(x, y));

    return 0;
}
