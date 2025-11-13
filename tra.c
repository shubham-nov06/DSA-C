#include <stdio.h>
void display (int arr[] , int  a )
{
    // traversal
    for (int i = 0; i < a; i++)
    {
        printf("%d" , arr[i]);
    }
}// insertion  
  int sortedInsertion(int arr[] , int size , int element ,int capacity ,int index  ){
    if(size>=capacity) {
        return -1 ;
    }
    for(int i = size - 1 ; i >= index  ; i--) {
        arr[i+1] =arr[i] ;
    }
    arr[index] = element ;
    return 1 ;
}

// instertion 
int main() {
    int arr[100] = {1,2,3,4,5};
    int size = 5 ;
int element = 20 ;
int index = 3 ; 
printf("beforee insertion ");
    display(arr , size  );
    
    sortedInsertion(arr , size , element , 100 , index  );
    size++ ; 
    printf("After insertion ");
    display(arr,size);
}