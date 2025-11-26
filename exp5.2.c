#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int positive_count = 0;
    int negative_count = 0;
    int odd_count = 0;
    int even_count = 0;

    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        }

        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Count of positive numbers: %d\n", positive_count);
    printf("Count of negative numbers: %d\n", negative_count);
    printf("Count of odd numbers: %d\n", odd_count);
    printf("Count of even numbers: %d\n", even_count);
    return 0;
}