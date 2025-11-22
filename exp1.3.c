#include <stdio.h>
int main() {
    int age;
    char name[100];
    printf("Enter your name: ");
    scanf(" %[^\n]", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Hello %s, you are %d years old!\n", name, age);
    return 0;
}