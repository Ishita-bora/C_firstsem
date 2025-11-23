#include <stdio.h>
int main()
{
   int n,i,m;

   printf("Enter a number to be multiplied: ");
   scanf("%d",&n);
   for(i=1;i<=10;i++)
   {
        m = n * i;
        printf("The multiplication is: %d x %d = %d\n",n,i,m);
   }
   return 0;
}