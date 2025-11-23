#include <stdio.h>
int main()
{
    int n;
    int pos =0, neg=0,zero=0;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int num;
        printf("Enter number %d: ", i + 1);
        scanf("%d",&num);
        if(num>0)
            pos++;
        else if(num<0)
            neg++;
        else
            zero++;
    }
    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Zeroes: %d\n", zero);
}