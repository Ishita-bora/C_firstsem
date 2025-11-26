#include <stdio.h>
int main()
{
    int arr[100];
    int n, i, j, count;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
    }
    printf("enter the element to find frequency:");
    int element;
    scanf("%d",&element);
    count=0;
    for(i = 0; i < n; i++) {
        if(arr[i]==element)
        {
            count++;
        }
    }
    printf("Frequency of %d is %d\n", element, count);
    return 0;
}
    