#include <stdio.h>

int linsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
}

int main()
{
    int arr[] = {1, 3, 4, 5, 6, 7, 8, 9};
    int element = 6;
    int size = sizeof(arr) / sizeof(int);
    int searchindex = linsearch(arr, size, 6);
    printf("The element %d is found at %d ", element, searchindex);
}