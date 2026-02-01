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


int main(void) {
    int x = 12, y = 4;

    printf("Using arithmetic functions (from static library):\n");
    printf("x = %d, y = %d\n", x, y);

    printf("Addition: %d\n", add(x, y));
    printf("Subtraction: %d\n", sub(x, y));
    printf("Multiplication: %d\n", mul(x, y));
    printf("Division: %.2f\n", divide_int(x, y));

    return 0;
}
