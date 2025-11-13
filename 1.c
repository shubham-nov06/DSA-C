#include<stdio.h>
int main (){

int a = 5 , b = 6  ;
int *p1 , *p2  ;
p1 = &a ; 
p2 = &b ;
if( *p1 <= *p2 )
{
    printf("p1 is less than p2 ");
}
return 0 ;
}