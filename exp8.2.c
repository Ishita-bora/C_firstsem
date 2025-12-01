#include <stdio.h>

int main() {
    int a = 100;
    float b = 25.5;
    char c = 'X';

    
    int *ptr_int = &a;
    float *ptr_float = &b;
    char *ptr_char = &c;

    
    printf("Original Addresses and Values:\n");
    printf("Int: Address=%p, Value=%d\n", ptr_int, *ptr_int);
    printf("Float: Address=%p, Value=%.2f\n", ptr_float, *ptr_float);
    printf("Char: Address=%p, Value=%c\n\n", ptr_char, *ptr_char);

    
    ptr_int++;
    ptr_float++;
    ptr_char++;

    printf("After Incrementing Pointers:\n");
    printf("Int pointer points to: %p\n", ptr_int);
    printf("Float pointer points to: %p\n", ptr_float);
    printf("Char pointer points to: %p\n", ptr_char);
    printf("Dereferencing incremented pointers may give garbage values!\n\n");

    
    ptr_int--;
    ptr_float--;
    ptr_char--;

    printf("After Decrementing Pointers Back:\n");
    printf("Int: Address=%p, Value=%d\n", ptr_int, *ptr_int);
    printf("Float: Address=%p, Value=%.2f\n", ptr_float, *ptr_float);
    printf("Char: Address=%p, Value=%c\n", ptr_char, *ptr_char);

    return 0;
}
