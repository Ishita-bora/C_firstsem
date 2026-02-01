#include <stdio.h>

int main() {
    int num, ls, rs;

    printf("Enter a number: ");
    scanf("%d", &num);

    ls = num << 2;
    rs = num >> 2;

    printf("Left Shift (num << 2) = %d\n", ls);
    printf("Right Shift (num >> 2) = %d\n", rs);

    return 0;
}