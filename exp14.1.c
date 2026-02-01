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

float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return (float)a / b;
}

int main() {
    int choice, a, b;

    while (1) {
        printf("\n Arithmetic Operations \n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting...\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        switch (choice) {
            case 1:
                printf("Result: %d\n", add(a, b));
                break;
            case 2:
                printf("Result: %d\n", sub(a, b));
                break;
            case 3:
                printf("Result: %d\n", mul(a, b));
                break;
            case 4:
                printf("Result: %.2f\n", divide(a, b));
                break;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
