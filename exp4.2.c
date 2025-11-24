#include <stdio.h>

int globalVar = 100;

void testLocal() {
    int localVar = 50;  
    printf("Inside function: localVar = %d\n", localVar);
    printf("Inside function: globalVar = %d\n", globalVar);
}

int main() {
    testLocal();

    
    printf("Outside function: globalVar = %d\n", globalVar);

    return 0;
}
