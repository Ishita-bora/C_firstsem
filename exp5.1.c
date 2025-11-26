#include <stdio.h>
int main() {
    int arr[100], second_largest, i, n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    second_largest = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > second_largest) {
            second_largest = arr[i-1];
        }
    }

    printf("Second largest element is %d\n", second_largest);

    return 0;
}