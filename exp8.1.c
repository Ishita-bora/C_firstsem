#include <stdio.h>

int main()
{
    int num = 10;
    float pi = 3.14;
    char letter = 'A';

    int *ptr_num;
    float *ptr_pi;
    char *ptr_letter;

    ptr_num = &num;
    ptr_pi = &pi;
    ptr_letter = &letter;

    printf("Integer (num) \n");
    printf("Value of num: %d\n", num);
    printf("Value through ptr_num: %d\n", *ptr_num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr_num (Address): %p\n", ptr_num);

    printf("\n Float (pi) \n");
    printf("Value of pi: %.2f\n", pi);
    printf("Value through ptr_pi: %.2f\n", *ptr_pi);
    printf("Address of pi: %p\n", &pi);
    printf("Value of ptr_pi (Address): %p\n", ptr_pi);

    printf("\nCharacter (letter) \n");
    printf("Value of letter: %c\n", letter);
    printf("Value through ptr_letter: %c\n", *ptr_letter);
    printf("Address of letter: %p\n", &letter);
    printf("Value of ptr_letter (Address): %p\n", ptr_letter);

    return 0;
}