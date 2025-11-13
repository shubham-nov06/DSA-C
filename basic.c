#include <stdio.h>

int main()
{
    //--------------POINTERS---------------- 
    // int a = 10;
    // int* b = &a;
    // printf("%d \n", *b);
    // printf("%d" ,&a);
    // float c = 10.9;
    // float *d = &c;
    // printf("%d \n", d);
    // printf("%d\n" , &d);
    // printf("%d", &c);

    // -----------------PoINTER TO POINTER---------------
    //  int a = 20 ;

    //  int* ptr1 = &a ;
    //  int** ptr2 = ptr1;

    // printf("%d \n" , ptr1) ; 364939
    // printf("%d \n" , a) ; 20
    // printf("%d \n" , ptr2) ; 364939

    //  printf("%d \n" , *ptr1) ; 20
    //  printf("%d \n" , &a) ; 364939
    //  printf("%d \n" , *ptr2) ; 20
//------------------DEREFRESCINg----------------------------
int a = 20 ;
int b = 200;

int* ptr1= &a ;
int* ptr2 = &b ;
int** ptr3 = *ptr1;

printf("%d \n" , *(&ptr3));
printf("%d \n" , *(&a)); // *() krke value print hoti haai 
printf("%d" , *(ptr2));

return 0;
}