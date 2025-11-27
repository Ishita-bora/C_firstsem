#include <stdio.h>


int ISPRIME(int num) {
    int i;

    if (num <= 1)
        return 0; 

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; 
    }

    return 1; 
}

int main() {
    int lower, upper, i;

    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("\nPrime numbers between %d and %d are:\n", lower, upper);

    for (i = lower; i <= upper; i++) {
        if (ISPRIME(i))
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}
