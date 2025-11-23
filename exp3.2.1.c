#include <stdio.h>
int main() {
    int n, n1, i, pos = 0, neg = 0, zero = 0;
printf("Enter the number :");
scanf("%d", &n);
do { 
    if(n > 0) {
        pos++;
    } else if (n < 0) {
        neg++;
    } else {
        zero++;
    }
    printf("Enter another number :");
    scanf("%d", &n1);
} while (n != 0);
printf("Positive numbers: %d\n", pos);
printf("Negative numbers: %d\n", neg);
printf("Zeroes: %d\n", zero);
return 0;
}