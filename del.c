#include <stdio.h>
void display(int arr[], int a)
{
    for (int i = 0; i <= a; i++)
    {
        printf("%d" ,arr[i]);
    }
}

int insertion(int arr[] , int size, int element, int index)
{
    //for (int i = size -1; i >= index; i--)
    // {  
    //     arr[i + 1] = arr[i];
    // }
    // arr[index] = element;
    // return 1;
    for( int i = index ; i <= size ; i ++  ){
        arr[i] = arr[i+1];
    }
}

int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    int element = 20;
    int index = 3;
  printf("before insertion");
  display(arr , size ) ;
  printf("after this ");
  insertion( arr , size , element, index);
  size--;
  display(arr , size );
}