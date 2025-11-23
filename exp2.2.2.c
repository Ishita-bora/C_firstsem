#include <stdio.h>
int main()
{
    int  num, i, multiple;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Multiplication table of %d:\n", num);
    for(i = 1; i <= 10; ++i)
    {
        multiple = num * i;
        printf("%d x %d = %d\n", num, i, multiple);
}
}