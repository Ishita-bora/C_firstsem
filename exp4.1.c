#include <stdio.h>

int globalVar = 10;

void useGlobal()
{
    printf("Inside function: Global variable is %d\n", globalVar);
}

int main()
{
    printf("Inside main: Global variable is %d\n", globalVar);
    useGlobal();
    return 0;
}