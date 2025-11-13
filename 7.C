#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i <= 5; i++)
    {
        printf("Element is at %d is     %d \n ", i, arr[i]);
    }
    int j = sizeof(arr) ;
    printf("%d" , j);
    
}