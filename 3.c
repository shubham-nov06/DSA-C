#include<stdio.h>
int main(){
    int a[5] = {1 ,2 ,3 ,4 ,50};
    int *ptr1  ;
    ptr1 = &a[0];
    printf("%d\n" , ptr1);
    ptr1 --;
    printf("%d", ptr1);
    return 0 ;

}